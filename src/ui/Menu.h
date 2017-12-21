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
	std::string name = "unassigned", s_before = "", s_after = "";
	std::vector<std::string> vec_item_name;
	void (*before_menu)(), (*after_menu)();
};

std::string s_menu(menu_s menu);

void pause();

void v_exit();

void v_loadscale(size_t position);

void cls();

#endif // MENU_H