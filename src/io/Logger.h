/**
	\file
	\brief Заголовочный файл с подключением модуля логирования.
	\author SavaLione	
*/
#ifndef LOGGER_H
#define LOGGER_H

/** Логгирование сообщений в файл logger.log
	\param[in] level Уровень логирования
	\param[in] s Логируемая информация
*/
#include <string>
void log(std::string level, std::string s);

#endif // LOGGER_H