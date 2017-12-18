/**
	\file
	\brief Заголовочный файл с подключением модуля создания стандартных файлов программы.
	\author SavaLione	
*/
#ifndef TEMPLATES_H
#define TEMPLATES_H

/** Создание файла пользовательского соглашения.

		logger.log - файл с логом вывода
*/
void v_templates_create_logger_log();

/** Создание файла настроек.

		settings.ini - файл с настройками
*/
void v_templates_create_settings_ini();

#endif // TEMPLATES_H