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
	menu_s mainmenu;
	mainmenu.name = "Main Menu";
	mainmenu.vec_item_name = {"Root", "Exit"};
	mainmenu.before_menu = v_mainmenu_before;
	mainmenu.after_menu = v_mainmenu_after;
	return s_menu(mainmenu);
}

/** Блок до выполнения модуля меню. */
void v_mainmenu_before() {
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(BLACK, WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
	// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
    v_set_color(GREEN, BLACK);
	// Ascii графика. Вывод логотипа в консоль.
    cout << logo::radix;
	// Перенос строки.
    cout << endl;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
	// Справка по управлению. ==== <- use to move -> ====
    cout << logo::little_help;
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(WHITE, BLACK);
}

/** Блок после выполнения модуля меню. */
void v_mainmenu_after() {
	// Перенос строки.
	cout << endl;
}

/**
	Главное меню.
	\param[in] item Строка до выполнения модуля меню.
	\return Выбранный пункт меню.
*/
string s_querymenu(string item) {
	menu_s querymenu;
	querymenu.name = "Query Menu";
	querymenu.vec_item_name = {"Yes", "No"};
	querymenu.s_before = item;
	querymenu.before_menu = v_querymenu_before;
	querymenu.after_menu = v_querymenu_after;
	return s_menu(querymenu);
}

/** Блок до выполнения модуля меню. */
void v_querymenu_before(){
	// Вывод вопроса в консоль.  Continue?
    cout << logo::s_continue;
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
	menu_s checkagreement;
	checkagreement.name = "Check Agreement Menu";
	checkagreement.vec_item_name = {"Yes", "No"};
	checkagreement.before_menu = v_checkagreement_before;
	checkagreement.after_menu = v_checkagreement_after;
	return s_menu(checkagreement);
}

/** Блок до выполнения модуля меню. */
void v_checkagreement_before(){
	// Вывод пользовательского соглашения в консоль
    cout << logo::eula << endl;
	// Вывод вопроса в консоль. Do you agree with the license?
    cout << logo::license;
}

/** Блок после выполнения модуля меню. */
void v_checkagreement_after(){
	// Перенос строки.
	cout << endl;
	// Вывод отступа. Используется в связке с move. {       }<- use to move ->
    cout << logo::move_indentation;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
	// Вывод помощи по управлению. <- use to move ->
    cout << logo::move;
	// Установить цвет текста - серый, цвет заднего фона - чёрный.
    v_set_color(LIGHTGRAY, BLACK);
	// Перенос строки.
	cout << endl;
}

/** Инструкция к программе. */
void v_manual() {
	system("cls");
	cout << logo::s_manual;
	cout << logo::move_indentation << logo::move_indentation;
	cout << endl;
	cout << logo::move_indentation;
	v_set_color(BLACK, WHITE);
	cout << logo::enter;
	v_set_color(WHITE, BLACK);
	cout << endl;
	pause();
}