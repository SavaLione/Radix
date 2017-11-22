#include <iostream>
#include <conio.h>
#include <string>

#include "..\core\Color.h"
#include "..\core\ConstantsMenu.h"
#include "..\core\Logo.h"

using namespace std;

void v_menu_choice(size_t choice);
void root();

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

int i_mainmenu(){
    size_t choice = 1;
	bool menu = true;
    v_menu_choice(choice);
    while (menu) {
        size_t key = _getch();
		switch (key) {
            case 13: {
                switch(choice) {
                    case 1: {
                        root();
                        break;
                    }
                    case 2: {
                        menu = false;
                        return 0;
                        break;
                    }
                    default: {  break; }
                }
            }
            case 32: {
                switch(choice) {
                    case 1: {
                        root();
                        break;
                    }
                    case 2: {
                        menu = false;
                        return 0;
                        break;
                    }
                    default: {  break; }
                }
            }
            case 27: {
                return 0;
                break;
            }
            case 224: {
                key = _getch();
                if (key == 77) {
				    if (choice != 2) {
				    	choice++;
				    } else {
				    	choice = 1;
				    }
			    }
			    if (key == 75) {
				    if (choice != 1) {
				        choice--;
				    } else {
				       	choice = 2;
				    }
			    }
                if (key == 72) {
				    if (choice != 2) {
				    	choice++;
				    } else {
				    	choice = 1;
				    }
			    }
                if (key == 80) {
				    if (choice != 1) {
				    	choice--;
				    } else {
				    	choice = 2;
				    }
			    }
                v_menu_choice(choice);
                break;
            }
            default: {
                choice = 1;
                v_menu_choice(choice);
                break;
            }
		}
    }
    return 0;
}

void root() {
	system("cls");
}