#include <iostream>

#include "..\ui\Menu.h"

using namespace std;

void before();
void after();

int main() {
	menu_s testmenu;
	testmenu.name = "Test menu";
	testmenu.s_before = "Test before.";
	testmenu.s_after = "Test after.";
	testmenu.vec_item_name = {"Test", "Exit"};
	testmenu.before_menu = before;
	testmenu.after_menu = after;
	cout << s_menu(mainmenu) << endl;
	return 0;
}

void before() {
	cout << "Before." << endl;
}

void after() {
	cout << "After." << endl;
}