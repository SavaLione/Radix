#include <Windows.h>
#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;


int adb(LPSTR cmdArgs)
{
	PROCESS_INFORMATION ProcessInfo;

	STARTUPINFO StartupInfo;

	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof StartupInfo;

	LPCSTR cmdPath = "\\assets\\platform-tools\\adb.exe";

	if (CreateProcess(cmdPath, cmdArgs,
		NULL, NULL, FALSE, 0, NULL,
		NULL, &StartupInfo, &ProcessInfo))
	{
		WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
		CloseHandle(ProcessInfo.hThread);
		CloseHandle(ProcessInfo.hProcess);
	}
	return 0;
}
