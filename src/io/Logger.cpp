/**
	\file
    \brief Модуль логирования

	\code
	Логгер
	Логгирование сообщений в файл logger.log
	Уровеней лога - 3
	Уровень 0:
	Вывод сообщений вида:
		[				    ] {MESSAGE}
	Применение:
		Обработка простых сообщений, без времени и префикса ([PREFIX])
	Уровень 1:
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[LOG] {MESSAGE}
	Применение:
		Обработка простых сообщений(загрузка модуля, отключение модуля, вход в программу, выход из программы и тд.) С временем и префиксом ([LOG])
	Уровень 2:
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[WARN] {MESSAGE}
	Применение:
		Обработка важных сообщений ошибки(не удачная загрузка модуля, не удачный вход в программу, экстренный выход из программы и тд.) С временем и префиксом ([WARN])
	\endcode

 	\example log.cpp
	\author SavaLione
*/
#include <string>
#include <fstream>
#include <thread>
#include <windows.h>
#include <stdio.h>

#include "Logger.h"

#include "Settings.h"

using namespace std;

void log_thr(string &s, string &level);

///////////////////////////////////////////////////////////////////////////////
//	Logger
///////////////////////////////////////////////////////////////////////////////
/** Логгирование сообщений в файл logger.log
	\param[in] level Уровень логирования
	\param[in] s Логируемая информация
*/
void log(string level, string s) {
	// Проверка Включен ли модуль логирования.
	if (b_settings("logger")) {
		/*
			Создание потока
				log_thr Функция для вызова.
				ref(s) Передача ссылки с сообщением для логирования.
				ref(level) Передача ссылки с уровнем логирования.
		*/
		// Создание потока.
		thread thr(log_thr, ref(s), ref(level));
		// Запуск потока.
		thr.join();
	}
}
/** Функция, для записи лога в файл
		\param[in] &s Передача ссылки с сообщением для логирования
		\param[in] &level Передача ссылки с уровнем логирования
*/
void log_thr(string &s, string &level){
	// Создание переменной тип time.
	SYSTEMTIME time;
	// По ссылке присвоение переменной time время системы.
	GetLocalTime(&time);
	// Открытие файла logger.log. Запись данных в конец файла.
	ofstream fout("logger.log", ios_base::app);
	// Строка для записи в файл logger.log
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] ["<< level << "]	" << s << "\n";
	// Закрытие файла logger.log.
	fout.close();
}