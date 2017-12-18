#include <iostream>

#include "..\core\Menu.h"
#include "..\core\Constants.h"
#include "..\core\Color.h"

void v_menu_choice(size_t choice){
    system("cls");
    v_set_color(BLACK, WHITE);
    cout << logo::border;
    v_set_color(GREEN, BLACK);
    cout << logo::radix;
    cout << endl;
    v_set_color(BLACK, WHITE);
    cout << logo::little_help;
    v_set_color(WHITE, BLACK);
    string point[3] = { "Root" , "Exit", " " };
    for (size_t sz = 1; sz < 4; sz++) {
		if (sz == choice) {
			cout << menu::frame_left;
		} else if (sz - 1 == choice) {
			cout << menu::frame_right;
		} else {
			cout << menu::indentation;
		}
		cout << point[sz - 1];
	}
	cout << endl;
}