// lab_5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < 10; i++) {
		if (i != 0 && i % 2 == 0) cout << arr[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}

