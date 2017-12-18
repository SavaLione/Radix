/**
	\file
    \brief Главный файл программы
	\author SavaLione
*/

#include "..\core\CheckingFiles.h"

#include "..\io\Logger.h"

#include "..\ui\MainMenu.h"
#include "..\ui\CheckAgreement.h"
#include "..\ui\Manual.h"
#include "..\ui\Exit.h"
//---
#include "..\ui\Menu.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
//---
/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	while (false) {
		size_t key = _getch();
		std::cout << key << std::endl;
	}
	menu_s menu;
	menu.sz_amount = 3;
	menu.vec_item_name = {"1", "2", "3", " ", " "};
	std::cout << i_menu(menu) << std::endl;
	system("pause");
	system("pause");
	
	log("LOG", "----------------------------[RUN RADIX]----------------------------");
	// Запуск программы
	// Запуск модуля инициализации
	v_initialization();
	// Проверка. Согласен ли пользователь с условиями программы.
	if (i_checkagreement()) {
		v_manual();
		/* 
			Вызов модуля главного меню.
			Если модуль в результате работы вернул код 0, то он корректно завершил свою работу.
			Если модуль в результате работы вернул код отличный от 0, то в работе модуля произошла ошибка.
			
		*/
		if (i_mainmenu() == 0) {
			// Вывод сообщения в консоль о том, что модуль корректно завершил свою работу.
			log("LOG", "Main Menu Module correctly completed work.");
		} else {
			// Вывод сообщения в консоль о том, что в работе модуля произошла ошибка.
			log("WARN", "Main Menu Module error");
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