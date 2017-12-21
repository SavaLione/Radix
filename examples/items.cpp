#include <iostream>

#include "..\ui\Items.h"

using namespace std;

int main() {
	cout << s_mainmenu() << endl;
	cout << s_querymenu("String") << endl;
	cout << s_checkagreement() << endl;
	v_manual();
	return 0;
}