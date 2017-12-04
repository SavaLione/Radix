#include "ADB_mod.h"

/** 
    Вызов модуля проверки состояния устройства.
*/
void adb_state()
{
	adb("adb devices");
	adb("fastboot devices");
}

/** Вызов модуля установки кастомной рекавери.
    Требуется экстремальный пересмотр, ничего не работает.
*/
void adb_flash()
{
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
	fastboot("fastboot flash recovery \"dl\\recovery.img\""); //вот тут начинается хаос
	fastboot("fastboot boot \"dl\\recovery.img\"");
	adb("adb devices");
	adb("adb push -p \"dl\\su.zip sd");
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
}

/** Вызов модуля получения root-прав.
    Требуется тестирование на работоспособность.
*/
void adb_root()
{
	adb("root");
	adb("adb wait-for-device");
	fastboot("fastboot devices");
	fastboot("fastboot boot \"dl\\recovery.img\"");
	adb("adb wait-for-device");
	fastboot("fastboot install su.zip");
	adb("adb reboot");
}
