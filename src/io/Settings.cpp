/**
	\file
    \brief Модуль настроек. Парсит переменные в файлах
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "..\core\Net.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной ch_arr_value в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Парсинг параметров
	\param[in] ch_arr_value[] Значение, которое надо найти в файле
	\return Значение переменной
		true
		false
*/
bool b_settings(char ch_arr_value[]) {
	string s_value(ch_arr_value), s_true = (s_value + " = true"), s_false = (s_value + " = false");
	// Буфер в 32 символа
	char buff[32];
	bool b_end = true, b_start = false;
	ifstream fin("settings.ini");
	if (fin.is_open()) {
		while (b_end) {
			fin.getline(buff, 32);
			string s_buff(buff);
			if (strcmp(buff, "[START]") == 0) {
				b_start = true;
			} else if (strcmp(buff, "[END]") == 0) {
				b_end = false, b_start = false;
			}
			if (s_buff == s_true) {
				fin.close();
				return true;
			} else if (s_buff == s_false) {
				fin.close();
				return false;
			}
		}
	}
	fin.close();
	return true;
}

/** Парсинг ip адресов
	\param[out] ch_return Массив char, в который запишется ip адрес
	\return Массив символов, который запишется в ch_return
*/
void v_get_ip(char* ch_return) {
	char buff[32];
	ifstream fin("ip.ini");
	if (fin.is_open()) {
		fin.getline(buff, 32);
	}
	fin.close();

	for(int i=0; i < 16; ++i){
		ch_return[i] = buff[i];
	}
}