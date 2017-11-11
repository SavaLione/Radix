/**
	\file
    \brief Модуль проверки стандартных файлов программы.
	
	Модуль проверяет наличие стандартных файлов программы
	
	Файлы:
	
		logger.log - вывод логера
		
		rules.txt - правила программы, с которыми должен согласиться пользователь
		
		settings.ini - файл настроек
		
		ip.ini - файл с ip адресами (не обязательно)
	\author SavaLione
*/
#include <fstream>

#include "..\io\Templates.h"
#include "..\io\Logger.h"

using namespace std;

void v_initialization_logger_log(); ///< Проверка файла logger.log
void v_initialization_rules_txt(); ///< Проверка файла settings.ini
void v_initialization_settings_ini(); ///< Проверка файла ip.ini
void v_initialization_ip_ini(); ///< Проверка файла rules.txt

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
/**
	Главная функция программы
	
	Проверяет наличие 3 стандартных файлов программы
	
		logger.log
		
		rules.txt
		
		settings.ini
*/
void v_initialization() {
	v_initialization_logger_log();
	v_initialization_settings_ini();
	//v_templates_create_ip_ini();
	v_initialization_rules_txt();
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла logger.log
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла logger.log
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_logger_log() {
	ifstream fin("logger.log");
	if (!fin.is_open()) {
		v_templates_create_logger_log();
		log("WARN", "Logger module. logger.log file not found");
	}
	log("MSG", "Logger module is loaded");
	fin.close();
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла settings.ini
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла settings.ini
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		v_templates_create_settings_ini();
		log("WARN", "Settings module. settings.ini file not found");
	}
	log("LOG", "Settings module is loaded");
	fin.close();
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла ip.ini
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла ip.ini
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_ip_ini() {
	ifstream fin("ip.ini");
	if (!(fin.is_open())) {
		v_templates_create_ip_ini();
		log("WARN", "Settings module. settings.ini file not found");
	}
	log("LOG", "Settings module is loaded");
	fin.close();
}


///////////////////////////////////////////////////////////////////////////////
//	Проверка файла rules.txt
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла rules.txt
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		v_templates_create_rules_txt();
		log("WARN", "Rules module. rules.txt file not found");
	}
	log("LOG", "Rules module is loaded");
	fin.close();
}