/**
	\file
    \brief Функции для создания стандартных файлов программы.
	\author SavaLione
*/
#include <fstream>

#include "Templates.h"

#include "..\core\Constants.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file logger.log
///////////////////////////////////////////////////////////////////////////////
/** Создание файла пользовательского соглашения.

		logger.log - файл с логом вывода
*/
void v_templates_create_logger_log() {
	try {
		ofstream fout(radix::logger_list);
		fout << "[				    ] " << "Creating file logger.log" << "\n";
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file rules.txt
///////////////////////////////////////////////////////////////////////////////
/** Создание файла пользовательского соглашения.

		rules.txt - файл с пользовательским соглашением
*/
void v_templates_create_rules_txt() {
	try {
		ofstream fout(radix::rules_list);
		fout << "Copyright (c) 2017 Radix" << "\n";
		fout << "\n";
		fout << "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A " << "\n";
		fout << "PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN " << "\n";
		fout << "ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." << "\n";
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Создание файла настроек.

		settings.ini - файл с настройками
*/
void v_templates_create_settings_ini() {
	try {
		ofstream fout(radix::settings_list);
		fout << "#Radix" << "\n";
		fout << "#2017" << "\n";
		fout << "\n";
		fout << "[START]" << "\n";
		fout << "rules = true" << "\n";
		fout << "logger = true"<< "\n";
		fout << "internet = false"<< "\n";
		fout << "[END]";
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file ip.ini
///////////////////////////////////////////////////////////////////////////////
/** Создание файла ip.

		ip.ini - файл с ip адресами
*/
void v_templates_create_ip_ini() {
	ifstream fin(radix::address_list);
	if (fin.is_open()) {

	} else {
		try {
			ofstream fout(radix::address_list);
			fout << "127.0.0.1";
			fout.close();
		} catch(exception) {
			
		}
	}
}
