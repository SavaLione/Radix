#include <fstream>
//-----------------------------------------------------------------------------
#include <iostream>
//-----------------------------------------------------------------------------
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной rules в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
bool b_settings_rules() {
	char buff[32], ch_start[] = "[START]", ch_end[] = "[END]", ch_switch_true[] = "rules = true", ch_switch_false[] = "rules = false";
	bool b_end = true, b_start = false;
	ifstream fin("settings.ini");
	while (b_end) {
		fin.getline(buff, 32);
		if (strcmp(buff, ch_start) == 0) {
			b_start = true;
		} else if (strcmp(buff, ch_end) == 0) {
			b_end = false, b_start = false;
		}
		if (strcmp(buff, ch_switch_true) == 0) {
			return true;
		} else if (strcmp(buff, ch_switch_false) == 0) {
			return false;
		}
	}
	fin.close();
	return true;
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной logger в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
bool b_settings_logger() {
	char buff[32], ch_start[] = "[START]", ch_end[] = "[END]", ch_switch_true[] = "logger = true", ch_switch_false[] = "logger = false";
	bool b_end = true, b_start = false;
	ifstream fin("settings.ini");
	while (b_end) {
		fin.getline(buff, 32);
		if (strcmp(buff, ch_start) == 0) {
			b_start = true;
		} else if (strcmp(buff, ch_end) == 0) {
			b_end = false, b_start = false;
		}
		if (strcmp(buff, ch_switch_true) == 0) {
			return true;
		} else if (strcmp(buff, ch_switch_false) == 0) {
			return false;
		}
	}
	fin.close();
	return true;
}