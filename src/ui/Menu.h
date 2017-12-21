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
	std::string name = "unassigned";
	std::vector<std::string> vec_item_name;
	void (*before_menu)(), (*after_menu)();
};

size_t sz_menu(menu_s menu);

#endif // MENU_H