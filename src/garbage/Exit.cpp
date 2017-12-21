/**
	\file
    \brief Модуль выхода из программы.
	\example exit.cpp
	\author SavaLione
*/
#include <iostream>

#include "..\core\Constants.h"
#include "..\core\Color.h"

using namespace std;

/** Вывод текста. Выход из программы. */
void v_exit() {
	// Очистка экрана консоли
    system("cls");
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK,WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
	// Установить цвет текста - пурпурный, цвет заднего фона - чёрный.
    v_set_color(MAGENTA,BLACK);
    cout << logo::exit;
	// Перенос строки.
    cout << endl;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK,WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
}