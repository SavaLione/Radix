/*
===========================================================================
Radix
		Уровни лога:
			0 - MSG уровень. Вывод текста без времени
			1 - LOG уровень. Стандартные сообщения загрузки, подключения, отключения модулей. Статус задания
			2 - WARN уровень. Сообщения ошибки
2017
===========================================================================
*/
#include <string>
#include <fstream>
#include <thread>
#include <windows.h>
#include <stdio.h>
using namespace std;
bool b_settings_logger();
void MAGE_thr(string &s);
void LOG_thr(string &s);
void WARN_thr(string &s);

///////////////////////////////////////////////////////////////////////////////
//	Logger. MSG
///////////////////////////////////////////////////////////////////////////////
/*
	Логгер
	Уровень лога - 0
	Логгирование сообщений в файл logger.log
	Вывод сообщений вида:
		[				    ] {MESSAGE}
*/

///////////////////////////////////////////////////////////////////////////////
//	Logger. LOG
///////////////////////////////////////////////////////////////////////////////
/*
	Логгер
	Уровень лога - 1
	Логгирование сообщений в файл logger.log
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[LOG] {MESSAGE}
*/
void LOG(char[5] level,string s) {
	char ch_arr_msg[] = "MSG", ch_arr_log[] = "LOG", ch_arr_warn[] = "WARN";
	if (b_settings_logger()) {
		if (strcmp(level, ch_arr_msg) == 0) {
			thread thr(msg_thr, ref(s));
			thr.join();
		} else if (strcmp(level, ch_arr_log) == 0) {
			thread thr(log_thr, ref(s));
			thr.join();
		} else if (strcmp(level, ch_arr_warn) == 0) {
			thread thr(warn_thr, ref(s));
			thr.join();
		} else {
			
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

///////////////////////////////////////////////////////////////////////////////
//	Logger. WARN
///////////////////////////////////////////////////////////////////////////////
/*
	Логгер
	Уровень лога - 2
	Логгирование сообщений в файл logger.log
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[WARN] {MESSAGE}
*/
