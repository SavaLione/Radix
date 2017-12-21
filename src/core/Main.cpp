/**
	\file
    \brief Главный файл программы
	\author SavaLione
*/
#include <string>

#include "..\core\CheckingFiles.h"

#include "..\io\Logger.h"

#include "..\ui\Menu.h"
#include "..\ui\Items.h"

/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	std::string s_menu_choice = "";
	log("LOG", "----------------------------[RUN RADIX]----------------------------");
	// Запуск программы
	// Запуск модуля инициализации
	v_initialization();
	// Проверка. Согласен ли пользователь с условиями программы.
	if (s_checkagreement() == "Yes") {
		v_manual();
		s_menu_choice = s_mainmenu();
		/* 
			Вызов модуля главного меню.
			Если модуль в результате работы вернул код 0, то он корректно завершил свою работу.
			Если модуль в результате работы вернул код отличный от 0, то в работе модуля произошла ошибка.
			
		*/
		if (s_menu_choice == "Exit") {
			// Вывод сообщения в консоль о том, что модуль корректно завершил свою работу.
			log("LOG", "Main Menu Module correctly completed work.");
		} else if (s_menu_choice == "Root") {
			
		} else {
			log("WARN", "Unknown menu item.");
		}
	} else {
		// Вывод сообщения в консоль о том, что пользователь не согласен с условими программы.
		log("WARN", "User does not agree with the terms of the program.");
	}
	// Вывод ascii графики в консоль с сообщением о выходе из программы.
	v_exit();
	log("LOG", "Exit");
	return 0;
}