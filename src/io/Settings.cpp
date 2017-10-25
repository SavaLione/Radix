#include <fstream>
//-----------------------------------------------------------------------------
#include <iostream>
//-----------------------------------------------------------------------------
using namespace std;

bool b_settings_rules() {
	char buff[32];
	char ch_start[] = "[START]", ch_end[] = "[END]";
	char ch_switch_true[] = "rules = true", ch_switch_false[] = "rules = false";
	bool b_end = true, b_start = false;
	ifstream fin("settings.ini");
	while (b_end) {
		fin.getline(buff, 32);
		if (strcmp(buff, ch_start) == 0) {
			b_start = true;
		} else if (strcmp(buff, ch_end) == 0) {
			b_end = false, b_start = false;
		}
		if (strcmp(buff, ch_switch_true) == 0) {
			return true;
		} else if (strcmp(buff, ch_switch_false) == 0) {
			return false;
		}
	}
	fin.close();
	return true;
}

/*
bool b_settings_rules() {
	char buff[32];
	char ch_start[] = "[START]", ch_end[] = "[END]";
	char ch_switch_true[] = "rules = true", ch_switch_false[] = "rules = false";
	ifstream fin("settings.ini");
	bool b_end = true, b_start = false;
	while (b_end) {
		fin.getline(buff, 32);
		for (int i = 0; i <= 32; i++) {
			if (buff == ch_start) {
				b_start = true;
			} else if (buff == ch_end) {
				b_end = false, b_start = false;
			} else if (b_start) {
				if (buff == ch_switch_true) {
					b_end = false, b_start = false;
					cout << "TRUE" << endl;
					return true;
				} else if (buff == ch_switch_false) {
					b_end = false, b_start = false;
					cout << "FALSE" << endl;
					return false;
				}
			} else if (b_end) {

			} else {
				// NOTHING
			}
		}
		fin.close();
	}
}
*/

/*
bool b_settings() {
	char buff[32];
	ifstream fin("settings.ini");
	bool b_end = true, b_start = false;
	while (b_end) {
		fin.getline(buff, 32);
		for (int i = 0; i <= 32; i++) {
			if ((buff[i] == '[') && (buff[i + 1] == 'S') && (buff[i + 2] == 'T') && (buff[i + 3] == 'A') && (buff[i + 4] == 'R') && (buff[i + 5] == 'T') && (buff[i + 6] == ']')) {
				b_start = true;
			} else if ((buff[i] == '[') && (buff[i + 1] == 'E') && (buff[i + 2] == 'N') && (buff[i + 3] == 'D') && (buff[i + 4] == ']')) {
				b_end = false, b_start = false;
			} else if (b_start) {

			} else if (b_end) {

			} else {
				// NOTHING
			}
		}
	}

	return true;
}
*/