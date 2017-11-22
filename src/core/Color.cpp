#include<windows.h>
#include <iostream>

#include "Color.h"

using namespace std;

void v_set_color(color ConsoleText, color ConsoleBackground) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((ConsoleBackground << 4) | ConsoleText));
}

void v_set_color(color ConsoleText) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((BLACK << 4) | ConsoleText));
}