/**
	\file
    \brief Модуль проверки файлов для рутирования телефона.
	
	Модуль проверяет наличие файлов для рутирования телефона.
	
	\example checkingfiles.cpp
	\author SavaLione
*/
#include <string>
#include <io.h>

#include "..\core\Constants.h"
#include "..\core\CheckingFiles.h"
#include "..\io\Logger.h"
#include "..\io\Templates.h"
#include "..\ui\LoadScale.h"
#include "..\ui\QueryMenu.h"
#include "..\ui\LoadScale.h"

void v_initialization_logger_log(); ///< Проверка файла logger.log
void v_initialization_settings_ini(); ///< Проверка файла settings.ini

using namespace std;

/** Вызов модуля проверки файла на наличие в папке.
	\param[in] ch_file_name Путь и файл, для проверки.
    \return наличие файла.
*/
bool b_file_exists(const char *ch_file_name){
	return access(ch_file_name, 0) != -1;
}

/** Вызов модуля проверки файлов.
    \return 0 - неуспешная проверка файлов. 1 - успешная проверка файлов.
*/
int i_checking_files() {
	std::string s_recovery_file = radix::recovery_file, s_su_file = radix::su_file;
	// Шкала загрузки 0 положение
	v_loadscale(0);
	if (b_file_exists(radix::recovery_file)) {
		s_recovery_file += radix::found;
		log("LOG", s_recovery_file);
	} else {
		s_recovery_file += radix::not_found;
		log("WARN", s_recovery_file);
		if (i_querymenu(s_recovery_file) == 1) {
			log("WARN", radix::ch_user_continue);
		} else {
			log("LOG", radix::ch_user_not_continue);
			return 0;
		}
	}
	v_loadscale(12); // Шкала загрузки 12 положение
	if (b_file_exists(radix::su_file)) {
		s_su_file += radix::found;
		log("LOG", s_su_file);
	} else {
		s_su_file += radix::not_found;
		log("WARN", s_su_file);
		if (i_querymenu(s_su_file) == 1) {
			log("WARN", radix::ch_user_continue);
		} else {
			log("LOG", radix::ch_user_not_continue);
			return 0;
		}
	}
	v_loadscale(24); // Шкала загрузки 24 положение
	return 1;
}

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
/**
	Функция проверяет наличие 3 стандартных файлов программы
	
		logger.log
		
		rules.txt
		
		settings.ini
*/
void v_initialization() {
	v_loadscale(0); // Шкала загрузки 0 положение
	v_initialization_logger_log(); // Проверка файла logger.log
	v_loadscale(10); // Шкала загрузки 10 положение
	v_initialization_settings_ini(); // Проверка файла settings.ini
	v_loadscale(24); // Шкала загрузки 24 положение
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
	if (!(b_file_exists(radix::logger_list))) {
		v_templates_create_logger_log();
	}
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
	if (!(b_file_exists(radix::settings_list))) {
		v_templates_create_settings_ini();
	}
}