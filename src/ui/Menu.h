/**
	\file
	\brief Заголовочный файл с подключением модуля создания меню.
	\author SavaLione	
*/
#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>

struct menu_s {
	std::string name = "unassigned",			/**< Имя создаваемого меню. */
				s_before = "",					/**< Строка до создаваемого меню. */
				s_after = "";					/**< Строка после создаваемого меню. */
	std::vector<std::string> vec_item_name;		///< Строковый массив векторного размера. Это позволяет создать меню с n количеством параметров.
	void (*before_menu)() = 0,					/**< Функция до создаваемого меню. */
		 (*after_menu)() = 0;					/**< Функция после создаваемого меню. */
};

/** Модуль создания меню.
	\param[in] menu Список с параметрами создаваемого меню.
    \return Выбранный пункт меню.
*/
std::string s_menu(menu_s menu);

/** Паузка до нажатия любой клавиши. */
void pause();

/** Выход из программы.
	Вывод текста.
*/
void v_exit();

/** Шкала загрузки.
	\param[in] position значение до которого отрисовывать шкалу.
*/
void v_loadscale(size_t position);

#endif // MENU_H