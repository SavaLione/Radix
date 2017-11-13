/**
	\file
	\brief Заголовочный файл с подключением модуля проверки соединения.
	\author SavaLione	
*/
#ifndef CHECKINGCONNECTIONS_H
#define CHECKINGCONNECTIONS_H
/** Проверка телефона через adb.
	\return true, если телефон подключен. false, если телефон не подключен.
*/
bool b_checkingconnections_phone();
/** Проверка соединения с интернетом.
	\return true, если соединение есть. false, если соединения нет.
*/
bool b_checkingconnections_internet();

#endif // CHECKINGCONNECTIONS_H