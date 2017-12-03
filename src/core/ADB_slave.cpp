#include "ADB_mod.h"


int adb_state()
{
	adb("adb devices");
	return 0;
}

int adb_files()
{
	adb("adb push /dl/recovery.zip sd");
	adb("adb push /dl/su.apk sd");
	return 0;
}

int adb_root()
{
	adb("adb reboot recovery");
	adb("adb install recovery.zip");
	adb("adb install su.apk");
	adb("adb reboot");
	return 0;
}