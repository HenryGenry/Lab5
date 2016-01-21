// lab5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int n, m;
	n = b * d;
	m = a * d + c * b;
	int nod, aa = n, bb = m;
	while (bb>0 && aa>0) 
	{
		int tmp = aa;
		aa = bb;
		bb = tmp % bb;
	}
	nod = aa;
	if (nod > 0)
	{
		m /= nod;
		n /= nod;
	}
	std::cout << m << " " << n << '\n';
	system("pause");
	return 0;
}

