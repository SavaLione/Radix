#include "ADB_mod.h"


int adb_state()
{
	adb("adb devices");
	return 0;
}

int adb_files()
{
	adb("adb push -p "%CD%"\dl\recovery.zip sd");
	adb("adb push -p "%CD%"\dl\su.zip sd");
	return 0;
}

int adb_root()
{
	adb("adb reboot recovery");
	adb("adb install recovery.zip");
	adb("adb install su.zip");
	adb("adb reboot");
	return 0;
}
