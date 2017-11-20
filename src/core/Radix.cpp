/**
	\file
	\brief Главный файл программы
	\author SavaLione	
*/
#include "Initialization.h"

#include "..\ui\MainMenu.h"

void Radix() {
	/// Запуск модуля инициализации
	v_initialization();
	/// MainMenu
	if (i_mainmenu()) {}
}
