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

void msg_thr(string &s);
void log_thr(string &s);
void warn_thr(string &s);

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
void log(char level[], string s) {
	if (b_settings_logger()) {
		if (strcmp(level, "MSG") == 0) {
			thread thr(msg_thr, ref(s));
			thr.join();
		} else if (strcmp(level, "LOG") == 0) {
			thread thr(log_thr, ref(s));
			thr.join();
		} else if (strcmp(level, "WARN") == 0) {
			thread thr(warn_thr, ref(s));
			thr.join();
		} else {
			thread thr(warn_thr, ref(s));
			thr.join();
		}
	}
}
void msg_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [LOG]	" << s << "\n";
	fout.close();
}
void log_thr(string &s) {
	ofstream fout("logger.log", ios_base::app);
	fout << "[				    ] " << s << "\n";
	fout.close();
}
void warn_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [WARN]	" << s << "\n";
	fout.close();
}
