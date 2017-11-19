﻿/*
===========================================================================
Radix
2017
===========================================================================
*/

///////////////////////////////////////////////////////////////////////////////
//	Standard titles.
///////////////////////////////////////////////////////////////////////////////
/*

	i_unique_model_number - специально сгенерированное уникальное число для каждой модели.

*/

///////////////////////////////////////////////////////////////////////////////
//	Formalization of comments.
///////////////////////////////////////////////////////////////////////////////
/*
		Formalization of comments

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
(Удалить в стабильной версии)

Test function
Delete in stable version
//	TEST
(Удалить в стабильной версии)

Check for errors
//	DEBUG
(Проверка на ошибки)

*/

///////////////////////////////////////////////////////////////////////////////
//	files
///////////////////////////////////////////////////////////////////////////////
/*
	Модуль работы с файлами.
	Необходимо реализовать:
		Поиск файлов в папке
		Перенос файлов
		Сравнение контрольных сумм файлов
*/
	/*
		Поиск файлов в папке

		На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)

		Поиск файлов в папке firmware или в глобальной {PATCH}

		Возвращяемые значения:
			1 - найдено
			0 - не найдено
			-1 - ошибка работы модуля
	*/
	/*
		Перенос файлов

		На вход подаётся расположение файла и папка, в которую надо перенести файл

		Возвращяемые значения:
			1 - удачно
			0 - не удачно
			-1 - ошибка работы модуля
	*/
	/*
		Сравнение контрольных сумм файлов

		На вход подаётся расположение 2-х файлов, которые надо сравнить

		Возвращяемые значения:
			1 - удачно
			0 - не удачно
			-1 - ошибка работы модуля
	*/

///////////////////////////////////////////////////////////////////////////////
//	Graphic.
///////////////////////////////////////////////////////////////////////////////
/*
	Модуль работы с графикой.
	Необходимо реализовать:
		Вывод окна, которое сообщает статус соединения с интернетом
		Вывод окна, которое сообщает статус соединения с телефоном
		Вывод окна с сообщением о ошибке
		Вывод главного окна программы
*/
	/*
		Вывод окна, которое сообщает статус соединения с интернетом

		2 состояния:
			1) Соединения нет
				Действия:
					Выход из программы (Кнопка)
					Продолжение (Кнопка)
			2) Соединение есть
				Действия:
					Продолжить (действие)
	*/
	/*
		Вывод окна, которое сообщает статус соединения с телефоном

		2 состояния:
			1) Соединения нет
				Действия:
					Выход из программы (Кнопка)
					Перепроверка (Кнопка)
			2) Соединение есть
				Действия:
					Продолжить (действие)
	*/
	/*
		Вывод окна с сообщением о ошибке
		Зависит от ошибки

		Критическое:
			Выход из программы. Сообщение в лог
		Важное:
			Вывод окна с ошибкой
	*/
	/*
		Вывод главного окна программы

		4 зоны:
			1) Информация о устройстве (Статическая зона)
				Данные берутся из модуля ADB при старте программы
				Примерно:
					Модель
					Серийный номер
			2) Статус выполнения рутирования (Динамическая зона)
				Шкала
			3) Ползунок соглашения с условиями (Динамическая зона)
				Два положения:
					1 - стандартное. Присваивается при запуске программы
					2 - Пользователь согласился с условиями програмы и передвинул ползунок в это положение
			4) Кнопка рутирования (Динамическая зона)
				Активна, только если пользователь согласился с условиямим программы


		Концепт:
			..\..\assets\png\RadixMainMenu.png
	*/

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
	Модуль работы с интернетом.
	Необходимо реализовать:
		Работа с различными сетевыми протоколами (ftp, http)
		При отсутствии интернета загрузка из папки firmware
		Загрузка прошивки через сеть интернет в папку firmware
*/
	/*
		Работа с различными сетевыми протоколами (ftp, http)

		Возвращяемые значения:
			1 - успешно
			0 - не успешно
			-1 - ошибка работы модуля
	*/
	/*
		При отсутствии интернета загрузка из папки firmware

		Расположение:
			..\..\assets\firmware\

		Возвращяемые значения:
			1 - успешно
			0 - не успешно
			-1 - ошибка работы модуля
	*/
	/*
		Загрузка прошивки через сеть интернет в папку firmware
	
		На вход подаётся значение int - специально сгенерированное уникальное число для каждой модели. (i_unique_model_number)
		
		Расположение:
			..\..\assets\firmware\

		Возвращяемые значения:
			1 - успешно загружено
			0 - не успешно загружено
			-1 - ошибка работы модуля
*/

///////////////////////////////////////////////////////////////////////////////
//	adb.
///////////////////////////////////////////////////////////////////////////////
/*
	Модуль работы с протоколом adb.
	Необходимо реализовать:
		Статус телефона
		Получение информации с телефона
		Рутирование устройства
*/
	/*
		Статус телефона

		Возвращяемые значения:
			1 - телефон подключен
			0 - телефон не подключен
			-1 - ошибка работы модуля
	*/
	/*
		Получение информации с телефона
			Модель
			Серийный номер
	*/
	/*
		Рутирование устройства

		Возвращяемые значения:
			1 - телефон рутирован
			0 - телефон не рутирован
			-1 - ошибка работы модуля
	*/
