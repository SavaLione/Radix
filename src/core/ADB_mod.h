/**
\file
\brief Заголовочный файл с подключением модуля работы с adb.
\author Darlakon
*/
#ifndef ADB_MOD_H
#define ADB_MOD_H
#include <Windows.h>
/** 
Вызов модуля adb с командой в качестве аргумента
*/
int adb(LPSTR cmdArgs);

#endif // ADB_MOD_H
