/**
	\file
	\brief 
	\author SavaLione	
*/
#ifndef MENU_H
#define MENU_H

struct point {
	size_t sz_amount;
	char ch_item_name[sz_amount++];
};

struct menu {
	size_t sz_amount;
	char ch_item_name[sz_amount++];
};

#endif // MENU_H