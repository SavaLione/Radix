/**
	\file
	\brief Заголовочный файл с цветами и модулем смены цвета в консоли.
	\author SavaLione	
*/
#ifndef COLOR_H
#define COLOR_H
/** Цвета */
enum color {
        BLACK         = 0,
        BLUE          = 1,
        GREEN         = 2,
        CYAN          = 3,
        RED           = 4,
        MAGENTA       = 5,
        BROWN         = 6,
        LIGHTGRAY     = 7,
        DARKGRAY      = 8,
        LIGHTBLUE     = 9,
        LIGHTGREEN    = 10,
        LIGHTCYAN     = 11,
        LIGHTRED      = 12,
        LIGHTMAGENTA  = 13,
        LIGHTYELLOW   = 14,
        WHITE         = 15
};
/** Изменение цвета текста и цвета заднего фона в консоли
	\param[in] ConsoleText цвет текста
    \param[in] ConsoleBackground цвет заднего фона
*/
void v_set_color(color ConsoleText, color ConsoleBackground);
/** Изменение цвета текста в консоли. Задний фон по умолчанию чёрный.
	\param[in] ConsoleText цвет текста
*/
void v_set_color(color ConsoleText);
/** Вернуть цвет текста и цвет заднего фона в консоли к стандартным значениям. */
void v_set_color();

#endif // COLOR_H