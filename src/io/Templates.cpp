/**
	\file
    \brief Функции для создания стандартных файлов программы.
	\example templates.cpp
	\author SavaLione
*/
#include <fstream>

#include "Templates.h"

#include "..\core\Constants.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file logger.log
///////////////////////////////////////////////////////////////////////////////
/** Создание файла пользовательского соглашения.

		logger.log - файл с логом вывода
*/
void v_templates_create_logger_log() {
	// Обработка исключений. При ошибке исключить аварийное завершение программы.
	try {
		// Создание и открытие файла с настройками (radix::logger_list).
		ofstream fout(radix::logger_list);
		fout << "[				    ] " << "Creating file logger.log" << "\n";
		// Закрытие файла.
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Создание файла настроек.

		settings.ini - файл с настройками
*/
void v_templates_create_settings_ini() {
	// Обработка исключений. При ошибке исключить аварийное завершение программы.
	try {
		// Создание и открытие файла с настройками (radix::settings_list).
		ofstream fout(radix::settings_list);
		fout << "#Radix" << "\n";
		fout << "#2017" << "\n";
		fout << "\n";
		fout << "[START]" << "\n";
		fout << "rules = true" << "\n";
		fout << "logger = true"<< "\n";
		fout << "internet = false"<< "\n";
		fout << "[END]";
		// Закрытие файла.
		fout.close();
	} catch(exception) {

	}
}