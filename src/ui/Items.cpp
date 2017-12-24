/**
	\file
    \brief Создание меню.
	\example items.cpp
	\author SavaLione
*/
#include <iostream>
#include <Windows.h>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"

using namespace std;

void v_mainmenu_before(); 			///< Блок до выполнения модуля меню.
void v_mainmenu_after(); 			///< Блок после выполнения модуля меню.
void v_querymenu_before(); 			///< Блок до выполнения модуля меню.
void v_querymenu_after(); 			///< Блок после выполнения модуля меню.
void v_checkagreement_before(); 	///< Блок до выполнения модуля меню.
void v_checkagreement_after(); 		///< Блок после выполнения модуля меню.

/**
	Главное меню.
	\return Выбранный пункт меню.
*/
string s_mainmenu() {
	menu_s mainmenu;							// Создание меню.
	mainmenu.name = "Main Menu";				// Название меню.
	mainmenu.vec_item_name = {"Root", "Exit"};	// Пункты меню.
	mainmenu.before_menu = v_mainmenu_before;	// Функция до создаваемого меню.
	mainmenu.after_menu = v_mainmenu_after;		// Функция после создаваемого меню.
	return s_menu(mainmenu);					// Выбранный пункт меню.
}

/** Блок до выполнения модуля меню. */
void v_mainmenu_before() {
    v_set_color(BLACK, WHITE);		// Установить цвет текста - белый, цвет заднего фона - чёрный.
    cout << logo::border;			// Вывод линии в консоль. ===========================
    v_set_color(GREEN, BLACK);		// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
    cout << logo::radix;			// Ascii графика. Вывод логотипа в консоль.
    cout << endl;					// Перенос строки.
    v_set_color(BLACK, WHITE);		// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << logo::little_help;		// Справка по управлению. ==== <- use to move -> ====
    v_set_color(WHITE, BLACK);		// Установить цвет текста - белый, цвет заднего фона - чёрный.
}

/** Блок после выполнения модуля меню. */
void v_mainmenu_after() {			// Блок после выполнения модуля меню.
	cout << endl;					// Перенос строки.
}

/**
	Главное меню.
	\param[in] item Строка до выполнения модуля меню.
	\return Выбранный пункт меню.
*/
string s_querymenu(string item) {
	menu_s querymenu;							// Создание меню.
	querymenu.name = "Query Menu";				// Название меню.
	querymenu.vec_item_name = {"Yes", "No"};	// Пункты меню.
	querymenu.s_before = item;					// Строка до создаваемого меню.
	querymenu.before_menu = v_querymenu_before;	// Функция до создаваемого меню.
	querymenu.after_menu = v_querymenu_after;	// Функция после создаваемого меню.
	return s_menu(querymenu);					// Выбранный пункт меню.
}

/** Блок до выполнения модуля меню. */
void v_querymenu_before(){			// Блок до выполнения модуля меню.
    cout << logo::s_continue;		// Вывод вопроса в консоль.  Continue?
}

/** Блок после выполнения модуля меню. */
void v_querymenu_after(){			// Блок после выполнения модуля меню.
	cout << endl;					// Перенос строки.
    cout << logo::move_indentation;	// Вывод отступа. Используется в связке с move. {       }<- use to move ->
    v_set_color(BLACK, WHITE);		// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << logo::move;				// Вывод помощи по управлению. <- use to move ->
    v_set_color(LIGHTGRAY, BLACK);	// Установить цвет текста - серый, цвет заднего фона - чёрный.
	cout << endl;					// Перенос строки.
}

/**
	Проверка согласия пользователя с пользовательским соглашением.
	\return Выбранный пункт меню.
*/
string s_checkagreement() {
	menu_s checkagreement;									// Создание меню.
	checkagreement.name = "Check Agreement Menu";			// Название меню.
	checkagreement.vec_item_name = {"Yes", "No"};			// Пункты меню.
	checkagreement.before_menu = v_checkagreement_before;	// Функция до создаваемого меню.
	checkagreement.after_menu = v_checkagreement_after;		// Функция после создаваемого меню.
	return s_menu(checkagreement);							// Выбранный пункт меню.
}

/** Блок до выполнения модуля меню. */
void v_checkagreement_before(){
    cout << logo::eula << endl;		// Вывод пользовательского соглашения в консоль.
    cout << logo::license;			// Вывод вопроса в консоль. Do you agree with the license?
}

/** Блок после выполнения модуля меню. */
void v_checkagreement_after(){
	cout << endl;					// Перенос строки.
    cout << logo::move_indentation;	// Вывод отступа. Используется в связке с move. {       }<- use to move ->
    v_set_color(BLACK, WHITE);		// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << logo::move;				// Вывод помощи по управлению. <- use to move ->
    v_set_color(LIGHTGRAY, BLACK);	// Установить цвет текста - серый, цвет заднего фона - чёрный.
	cout << endl;					// Перенос строки.
}

/** Инструкция к программе. */
void v_manual() {
	system("cls");					// Очистка экрана консоли
	cout << logo::s_manual;			// Инструкция к программе.
	cout << logo::move_indentation	// Отступ. Используется в связке с move.
		 << logo::move_indentation;	// Отступ. Используется в связке с move.
	cout << endl;					// Перенос строки.
	cout << logo::move_indentation;	// Отступ. Используется в связке с move.
	v_set_color(BLACK, WHITE);		// Установить цвет текста - чёрный, цвет заднего фона - белый.
	cout << logo::enter;			// Продолжить выполнение программы по нажатию любой клавиши. Press any key to continue.
	v_set_color(WHITE, BLACK);		// Установить цвет текста - белый, цвет заднего фона - чёрный.
	cout << endl;					// Перенос строки.
	pause();						// Пауза до нажатия любой клавиши.
}