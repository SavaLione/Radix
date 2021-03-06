/**
	\file
    \brief Модуль настроек. Парсит переменные в файлах.
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "../core/Constants.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной ch_arr_value в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Парсинг параметров
	\param[in] ch_arr_value[] Значение, которое надо найти в файле.
	\return Значение переменной
		true
		false
*/
bool b_settings(char ch_arr_value[]) {					//Парсинг параметров.
	string s_value(ch_arr_value),						//Значение, которое надо найти в файле.
		   s_true = (s_value + " = true"),				// Значение присвоенное константе.
		   s_false = (s_value + " = false");			// Значение присвоенное константе.
	char buff[radix::buff_size];						// Буфер в (radix::buff_size) символа.
	bool b_end = true, b_start = false;					// Переменные для проверки начала и конца файла.
	ifstream fin(radix::settings_list);					// Открытие файла с настройками (radix::settings_list).
	if (fin.is_open()) {								// Если файл есть и его можно открыть.
		while (b_end) {									// Цикл до конца файла. Конец файла задаётся словом [END]
			fin.getline(buff, radix::buff_size);		// Помещение строки из файла в буфер.
			string s_buff(buff);						// Создание строки s_buff с буфером.
			if (strcmp(buff, "[START]") == 0) {			// Проверка. Игнорирование всего, что стоит не в блоках [START] и [END]
				b_start = true;							// Поиск блока [START] Если блок найден, то можно читать константы из файла.
			} else if (strcmp(buff, "[END]") == 0) {	// Если блок [END] найден, то прекратить читать константы.
				b_end = false, b_start = false;			// Поиск блока [END] Если блок найден, то прекратить читать константы из файла и выйти из алгоритма.
			}
			if (s_buff == s_true) {						// Поиск констант в файле.
				fin.close();							// Если искомая строка найдена, то закрытие файла и возвращение значения.
				return true;							// Возвращение значения true, если константе присвоено true значение.
			} else if (s_buff == s_false) {				// Если искомая строка найдена.
				fin.close();							// Если искомая строка найдена, то закрытие файла и возвращение значения.
				return false;							// Возвращение значения false, если константе присвоено false значение.
			}
		}
	}
	fin.close();										// Закрытие файла. Если строка не найдена.
	return true;										// Возвращение значения true, если строка не найдена.
}