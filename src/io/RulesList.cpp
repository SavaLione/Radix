/**
	\file
    \brief Модуль чтения правил.
	\example ruleslist.cpp
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "../core/Constants.h"
#include "../core/Logo.h"

using namespace std;

/** Чтение правил программы
	\return строка с правилами
*/
string s_ruleslist() {
    return logo::eula;
}