/**
	\file
	\brief Заголовочный файл с константами.
	\author SavaLione	
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace radix {
	/** 
	    Размер буфера.
	 	В основном используется для чтения строк из файла.
	 */
	const size_t buff_size = 32;
	/** 
	    Размер буфера под ссылку.
	 	В основном используется для чтения адресов из файла.
	 */
	const size_t length_url = 64;

	/** Файл с выводом логера. */
	const char logger_list[] = "logger.log";
	/** Файл с настройками программы. */
	const char settings_list[] = "settings.ini";
	/** Файл с адресами. */
	const char address_list[] = "ip.ini";
	/** Файл с пользовательским соглашением. */
	const char rules_list[] = "rules.txt";

	/** Путь к прошивкам. */
	const char firmware_way[] = "\\assets\\firmware\\";
	/** Путь к дополнительным файлам программы. */
	const char patch[] = "\\assets\\";

	/** Расширение прошивок . */
	const char expansion_file[] = ".zip";
}

#endif // CONSTANTS_H