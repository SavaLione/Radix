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

void before();

//---
/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	std::string s = "abc";
	if (s == "abc1") {
		std::cout << "YES" << std::endl;
	}
	system("pause");
	
	while (false) {
		size_t key = _getch();
		std::cout << key << std::endl;
	}
	menu_s menu;
	menu.name = "menu";
	menu.vec_item_name = {"Root", "Log", "Exit", "Some else", "Some else", "Some else"};
	menu.before_menu = before;
	std::cout << std::endl << s_menu(menu) << std::endl;
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

void before() {
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
	std::cout << std::endl << "Before" << std::endl;
}