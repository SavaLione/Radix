/**
	\file
	\brief Заголовочный файл с цветами.
	\author SavaLione	
*/
#ifndef COLOR_H
#define COLOR_H

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
void v_set_color(color ConsoleText, color ConsoleBackground);
void v_set_color(color ConsoleText);
void v_set_color();

#endif // COLOR_H