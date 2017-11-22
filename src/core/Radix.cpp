/**
	\file
	\brief Главный файл программы
	\author SavaLione	
*/
#include "Initialization.h"

#include <Windows.h>

#include "..\ui\MainMenu.h"
#include "..\ui\CheckAgreement.h"

void Radix() {
	system("pause");
	/// Запуск модуля инициализации
	v_initialization();
	if (i_checkagreement()) {
		/// MainMenu
		if (i_mainmenu()) {}
	} else {
		
	}
}
