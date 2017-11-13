/**
	\file
    \brief Модуль загрузки файла. Загружает файл
	\author SavaLione
*/
#include <Windows.h>
#include <urlmon.h>
#include <cstring>

#include "Ip.h"
#include "Logger.h"

#pragma comment(lib,"urlmon.lib")
/** Функция загрузки файла
	\param[in] ch_arr_file Файл, который надо загрузить
    \example v_url_downloadfile.cpp
*/
void v_url_downloadfile(char *ch_arr_file) {
    char *buff, *dir = "\\assets\\firmware\\";
    v_get_ip(buff);
    strcat(dir, ch_arr_file);
    strcat(buff, ch_arr_file);
    try {
        URLDownloadToFile(0, buff, dir, 0, 0);
        log("LOG", "File loaded");
    } catch (Exception e) {
        log("WARN", "Download failed");
    }
}
