#include <iostream>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"

using namespace std;

void v_mainmenu_before();
void v_mainmenu_after();
void v_querymenu_before();
void v_querymenu_after();
void v_checkagreement_before();
void v_checkagreement_after();

string s_mainmenu() {
	menu_s mainmenu;
	mainmenu.name = "Main Menu";
	mainmenu.vec_item_name = {"Root", "Log", "Exit"};
	mainmenu.before_menu = v_mainmenu_before;
	mainmenu.after_menu = v_mainmenu_after;
	return s_menu(mainmenu);
}

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
void v_mainmenu_after() {
	// Перенос строки.
	cout << endl;
}

string s_querymenu(string item) {
	cout << item;
	menu_s querymenu;
	querymenu.name = "Query Menu";
	querymenu.vec_item_name = {"Yes", "No"};
	querymenu.before_menu = v_querymenu_before;
	querymenu.after_menu = v_querymenu_after;
	return s_menu(querymenu);
}

void v_querymenu_before(){
	// Вывод вопроса в консоль.  Continue?
    cout << logo::s_continue;
}
void v_querymenu_after(){
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

void v_manual() {
	cls();
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

string s_checkagreement() {
	menu_s checkagreement;
	checkagreement.name = "Check Agreement Menu";
	checkagreement.vec_item_name = {"Yes", "No"};
	checkagreement.before_menu = v_checkagreement_before;
	checkagreement.after_menu = v_checkagreement_after;
	return s_menu(checkagreement);
}

void v_checkagreement_before(){
	// Вывод пользовательского соглашения в консоль
    cout << logo::eula << endl;
	// Вывод вопроса в консоль. Do you agree with the license?
    cout << logo::license;
}
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