// _task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	double z;
	int n, m, num;
	std::cin >> n >> m;
	if (n < m) num = n;
	else num = m;
	for (int i = 1; i <= num; i++) {
		if (n % i == 0 && m % i == 0) z = i;
	}
	std::cout << z << '\n';
	system("pause");
	return 0;
}

