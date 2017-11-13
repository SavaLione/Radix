/**
	\file
    \brief Модуль работы с ip адресами.

	\author SavaLione
*/
#include <fstream>

using namespace std;

/** Парсинг ip адресов
	\param[in] ch_ip_addr Массив char с ip адресом
    \param[out] uc_arr_return Возвращяет массив типа unsigned char
	\return Массив из 4 переменных типа unsigned char
    \example v_convert_ip.cpp
*/
void v_convert_ip(char *ch_ip_addr, unsigned char* uc_arr_return) {
	// Массив unsigned char. Заполнен пустым значением. Разделён на 4 блока. Нужен для хранения байт ip адресов
    unsigned char uc_arr[4] = {0};
	// size_t переменная. Плюс в портируемости приложений (32 => 64) 
	size_t index = 0;
    while (*ch_ip_addr) {
		/*
			Функция isdigit проверяет аргумент, является ли он десятичной цифрой. Приведение типа и указатель массива char с ip адресом.
			Если элемент массива - цифра, то элемент массива index умножаем на 10, к элементу массива index прибавляем текущий элемент масива ch_ip_addr.
			Если элемент массива - не цифра, то переходим к следующему блоку ip адреса
		*/
        if (isdigit((unsigned char)*ch_ip_addr)) {
            uc_arr[index] *= 10;
            uc_arr[index] += *ch_ip_addr - '0';
        } else {
            index++;
        }
		// Переходим к следующему элементу массива ch_ip_addr.
        ch_ip_addr++;
    }
	// После того, как элементы массива uc_arr заполнены, возвращяем эти значения
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
	// Задаём буфер в 1024 элемента
	char buff[1024];
	// Открываем файл ip.ini для записи
	ifstream fin("ip.ini");
	// Если файл открыт, получаем первую строку и записываем её в буфер (buff)
	if (fin.is_open()) {
		fin.getline(buff, 1024);
	} else {
		buff[] = "asd";
	}
	// Закрываем файл ip.ini
	fin.close();
	// Возвращяем массив char
	for(int i=0; i < strlen(buff); ++i){
		ch_return[i] = buff[i];
	}
}