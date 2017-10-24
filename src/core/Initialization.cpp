#include <fstream>
using namespace std;
int i_settings_create_template();
int i_settings_create_rules_txt();
int i_initialization_settings_ini();
int i_initialization_rules_txt();

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
void v_initialization() {
	if (i_initialization_rules_txt()) {
		// log(LOG) << "Файл прав существует";
	} else {
		// log(LOG) << "Файл прав не существует";
	}

	if (i_initialization_settings_ini()) {
		// log(LOG) << "Файл настроек существует";
	} else {
		// log(LOG) << "Файл настроек не существует";
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
int i_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		if (i_settings_create_template()) {
			// log(LOG) << "Файл настроек создан";
			return 1;
		} else {
			// log(ERROR) << "Не получилось создать файл";
			return 0;
		}
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
int i_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		if (i_settings_create_rules_txt()) {
			// log(LOG) << "Файл настроек создан";
			return 1;
		} else {
			// log(ERROR) << "Не получилось создать файл";
			return 0;
		}
	}
}