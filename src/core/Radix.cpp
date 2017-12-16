/**
	\file
	\brief Главный файл программы
	\author SavaLione	
*/
#include "Initialization.h"

#include "..\ui\MainMenu.h"
#include "..\ui\CheckAgreement.h"
#include "..\ui\Exit.h"

/** Запуск программы */
void Radix() {
	v_initialization(); /// Запуск модуля инициализации
	if (i_checkagreement()) {
		/// MainMenu
		if (i_mainmenu()) {}
	} else {
		
	}
	v_exit();
}