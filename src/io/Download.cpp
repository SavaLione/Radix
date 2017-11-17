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
std::wstring s2ws(const std::string& s);
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

	std::cout << "ch_file\t" << ch_file << std::endl;

	char ch[radix::length_url];
	std::string s_url, s_file;
	v_get_ip(ch);

	s_url += ch;
	s_url += ch_file;
	s_url += radix::expansion_file;

	std::cout << "s_url\t" << s_url << std::endl;

	s_file += radix::firmware_way;
	s_file += ch_file;
	s_file += radix::expansion_file;

	std::cout << "s_file\t" << s_file << std::endl;

	//std::wstring wstr_url = std::wstring(s_url.begin(), s_url.end());
	//LPCWSTR lpc_url = wstr_url.c_str();

	//LPCWSTR lpc_url = (LPCWSTR)s_url.c_str();

	//std::wstring wstr_file = std::wstring(s_file.begin(), s_file.end());
	//LPCWSTR lpc_file = wstr_file.c_str();

	//LPCWSTR lpc_file = (LPCWSTR)s_file.c_str();

	//LPCWSTR url = (LPCWSTR)s.c_str();

	std::wstring stemp = s2ws(s_url);
	LPCWSTR lpc_url = stemp.c_str();

	std::wstring stemp1 = s2ws(s_file);
	LPCWSTR lpc_file = stemp1.c_str();


	//LPCWSTR url = lpc_url;
	//LPCWSTR file = lpc_file;


	std::string s = "slslslsll";

	std::wstring stemp2 = s2ws(s);
	LPCWSTR l_s = stemp2.c_str();
	std::cout << "l_s\t" << l_s << std::endl;


	std::cout << "ch\t" << ch << std::endl;
	std::cout << "lpc_url\t" << lpc_url << std::endl;
	std::cout << "lpc_file\t" << lpc_file << std::endl;

	//URLDownloadToFile(0, lpc_url, lpc_file, 0, 0);
}

//URLDownloadToFile(0, ch_arr_url_done, ch_arr_file_done, 0, 0);

std::wstring s2ws(const std::string& s) {
    int len;
    int slength = (int)s.length() + 1;
    len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0); 
    wchar_t* buf = new wchar_t[len];
    MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
    std::wstring r(buf);
    delete[] buf;
    return r;
}