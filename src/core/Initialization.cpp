#include <fstream>
using namespace std;
void v_templates_create_logger_log();
void v_templates_create_rules_txt();
void v_templates_create_settings_ini();
void v_initialization_settings_ini();
void v_initialization_rules_txt();
void v_initialization_logger_log();

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
void v_initialization() {
	v_initialization_logger_log();
	v_initialization_rules_txt();
	v_initialization_settings_ini();
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла logger.log
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла logger.log
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_logger_log() {
	ifstream fin("logger.log");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		v_templates_create_logger_log();
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла rules.txt
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла rules.txt
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		v_templates_create_rules_txt();
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла settings.ini
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла settings.ini
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		v_templates_create_settings_ini();
	}
}