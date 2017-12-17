/**
	\file
    \brief Модуль работы с adb.
	\author Darlakon
*/
#include "ADB_mod.h"

/** 
    Вызов модуля проверки состояния устройства.
*/
void adb_state()
{
	adb("adb devices");
	adb("fastboot devices");
}

/** 
	Вызов модуля установки кастомной рекавери.
*/
void adb_flash()
{
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
	fastboot("fastboot flash recovery \"recovery.img\"");
	fastboot("fastboot boot \"recovery.img\"");
	adb("adb devices");
	adb("adb push -p \"su.zip sd");
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
}

/** 
	Вызов модуля получения root-прав.
*/
void adb_root()
{
	adb("root");
	adb("adb wait-for-device");
	fastboot("fastboot devices");
	fastboot("fastboot boot \"recovery.img\"");
	adb("adb wait-for-device");
	fastboot("fastboot install su.zip");
	adb("adb reboot");
}
