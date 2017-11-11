/**
	\file
	\brief Заголовочный файл с подключением модуля работы с ip адресами.
	\author SavaLione	
*/
#ifndef IP_H
#define IP_H

/** Парсинг ip адресов
	\param[in] ch_ip_addr Массив char с ip адресом
    \param[out] uc_arr_return Возвращяет массив типа unsigned char
	\return Массив из 4 переменных типа unsigned char
*/
void v_convert_ip(char *ch_ip_addr, unsigned char* uc_arr_return);
/** Парсинг ip адресов
	\param[out] ch_return Массив char, в который запишется ip адрес
	\return Массив символов, который запишется в ch_return
*/
void v_get_ip(char* ch_return);

#endif // IP_H