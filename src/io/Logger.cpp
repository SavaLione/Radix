/*
===========================================================================
Radix
2017
===========================================================================
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
/*
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
*/
void log(string level, string s) {
	if (b_settings("logger")) {
		thread thr(log_thr, ref(s), ref(level));
		thr.join();
	}
}
void log_thr(string &s, string &level){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] ["<< level << "]	" << s << "\n";
	fout.close();
}
