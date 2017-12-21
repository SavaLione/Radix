#include "..\core\ADB_mod.h"
#include "..\core\CheckingFiles.h"

#include "..\ui\Menu.h"
#include "..\ui\Items.h"

void root() {
	if (i_checking_files()) {
		// Очистка экрана консоли
		cls();
		adb_state();
		adb_flash();
		adb_root();
		// Очистка экрана консоли
		cls();
	} else {
		// Выход.
	}
}