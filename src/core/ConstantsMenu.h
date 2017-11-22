/**
	\file
	\brief Заголовочный файл с логотипами.
	\author SavaLione	
*/
#ifndef CONSTANTSMENU_H
#define CONSTANTSMENU_H

#include <string>
namespace menu {
    const std::string indentation = "       ";
    const std::string frame_left = "       <";
    const std::string frame_right = ">       ";

    const size_t loading_size = 25;
    const bool loading_check_module = false;
    const size_t loading_check_module_sleep = 1000;
    //const std::string loading_left = "[";
    //const std::string loading_right = "]";
    //const std::string loading_progress = "|";
    //const std::string loading_indenting = " ";
    const char loading_left = '[';
    const char loading_right = ']';
    const char loading_progress = '|';
    const char loading_indenting = ' ';
}

#endif // CONSTANTSMENU_H