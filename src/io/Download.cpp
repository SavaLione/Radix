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

#pragma comment(lib,"urlmon.lib")
#pragma warning(disable : 4996)

/** Загрузка файла по уникальному номеру
	\param[in] sz_file Номер файла для загрузки
	\example v_download_file.cpp
*/
void v_download_file(char *ch_file) {
	const size_t sz_arr_length = 1024;
	const char ch_arr_expansion[] = ".zip", ch_arr_way[] = "\\assets\\firmware\\";
	char ch_arr_url[sz_arr_length], ch_arr_url_done[sz_arr_length], ch_arr_file_done[sz_arr_length];

	v_get_ip(ch_arr_url);
	

	//strcat(ch_arr_url_done, ch_arr_url);
	//strcat(ch_arr_url_done, "/");
	//strcat(ch_arr_url_done, ch_file);
	//strcat(ch_arr_url_done, ch_arr_expansion);

	//strcat(ch_arr_file_done, ch_arr_way);
	//strcat(ch_arr_file_done, ch_file);
	//strcat(ch_arr_file_done, ch_arr_expansion);

	std::cout << "ch_arr_url" << ch_arr_url << std::endl;

	try {
		//strcpy(str, "hello");
		std::cout << "ch_arr_url_done" << ch_arr_url_done << std::endl;
		std::cout << "ch_arr_file_done" << ch_arr_file_done << std::endl;

		URLDownloadToFile(0, ch_arr_url_done, ch_arr_file_done, 0, 0);

		log("LOG", "Loading done");

	} catch (...) {
		log("WARN", "Loading error!!!");
	}
}