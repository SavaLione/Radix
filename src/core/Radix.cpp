/**
	\file
	\brief Главный файл программы
	\author SavaLione	
*/
#include "Initialization.h"

#include "..\ui\MainMenu.h"
#include "..\ui\CheckAgreement.h"

void Radix() {
	if (i_checkagreement()) {
		/// Запуск модуля инициализации
		v_initialization();
		/// MainMenu
		if (i_mainmenu()) {}
	} else {
		
	}
}
