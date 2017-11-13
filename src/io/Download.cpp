/**
	\file
    \brief Модуль загрузки. Загружает файл
	\author SavaLione
*/
#include <urlmon.h>
#include <Windows.h>
#include <string>

#include "Ip.h"
#include "Logger.h"

#pragma comment(lib,"urlmon.lib")
#pragma warning(disable : 4996)

/** Загрузка файла по уникальному номеру
	\param[in] sz_file Номер файла для загрузки
	\example v_download_file.cpp
*/
void v_download_file(size_t sz_file) {
	const size_t sz_arr_length = 1024;
	const char ch_arr_expansion[] = ".zip";
	char ch_arr_url[sz_arr_length], ch_arr_url_done[sz_arr_length], ch_arr_file_done[sz_arr_length];
	v_get_ip(ch_arr_url);
	std::string s_url = ch_arr_url, s_file;
	s_url += "/";
	s_url += sz_file + ch_arr_expansion;
	s_file += "\\assets\\firmware\\";
	s_file += sz_file + ch_arr_expansion;

	try {
		strncpy(ch_arr_url_done, s_url.c_str(), sizeof(ch_arr_url_done));
		ch_arr_url_done[sizeof(ch_arr_url_done) - 1] = 0;

		strncpy(ch_arr_file_done, s_url.c_str(), sizeof(ch_arr_file_done));
		ch_arr_file_done[sizeof(ch_arr_file_done) - 1] = 0;

		log("LOG", "Loading done");

		//s_url.copy(ch_arr_url_done, s_url.length()+1);
		//s_file.copy(ch_arr_file_done, s_file.length()+1);
	} catch (...) {
		log("WARN", "Loading error!!!");
	}

	URLDownloadToFile(0, ch_arr_url_done, ch_arr_file_done, 0, 0);
}