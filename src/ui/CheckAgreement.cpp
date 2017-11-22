#include <iostream>
#include <conio.h>
#include <string>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"
#include "..\io\RulesList.h"

using namespace std;

void v_checkagreement_choice(size_t choice);

void v_checkagreement_choice(size_t choice){
    system("cls");
    cout << s_ruleslist() << endl;
    cout << logo::license;
    string point[3] = { "Yes" , "No", " " };
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
    cout << logo::move_indentation;
    v_set_color(BLACK, WHITE);
    cout << logo::move;
    v_set_color(LIGHTGRAY, BLACK);
}

int i_checkagreement(){
    size_t choice = 1;
	bool menu = true;
    v_checkagreement_choice(choice);
    while (menu) {
        size_t key = _getch();
		switch (key) {
            case 13: {
                switch(choice) {
                    case 1: {
                        return 1;
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
                        return 1;
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
                v_checkagreement_choice(choice);
                break;
            }
            default: {
                choice = 1;
                v_checkagreement_choice(choice);
                break;
            }
		}
    }
    return 0;
}