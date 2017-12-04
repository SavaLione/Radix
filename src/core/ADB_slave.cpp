#include "ADB_mod.h"


void adb_state()
{
	adb("adb devices");
	adb("fastboot devices");
}

void adb_flash()
{
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
	fastboot("fastboot flash recovery \"dl\\recovery.img\"");
	fastboot("fastboot boot \"dl\\recovery.img\"");
	adb("adb devices");
	adb("adb push -p \"dl\\su.zip sd");
	adb("adb wait-for-device");
	adb("adb reboot bootloader");
}

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