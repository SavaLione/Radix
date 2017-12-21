/**
	\file
    \brief Модуль работы с adb.
	\author Darlakon
*/
#include <Windows.h>
#include <string.h>
#include <iostream>
#include <cstdlib>

#include "ADB_mod.h"
#include "..\io\Logger.h"

using namespace std;

/** Вызов adb-интерфейса.
    \param[in] cmdArgs - команда для adb вида "adb X".
*/
void adb(LPSTR cmdArgs)
{
	PROCESS_INFORMATION ProcessInfo;

	STARTUPINFO StartupInfo;

	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof StartupInfo;

	LPCSTR cmdPath = "assets\\platform-tools\\adb.exe";

	if (CreateProcess(cmdPath, cmdArgs,
		NULL, NULL, FALSE, 0, NULL,
		NULL, &StartupInfo, &ProcessInfo))
	{
		WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
		CloseHandle(ProcessInfo.hThread);
		CloseHandle(ProcessInfo.hProcess);
	}
}

/** Вызов fastboot-интерфейса.
    \param[in] cmdArgs - команда для fastboot вида "fastboot X".
*/
void fastboot(LPSTR cmdArgs)
{
	PROCESS_INFORMATION ProcessInfo;

	STARTUPINFO StartupInfo;

	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof StartupInfo;

	LPCSTR cmdPath = "assets\\platform-tools\\fastboot.exe";

	if (CreateProcess(cmdPath, cmdArgs,
		NULL, NULL, FALSE, 0, NULL,
		NULL, &StartupInfo, &ProcessInfo))
	{
		WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
		CloseHandle(ProcessInfo.hThread);
		CloseHandle(ProcessInfo.hProcess);
	}
}

/** 
    Вызов модуля проверки состояния устройства.
*/
void adb_state()
{
	log("LOG", "[Run adb_state module.]");
	log("LOG", "------[adb_state]-------");
	adb("adb devices"); 						//проверяем подключение телефона
	adb("fastboot devices");			
	log("LOG", "Stop adb_state module.");
	log("LOG", "------[adb_state]-------");
}

/** 
	Вызов модуля установки кастомной рекавери.
*/
void adb_flash()
{
	log("LOG", "[Run adb_flash module.]");
	log("LOG", "------[adb_flash]-------");
	adb("adb wait-for-device");					
	log("LOG", "adb wait-for-device");				
	adb("adb reboot bootloader");					//перезагружаем в режим бутлоадера
	log("LOG", "adb reboot bootloader");
	fastboot("fastboot flash recovery \"recovery.img\"");		//запускаем флеш рекавери
	log("LOG", "fastboot flash recovery \"recovery.img\"");
	fastboot("fastboot boot \"recovery.img\"");			//выходим в рекавери
	log("LOG", "fastboot boot \"recovery.img\"");
	adb("adb devices");						//проверяем подключение устройства
	log("LOG", "adb devices");
	adb("adb push -p \"su.zip\" sd");				//копируем в корень устройства файл su.zip
	log("LOG", "adb push -p \"su.zip\" sd");
	adb("adb wait-for-device");
	log("LOG", "adb wait-for-device");
	adb("adb reboot bootloader");
	log("LOG", "adb reboot bootloader");				
	log("LOG", "Stop adb_flash module.");
	log("LOG", "------[adb_flash]-------");
}

/** 
	Вызов модуля получения root-прав.
*/
void adb_root()
{
	log("LOG", "[Run adb_root module.]");
	log("LOG", "-------[adb_root]-------");
	adb("root");
	log("LOG", "root");
	adb("adb wait-for-device");
	log("LOG", "adb wait-for-device");
	fastboot("fastboot devices");
	log("LOG", "fastboot devices");
	fastboot("fastboot boot \"recovery.img\"");
	log("LOG", "fastboot boot \"recovery.img\"");
	adb("adb wait-for-device");
	log("LOG", "adb wait-for-device");
	fastboot("fastboot install su.zip");
	log("LOG", "fastboot install su.zip");
	adb("adb reboot");
	log("LOG", "adb reboot");
	log("LOG", "Stop adb_root module.");
	log("LOG", "-------[adb_root]-------");
}