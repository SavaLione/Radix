
#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"

size_t sz_mainmenu() {
	menu_s mainmenu;
	mainmenu.name = "Main Menu";
	mainmenu.vec_item_name = {"Root", "Log", "Exit"};
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