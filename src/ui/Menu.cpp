#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"
#include "..\io\Logger.h"

using namespace std;

void v_menu_choice(size_t choice, menu_s menu);

void v_menu_choice(size_t choice, menu_s menu){
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
}

size_t sz_menu(menu_s menu){
	log("LOG", "[start menu module]");
	log("LOG", menu.name);
    size_t choice = 1, key = NULL;
	bool b_menu = true;
    v_menu_choice(choice, menu);
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
		v_menu_choice(choice, menu);
	}
	log("LOG", "[stop menu module]");
    return choice;
}