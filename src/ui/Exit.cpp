/**
	\file
    \brief Модуль выхода из программы.
	\author SavaLione
*/
#include <iostream>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"

using namespace std;

/** Вывод текста. Выход из программы. */
void v_exit() {
    system("cls");
    v_set_color(BLACK,WHITE);
    cout << logo::border;
    v_set_color(MAGENTA,BLACK);
    cout << logo::exit;
    cout << endl;
    v_set_color(BLACK,WHITE);
    cout << logo::border;
}