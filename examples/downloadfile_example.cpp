#include <urlmon.h>
#include <Windows.h>
#pragma comment(lib,"urlmon.lib")
void v_url_downloadfile() {
	URLDownloadToFile(0, "http://savalione.ru/index.html", "index.html", 0, 0);
}
