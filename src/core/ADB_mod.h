/**
	\file
	\brief Заголовочный файл с подключением модуля работы с adb.
	\author Darlakon
*/
#ifndef ADB_MOD_H
#define ADB_MOD_H

#include <Windows.h>
/** Вызов adb-интерфейса.
    LPSTR cmdArgs - команда для adb вида "adb X".
*/
void adb(LPSTR cmdArgs);

/** Вызов fastboot-интерфейса.
    LPSTR cmdArgs - команда для fastboot вида "fastboot X".
*/
void fastboot(LPSTR cmdArgs);

#endif // ADB_MOD_H
