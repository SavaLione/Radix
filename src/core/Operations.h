/**
	\file
	\brief 
	\author SavaLione	
*/
#ifndef OPERATIONS_H
#define OPERATIONS_H

void root();

/** Вызов модуля проверки файла на наличие в папке.
	\param[in] ch_file_name Путь и файл, для проверки.
    \return наличие файла.
*/
bool b_file_exists(const char *ch_file_name);

/** Вызов модуля проверки файлов.
    \return 0 - неуспешная проверка файлов. 1 - успешная проверка файлов.
*/
int i_checking_files();

/**
	Функция проверяет наличие 3 стандартных файлов программы
	
		logger.log
		
		rules.txt
		
		settings.ini
*/
void v_initialization();

#endif // OPERATIONS_H