﻿/*
===========================================================================
Radix
		*******************************************
		*	DO NOT DELETE ANY FUNCTIONS	  *
		*******************************************
2017
===========================================================================
*/

///////////////////////////////////////////////////////////////////////////////
//	Standard titles.
///////////////////////////////////////////////////////////////////////////////
/*

	i_unique_model_number - специально сгенерированное уникальное число для каждой модели.
	i_settings_create_template - создание файла настроек. (0 - не удачное создание файла. 1 - удачное создание файла)

*/

///////////////////////////////////////////////////////////////////////////////
//	Formalization of comments.
///////////////////////////////////////////////////////////////////////////////
/*

// Short comment

///////////////////////////////////////////////////////////////////////////////
//	Separating the code block
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Description:
//		{DESCRIPTION}
//
// Code: {NAME}
///////////////////////////////////////////////////////////////////////////////

===========================================================================
{FULL_DESCRIPTION}
===========================================================================

(fast separating the code block)
//-----------------------------------------------------------------------------
*/

///////////////////////////////////////////////////////////////////////////////
//	Key
///////////////////////////////////////////////////////////////////////////////
/*

Delete in stable version
//	DELETE

Test function
Delete in stable version
//	TEST

Check for errors
//	DEBUG

Speed up the execution of the block/function
Make soup
//	SOUP

*/

///////////////////////////////////////////////////////////////////////////////
//	Threads
///////////////////////////////////////////////////////////////////////////////
void v_thread() {

}

///////////////////////////////////////////////////////////////////////////////
//	files
///////////////////////////////////////////////////////////////////////////////
void v_search() {

}

/*
	Поиск локальной версии прошивки
		1 - найдено
		0 - не найдено
		-1 - ошибка
	На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
	Структура файлов
		\\PATCH\\assets\\firmware
	Название файлов:
		{int}.rar
		int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
*/
int i_search(int i_unique_model_number) {

	return -1;
}

/*
	Загрузка прошивки через сеть интернет
		1 - успешно
		0 - не успешно
		-1 - ошибка
	На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
*/
int i_internet(int i_unique_model_number) {

	return -1;
}

///////////////////////////////////////////////////////////////////////////////
//	Graphic.
///////////////////////////////////////////////////////////////////////////////

void v_window() {

}

///////////////////////////////////////////////////////////////////////////////
//	Logging.
///////////////////////////////////////////////////////////////////////////////
/*
	Логгер
	Логгирование сообщений в файл logger.log
	Определение логгера:
		void log(char level[],string s);
	Логирование:
		log({LEVEL},{MESSAGE});
			LEVEL:
				MSG
				LOG
				WARN
			MESSAGE:
				Любая строка в кавычках
	Уровеней лога - 3
	Уровень 0:
	Вывод сообщений вида:
		[				    ] {MESSAGE}
	Применение:
		Обработка простых сообщений, без времени и префикса ([PREFIX])
	Уровень 1:
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[LOG] {MESSAGE}
	Применение:
		Обработка простых сообщений(загрузка модуля, отключение модуля, вход в программу, выход из программы и тд.) С временем и префиксом ([LOG])
	Уровень 2:
	Вывод сообщений вида:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[WARN] {MESSAGE}
	Применение:
		Обработка важных сообщений ошибки(не удачная загрузка модуля, не удачный вход в программу, экстренный выход из программы и тд.) С временем и префиксом ([WARN])
*/

///////////////////////////////////////////////////////////////////////////////
//	Internet.
///////////////////////////////////////////////////////////////////////////////
/*
*/
///////////////////////////////////////////////////////////////////////////////
//	adb.
///////////////////////////////////////////////////////////////////////////////
/*
*/
