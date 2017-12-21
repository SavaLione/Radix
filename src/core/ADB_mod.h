/**
	\file
	\brief Заголовочный файл с подключением модуля работы с adb.
	\author Darlakon
*/
#ifndef ADB_MOD_H
#define ADB_MOD_H

#include <Windows.h>
/** Вызов adb-интерфейса.
    \param[in] cmdArgs - команда для adb вида "adb X".
*/
void adb(LPSTR cmdArgs);

/** Вызов fastboot-интерфейса.
    \param[in] cmdArgs - команда для fastboot вида "fastboot X".
*/
void fastboot(LPSTR cmdArgs);

/** 
    Вызов модуля проверки состояния устройства.
*/
void adb_state();

/**
    Вызов модуля установки кастомной рекавери.
*/
void adb_flash();

/**
    Вызов модуля получения root-прав.
*/
void adb_root();

#endif // ADB_MOD_H
