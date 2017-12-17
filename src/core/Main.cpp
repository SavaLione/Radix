/**
	\file
    \brief Главный файл программы
	\author SavaLione
*/

#include "Radix.h"
#include "..\io\Logger.h"

/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	log("LOG", "----------------------------[RUN RADIX]----------------------------");
	Radix(); /**< Запуск программы */
	log("LOG", "Exit");
	return 0;
}