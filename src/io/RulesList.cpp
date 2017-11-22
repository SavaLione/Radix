/**
	\file
    \brief Модуль чтения правил.
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "../core/Constants.h"

using namespace std;

/** Чтение правил программы
	\return строка с правилами
*/
string s_ruleslist() {
    string s_buff, s_ret;
    ifstream fin(radix::rules_list);
    if (fin.is_open()) {
        while (getline(fin, s_buff)) {
            s_ret += s_buff;
            s_ret += "\n";
        }
    }
    fin.close();
    return s_ret;
}