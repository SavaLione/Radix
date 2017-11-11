/**
	\file
    \brief Модуль работы с ip адресами.

	\author SavaLione
*/
#include <fstream>

using namespace std;

/** Парсинг ip адресов
	\param[in] ch_return Массив char с ip адресом
    \param[out] uc_arr_return Возвращяет массив типа unsigned char
	\return Массив из 4 переменных типа unsigned char
    \example v_convert_ip.cpp
*/
void v_convert_ip(char *ch_ip_addr, unsigned char* uc_arr_return) {
	// Массив unsigned char. Заполнен пустым значением. Разделён на 4 блока. Нужен для хранения байт ip адресов
    unsigned char uc_arr[4] = {0};
	size_t index = 0;
    while (*ch_ip_addr) {
        if (isdigit((unsigned char)*ch_ip_addr)) {
            uc_arr[index] *= 10;
            uc_arr[index] += *ch_ip_addr - '0';
        } else {
            index++;
        }
        ch_ip_addr++;
    }
	uc_arr_return[0] = uc_arr[0];
	uc_arr_return[1] = uc_arr[1];
	uc_arr_return[2] = uc_arr[2];
	uc_arr_return[3] = uc_arr[3];
}

/** Парсинг ip адресов
	\param[out] ch_return Массив char, в который запишется ip адрес
	\return Массив символов, который запишется в ch_return
    \example v_get_ip.cpp
*/
void v_get_ip(char* ch_return) {
	char buff[32];
	ifstream fin("ip.ini");
	if (fin.is_open()) {
		fin.getline(buff, 32);
	}
	fin.close();
    if ((buff == "localhost") || (buff == "127.0.0.1") || (buff == "0:0:0:0:0:0:0:1")) {
        char buff[32] = "localhost";
    }
	for(int i=0; i < 16; ++i){
		ch_return[i] = buff[i];
	}
}