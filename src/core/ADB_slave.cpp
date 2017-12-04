#include "ADB_mod.h"


int adb_state()
{
	adb(adb devices);
	adb(fastboot devices);
	return 0;
}

int adb_flash()
{
	adb(adb reboot bootloader);
	adb(fastboot flash recovery ""%CD%"\dl\recovery.img");
	adb(fastboot boot ""%CD%"\dl\recovery.img");
	adb(adb devices);
	adb(adb push -p "%CD%"\dl\su.zip sd);
	adb(adb reboot bootloader);
	return 0;
}

int adb_root()
{
	adb(fastboot devices);
	adb(fastboot boot ""%CD%"\dl\recovery.img");
	adb(fastboot install su.zip);
	adb(adb reboot);
	return 0;
}
