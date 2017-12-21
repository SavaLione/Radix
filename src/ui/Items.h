/**
	\file
	\brief Заголовочный файл с подключением меню.
	\author SavaLione	
*/
#ifndef ITEMS_H
#define ITEMS_H

#include <string>

/**
	Главное меню.
	\return Выбранный пункт меню.
*/
std::string s_mainmenu();

/**
	Сообщение с вопросом для пользователя.
	\param[in] item Строка до выполнения модуля меню.
	\return Выбранный пункт меню.
*/
std::string s_querymenu(std::string item);

/**
	Проверка согласия пользователя с пользовательским соглашением.
	\return Выбранный пункт меню.
*/
std::string s_checkagreement();

/** Инструкция к программе. */
void v_manual();

#endif // ITEMS_H