#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int num;
	char C;

	cin >> C;
	cin >> num;
		while (C != 'x' && num != -2) {
			if (num == -1) {
				cout << endl;
			}
			for (int i = num; num > 0; i--) {
				cout << C << endl;
			}

			cin >> C;
			cin >> num;
		}
	return 0;
}