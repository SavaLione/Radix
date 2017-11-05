#include <cstring>
#include <cctype>

bool b_net_ip(char* ch_addr) {
	bool b_symbol_check = true;
	int i_dot_check = 0;
	if (strlen(ch_addr) <= 15) {
		for (int i = 0; i < strlen(ch_addr); i++) {
			if (ch_addr[i] == '.') {
				i_dot_check++;
			} else if ((!isdigit(ch_addr[i])) && (ch_addr[i] != '.')) {
				b_symbol_check = false;
			}
		}
		if (i_dot_check != 4) {
			b_symbol_check = false;
		}
	} else {
		return false;
	}
	if (b_symbol_check) {
		for (int i = 0; i <= strlen(ch_addr); i++) {
			int i_check = 0;
			if (ch_addr[i] != '.') {
				i_check = i_check + ch_addr[i] * (i + 1);
			} else {
				if (i_check <= 255) {
					i_check = 0;
				} else {
					b_symbol_check = false;
				}
			}
		}
	}
	//(192.168.1.1)
	//(192.192.192.192)
	if (!b_symbol_check) {
		return false;
	} else if (b_symbol_check) {
		return true;
	}
	return false;
}

bool b_net_connection(char* ch_addr) {
	bool b_symbol_check = true;
	if (b_symbol_check) {
		for (int i = 0; i <= strlen(ch_addr); i++) {
			int i_check = 0;
			if (ch_addr[i] != '.') {
				i_check = i_check + ch_addr[i] * (i + 1);
			} else {
				if (i_check <= 255) {
					i_check = 0;
				} else {
					b_symbol_check = false;
				}
			}
		}
	}
	//

	//
	return false;
}