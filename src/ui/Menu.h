/**
	\file
	\brief 
	\author SavaLione	
*/
#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
struct menu_s {
	size_t sz_amount;
	std::vector<std::string> vec_item_name;
};

namespace key {
	const size_t backspace = 8;
	const size_t enter = 13;
	const size_t esc = 27;
	const size_t space = 32;
	const size_t arrow_up = 72;
	const size_t arrow_left = 75;
	const size_t arrow_right = 77;
	const size_t arrow_down = 80;
	const size_t special = 224;
}

int i_menu(menu_s menu);

#endif // MENU_H