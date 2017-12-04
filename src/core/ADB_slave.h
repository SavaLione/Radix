/**
\file
\brief Заголовочный файл с подключением модуля работы с adb.
\author Darlakon
*/
#ifndef ADB_SLAVE_H
#define ADB_SLAVE_H
#include "..\core\ADB_mod.h"

/**
Получение состояния устройства
*/
int adb_state();

/**
Запуск средств adb для установки кастомной рекавери
*/
int adb_flash();

/**
Запуск процедуры рутирования
*/
int adb_root();

#endif // ADB_SLAVE_H
