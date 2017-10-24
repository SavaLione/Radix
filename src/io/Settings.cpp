#include <fstream>
//-----------------------------------------------------------------------------
#include <iostream>
//-----------------------------------------------------------------------------
using namespace std;

void v_settings() {
	char buff[32];
	ifstream fin("settings.ini");
	bool b_fl = true;
	while (b_fl) {
		fin.getline(buff, 32);
		for (int i = 0; i <= 32; i++) {
			if (buff[i] == '#') {
				cout << "[#]";
			} else if (buff[i] == '=') {
				cout << "  " << "[=]" << "  ";
			} else if ((buff[i] == '[') && (buff[i + 1] == 'E') && (buff[i + 2] == 'N') && (buff[i + 3] == 'D') && (buff[i + 4] == ']')) {
				b_fl = false;
			} else {
				cout << "[-]";
			}
		}
		cout << endl;
	}
}


///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file settings.ini
///////////////////////////////////////////////////////////////////////////////
/*
	Создание файла настроек.
		settings.ini - файл с настройками
	Обработка ошибок:
		1 - удачное создание файла
		0 - не удачное создание файла
*/
int i_settings_create_template() {
	try {
		ofstream fout("settings.ini");
		fout << "#Radix" << "\n";
		fout << "#2017" << "\n";
		fout << "\n";
		fout << "rules = true" << "\n";
		fout << "logger = true"<< "\n";
		fout << "[END]";
		fout.close();
		return 1;
	} catch(exception) {
		return 0;
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file rules.txt
///////////////////////////////////////////////////////////////////////////////
/*
	Создание файла пользовательского соглашения.
		rules.txt - файл с пользовательским соглашением
	Обработка ошибок:
		1 - удачное создание файла
		0 - не удачное создание файла
*/
int i_settings_create_rules_txt() {
	try {
		ofstream fout("rules.txt");
		fout << "Copyright (c) 2017 Radix" << "\n";
		fout << "\n";
		fout << "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A " << "\n";
		fout << "PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN " << "\n";
		fout << "ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." << "\n";
		fout.close();
		return 1;
	} catch(exception) {
		return 0;
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file logger.log
///////////////////////////////////////////////////////////////////////////////
/*
	Создание файла пользовательского соглашения.
		logger.log - файл с логом вывода
	Обработка ошибок:
		1 - удачное создание файла
		0 - не удачное создание файла
*/
int i_settings_create_logger_log() {
	try {
		ofstream fout("logger.log");
		fout << "[				    ] " << "Creating file logger.log" << "\n";
		fout.close();
		return 1;
	} catch(exception) {
		return 0;
	}
}