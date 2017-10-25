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
void MAGE(string s) {
	thread thr(MAGE_thr, ref(s));
	thr.join();
}
void MAGE_thr(string &s) {
	ofstream fout("logger.log", ios_base::app);
	fout << "[				    ] " << s << "\n";
	fout.close();
}

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
void LOG(string s) {
	thread thr(LOG_thr, ref(s));
	thr.join();
}
void LOG_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [LOG]	" << s << "\n";
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
void WARN(string s) {
	thread thr(WARN_thr, ref(s));
	thr.join();
}
void WARN_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [WARN]	" << s << "\n";
	fout.close();
}