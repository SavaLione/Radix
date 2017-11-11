/**
	\file
	\brief Заголовочный файл с подключением модуля настроек.
	\author SavaLione	
*/
#ifndef SETTINGS_H
#define SETTINGS_H

/** Парсинг параметров
	\param[in] ch_arr_value[] Значение, которое надо найти в файле
	\return Значение переменной
		true
		false
*/
bool b_settings(char ch_arr_value[]);
/** Парсинг ip адресов
	\param[out] ch_return Массив char, в который запишется ip адрес
	\return Массив символов, который запишется в ch_return
*/
void v_get_ip(char* ch_return);


#endif // SETTINGS_H