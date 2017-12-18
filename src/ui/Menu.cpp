#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Constants.h"
#include "..\core\Color.h"
#include "..\ui\Menu.h"

using namespace std;

void v_menu_choice(size_t choice, menu_s menu);

void v_menu_choice(size_t choice, menu_s menu){
    system("cls");
    v_set_color(BLACK, WHITE);
    cout << logo::border;
    v_set_color(GREEN, BLACK);
    cout << logo::radix;
    cout << endl;
    v_set_color(BLACK, WHITE);
    cout << logo::little_help;
    v_set_color(WHITE, BLACK);
    for (size_t sz = 1; sz < menu.sz_amount; sz++) {
		if (sz == choice) {
			cout << menu::frame_left;
		} else if (sz - 1 == choice) {
			cout << menu::frame_right;
		} else {
			cout << menu::indentation;
		}
		cout << menu.vec_item_name[sz - 1];
	}
	cout << endl;
}

int i_menu(menu_s menu){
    size_t choice = 1, key = 1;
	bool b_menu = true;
    v_menu_choice(choice, menu);
    while (b_menu) {
        key = _getch();
		switch (key) {
            case key::enter: {
                b_menu = false;
				break;
            }
            case key::space: {
                b_menu = false;
				break;
            }
            case key::esc: {
                b_menu = false;
				break;
            }
			
			case key::special: {
				key = _getch();
				
				if (key == key::arrow_right) {
					if (choice < menu.sz_amount) {
							choice++;
					} else {
							choice = 1;
					}
				}
				if (key == key::arrow_left) {
					if (choice > 1) {
							choice--;
					} else {
							choice = 1;
					}
				}
				if (key == key::arrow_up) {
					if (choice < menu.sz_amount) {
							choice++;
					} else {
							choice = 1;
					}
				}
				if (key == key::arrow_down) {
					if (choice > 1) {
							choice--;
					} else {
							choice = 1;
					}
				}
				
				switch (key) {
					case key::arrow_right: {
						if (choice < menu.sz_amount) {
							choice++;
						} else {
							choice = 1;
						}
						break;
					}
					case key::arrow_left: {
						if (choice > 1) {
							choice--;
						} else {
							choice = 1;
						}
						break;
					}
					case key::arrow_up: {
						if (choice < menu.sz_amount) {
							choice++;
						} else {
							choice = 1;
						}
						break;
					}
					case key::arrow_down: {
						if (choice > 1) {
							choice--;
						} else {
							choice = 1;
						}
						break;
					}
					v_menu_choice(choice, menu);
				}
				break;
			}
            default: {
                choice = 1;
                v_menu_choice(choice, menu);
                break;
            }
		}
    }
    return choice;
}