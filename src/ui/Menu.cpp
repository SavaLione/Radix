#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"
#include "..\io\Logger.h"

using namespace std;

string s_menu_choice(size_t choice, menu_s menu);

string s_menu_choice(size_t choice, menu_s menu){
	system("cls");
	menu.before_menu();
	for (size_t sz = 1; sz <= size(menu.vec_item_name); sz++) {
		if (sz == choice) {
			cout << menu::frame_left;
		} else if((sz - 1) == choice) {
			cout << menu::frame_right;
		} else {
			cout << menu::indentation;
		}
		cout << menu.vec_item_name[sz - 1];
		if ((sz == size(menu.vec_item_name)) && (sz == choice)) {
			cout << menu::frame_right;
		}
	}
	return menu.vec_item_name[choice - 1];
}

string s_menu(menu_s menu){
	log("LOG", menu.name);
    size_t choice = 1, key = NULL;
	string s_ret = "";
	bool b_menu = true;
    s_ret = s_menu_choice(choice, menu);
	while(b_menu) {
		key = _getch();
		if ((key == menu::enter) || (key == menu::backspace) || (key == menu::esc) || (key == menu::space)) {
			b_menu = false;
		} if (key == menu::special) {
			key = _getch();
			switch(key) {
				case menu::arrow_up: {
					choice++;
					break;
				}
				case menu::arrow_left: {
					choice--;
					break;
				}
				case menu::arrow_right: {
					choice++;
					break;
				}
				case menu::arrow_down: {
					choice--;
					break;
				}
			}
			if (choice < 1) {
				choice = size(menu.vec_item_name);
			} else if (choice > size(menu.vec_item_name)) {
				choice = 1;
			}
		}
		s_ret = s_menu_choice(choice, menu);
	}
    return s_ret;
}

void pause(){
	size_t key = _getch();
}

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

/** Шкала загрузки
	\param[in] position значение до которого отрисовывать шкалу.
*/
void v_loadscale(size_t position) {
	// Очистка экрана консоли
    system("cls");
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(BLACK,WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
	// Установить цвет текста - светло-сине-зелёный, цвет заднего фона - чёрный.
    v_set_color(LIGHTCYAN,BLACK);
    cout << logo::loading;
    cout << endl;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK,WHITE);
    cout << menu::loading_left;
    for (size_t sz = 0; sz <= 25; sz++) {
        if (sz <= 9) {
			// Установить цвет текста - красный, цвет заднего фона - чёрный.
            v_set_color(RED);
        } else if ((sz > 9) && (sz <=18)) {
			// Установить цвет текста - жёлтый, цвет заднего фона - чёрный.
            v_set_color(LIGHTYELLOW);
        } else if (sz > 19) {
			// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
            v_set_color(GREEN);
        }
        if (sz <= position) {
            cout << menu::loading_progress;
        } else {
            cout << menu::loading_indenting;
        }
    }
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
    cout << menu::loading_right;
	// Сброс к стандартным настройкам цвета консоли.
    v_color_reset();
	// Перенос строки.
    cout << endl;
	// Тестирование работы модуля вывода шкалы загрузки.
    if (menu::loading_check_module) {
		// Пауза в мс.
        Sleep(menu::loading_check_module_sleep);
    }
}

void cls() {
	system("cls");
}