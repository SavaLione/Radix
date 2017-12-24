/**
	\file
	\brief Заголовочный файл с вызовом модуля проверки стандартных файлов программы и вызова алгоритма рутирования.
	
	Вызов:
		\code
		void root();
		void v_initialization();
		\endcode
		
	\author SavaLione
*/
#ifndef OPERATIONS_H
#define OPERATIONS_H

/** Вызов алгоритма рутирования. */
void root();

/** Вызов модуля проверки файла на наличие в папке.
	\param[in] ch_file_name Путь и файл, для проверки.
    \return наличие файла. true - файл найден. false - файл не найден.
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