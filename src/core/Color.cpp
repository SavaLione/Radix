/**
	\file
    \brief Модуль работы с цветом в консоли.

	Модуль позволяет менять цвет текста и цвет фона в консоли.
    
	\author SavaLione
*/
#include<windows.h>
#include <iostream>

#include "Color.h"

using namespace std;

/** Изменение цвета текста и цвета заднего фона в консоли
	\param[in] ConsoleText цвет текста
    \param[in] ConsoleBackground цвет заднего фона
*/
void v_set_color(color ConsoleText, color ConsoleBackground) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((ConsoleBackground << 4) | ConsoleText));
}

/** Изменение цвета текста в консоли. Задний фон по умолчанию чёрный.
	\param[in] ConsoleText цвет текста
*/
void v_set_color(color ConsoleText) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((BLACK << 4) | ConsoleText));
}

/** Вернуть цвет текста и цвет заднего фона в консоли к стандартным значениям. */
void v_set_color() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((BLACK << 4) | LIGHTGRAY));
}