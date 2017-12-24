/**
	\file
	\brief Модуль создания меню.
	\example menu.cpp
	\author SavaLione	
*/
#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"
#include "..\io\Logger.h"

using namespace std;

/** Отрисовка модуля создания меню.
	\param[in] choice Выбранный пункт меню.
	\param[in] menu Список с параметрами создаваемого меню.
    \return Выбранный пункт меню.
*/
string s_menu_choice(size_t choice, menu_s menu);

/** Отрисовка модуля создания меню.
	\param[in] choice Выбранный пункт меню.
	\param[in] menu Список с параметрами создаваемого меню.
    \return Выбранный пункт меню.
*/
string s_menu_choice(size_t choice, menu_s menu){					// Отрисовка модуля создания меню.
	system("cls");													// Очистка экрана консоли.
	cout << menu.s_before;											// Строка до выполнения алгоритма меню.
	if (menu.before_menu != 0) {									// Если функция до выполнения алгоритма меню есть.
		menu.before_menu();											// Функция до выполнения алгоритма меню есть.
	}
	for (size_t sz = 1; sz <= size(menu.vec_item_name); sz++) { 	// Цикл от первого до последнего элемента массива vec_item_name.
		if (sz == choice) {
			cout << menu::frame_left;								// Левая скобка и отступ слева.
		} else if((sz - 1) == choice) {
			cout << menu::frame_right;								// Правая скобка и отступ справа.
		} else {
			cout << menu::indentation;								// Отступ между пунктами меню.
		}
		cout << menu.vec_item_name[sz - 1];							// Вывод элемента меню в консоль.
		if ((sz == size(menu.vec_item_name)) && (sz == choice)) {
			cout << menu::frame_right;								// Правая скобка и отступ справа.
		}
	}
	if (menu.after_menu != 0) {										// Если функция после выполнения алгоритма меню есть.
		menu.after_menu();											// Функция после выполнения алгоритма меню есть.
	}
	cout << menu.s_after;											// Строка после выполнения алгоритма меню.
	return menu.vec_item_name[choice - 1];							// Вернуть выбранный пункт меню.
}

/** Модуль создания меню.
	\param[in] menu Список с параметрами создаваемого меню.
    \return Выбранный пункт меню.
*/
string s_menu(menu_s menu){
	log("LOG", menu.name);									// Логирование. Имя создаваемого меню.
    size_t choice = 1,										// Выбранный пункт меню.
		   key = 0;											// Нажатая клавиша.
	string s_ret = "";										// Строка, которая будет возвращена в конце выполнения алгоритма.
	bool b_menu = true;										// Триггер для цикла.
    s_ret = s_menu_choice(choice, menu);					// Присваиваем строке выбранный пункт меню.
	while(b_menu) {											// Цикл отслеживания нажатой клавиши.
		key = _getch();										// Получение нажатой клавиши.
		if ((key == menu::enter)							// Клавиша enter.
			|| (key == menu::backspace)						// Клавиша backspace.
			|| (key == menu::esc)							// Клавиша esc.
			|| (key == menu::space)) {						// Клавиша space.
			b_menu = false;									// Завершение цикла отслеживания нажатой клавиши.
		} if (key == menu::special) {						// Клавиша space.
			key = _getch();									// Получение нажатой клавиши.
			switch(key) {
				case menu::arrow_up: {						// Клавиша arrow up.
					choice++;								// Следующий пункт меню.
					break;
				}
				case menu::arrow_left: {					// Клавиша arrow left.
					choice--;								// Предыдущий пункт меню.
					break;
				}
				case menu::arrow_right: {					// Клавиша arrow right.
					choice++;								// Следующий пункт меню.
					break;
				}
				case menu::arrow_down: {					// Клавиша arrow down.
					choice--;								// Предыдущий пункт меню.
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

/** Паузка до нажатия любой клавиши. */
void pause(){
	size_t key = _getch();	// Получение нажатой клавиши.
}

/** Выход из программы.
	Вывод текста.
*/
void v_exit() {										// Выход из программы.
    system("cls");									// Очистка экрана консоли
    v_set_color(BLACK,WHITE);						// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << logo::border;							// Вывод линии в консоль. ===========================
    v_set_color(MAGENTA,BLACK);						// Установить цвет текста - пурпурный, цвет заднего фона - чёрный.
    cout << logo::exit;								// Логотип выхода из программы.
    cout << endl;									// Перенос строки.
    v_set_color(BLACK,WHITE);						// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << logo::border;							// Вывод линии в консоль. ===========================
}

/** Шкала загрузки
	\param[in] position значение до которого отрисовывать шкалу.
*/
void v_loadscale(size_t position) {					// Шкала загрузки
    system("cls");									// Очистка экрана консоли
    v_set_color(BLACK,WHITE);						// Установить цвет текста - белый, цвет заднего фона - чёрный.
    cout << logo::border;							// Вывод линии в консоль. ===========================
    v_set_color(LIGHTCYAN,BLACK);					// Установить цвет текста - светло-сине-зелёный, цвет заднего фона - чёрный.
    cout << logo::loading;							// Логотип загрузки.
    cout << endl;									// Перенос строки.
    v_set_color(BLACK,WHITE);						// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << menu::loading_left;						// Модуль загрузки. Левая скобка.
    for (size_t sz = 0; sz <= 25; sz++) {
        if (sz <= 9) {
            v_set_color(RED);						// Установить цвет текста - красный, цвет заднего фона - чёрный.
        } else if ((sz > 9) && (sz <=18)) {
            v_set_color(LIGHTYELLOW);				// Установить цвет текста - жёлтый, цвет заднего фона - чёрный.
        } else if (sz > 19) {
            v_set_color(GREEN);						// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
        }
        if (sz <= position) {
            cout << menu::loading_progress;			// Модуль загрузки. Шкала прогресса.
        } else {
            cout << menu::loading_indenting;		// Модуль загрузки. Значение после шкалы прогресса.
        }
    }
    v_set_color(BLACK, WHITE);						// Установить цвет текста - чёрный, цвет заднего фона - белый.
    cout << menu::loading_right;
    v_color_reset();								// Сброс к стандартным настройкам цвета консоли.
    cout << endl;									// Перенос строки.
    if (menu::loading_check_module) {				// Тестирование работы модуля вывода шкалы загрузки.
        Sleep(menu::loading_check_module_sleep);	// Пауза в мс.
    }
}