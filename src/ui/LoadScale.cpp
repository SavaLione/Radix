/**
	\file
    \brief Модуль вывода шкалы загрузки.
	\author SavaLione
*/
#include <iostream>
#include <windows.h>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"

using namespace std;

/** Переключение пунктов меню
	\param[in] position значение до которого отрисовывать шкалу.
*/
void v_loadscale(size_t position) {
    system("cls");
    v_set_color(BLACK,WHITE);
    cout << logo::border;
    v_set_color(LIGHTCYAN,BLACK);
    cout << logo::loading;
    cout << endl;
    v_set_color(BLACK,WHITE);
    cout << menu::loading_left;
    for (size_t sz = 0; sz <= 25; sz++) {
        if (sz <= 9) {
            v_set_color(RED);
        } else if ((sz > 9) && (sz <=18)) {
            v_set_color(LIGHTYELLOW);
        } else if (sz > 19) {
            v_set_color(GREEN);
        }
        if (sz <= position) {
            cout << menu::loading_progress;
        } else {
            cout << menu::loading_indenting;
        }
    }
    v_set_color(BLACK, WHITE);
    cout << menu::loading_right;
    v_set_color();
    cout << endl;
    if (menu::loading_check_module) {
        Sleep(menu::loading_check_module_sleep);
    }
}