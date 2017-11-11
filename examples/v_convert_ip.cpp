#include "..\io\Ip.h"

int main() {
	unsigned char uc_arr[4];
	char ch_ip_addr[16] = "172.1.1.1";
	v_convert_ip(ch_ip_addr, uc_arr);
	return 0;
}