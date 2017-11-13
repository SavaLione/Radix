/**
	\file
    \brief Модуль загрузки. Загружает файл
	\author SavaLione
*/
#include <urlmon.h>
#include <Windows.h>
#include <string>
//
#include <iostream>
//
#include "Ip.h"
#include "Logger.h"
#include "..\core\Constants.h"

#pragma comment(lib,"urlmon.lib")
#pragma warning(disable : 4996)

/** Загрузка файла по уникальному номеру
	\param[in] sz_file Номер файла для загрузки
	\example v_download_file.cpp
*/
void v_download_file(char *ch_file) {
	char ch[radix::length_url];
	std::string s_url;
	v_get_ip(ch);

	std::cout << "ch" << ch << "ch" << std::endl;

}

//URLDownloadToFile(0, ch_arr_url_done, ch_arr_file_done, 0, 0);