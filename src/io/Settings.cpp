#include <fstream>

//-----------------------------------------------------------------------------
#include <iostream>
//-----------------------------------------------------------------------------
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной rules в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
bool b_settings(char ch_arr_value[]) {
	string s_true, s_false;
	char buff[32];
	string s_value(ch_arr_value);
	s_true = s_value + " = true";
	s_false = s_value + " = false";
	bool b_end = true, b_start = false;
	ifstream fin("settings.ini");
	while (b_end) {
		fin.getline(buff, 32);
		string s_buff(buff);
		if (strcmp(buff, "[START]") == 0) {
			b_start = true;
		} else if (strcmp(buff, "[END]") == 0) {
			b_end = false, b_start = false;
		}
		if (s_buff == s_true) { // true
			return true;
		} else if (s_buff == s_false) {
			return false;
		}
	}
	fin.close();
	return true;
}