/**
	\file
    \brief Функции для создания стандартных файлов программы.
	\example templates.cpp
	\author SavaLione
*/
#include <fstream>

#include "Templates.h"

#include "..\core\Constants.h"

#include "..\io\Logger.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file logger.log
///////////////////////////////////////////////////////////////////////////////
/** Создание файла пользовательского соглашения.

		logger.log - файл с логом вывода
*/
void v_templates_create_logger_log() {								// Создание файла пользовательского соглашения.
	try {															// Обработка исключений. При ошибке исключить аварийное завершение программы.
		ofstream fout(radix::logger_list);							// Создание и открытие файла с настройками (radix::logger_list).
		fout << "[				    ] Creating file logger.log\n";	//	[				    ] Creating file logger.log
		fout.close();												// Закрытие файла.
	} catch(std::string s) {										// При ошибке логирование.
		log("WARN", s);												// Ошибка в лог.
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Создание файла настроек.

		settings.ini - файл с настройками
*/
void v_templates_create_settings_ini() {							// Создание файла настроек.
	try {															// Обработка исключений. При ошибке исключить аварийное завершение программы.
		ofstream fout(radix::settings_list);						// Создание и открытие файла с настройками (radix::settings_list).
		fout << "#Radix" << "\n";									// 	#Radix
		fout << "#2017" << "\n";									//	#2017
		fout << "\n";												//
		fout << "[START]" << "\n";									//	[START]
		fout << "rules = true" << "\n";								//	rules = true
		fout << "logger = true"<< "\n";								//	logger = true
		fout << "internet = false"<< "\n";							//	internet = false
		fout << "[END]";											//	[END]
		fout.close();												// Закрытие файла.
	} catch(std::string s) {										// При ошибке логирование.
		log("WARN", s);												// Ошибка в лог.
	}
}