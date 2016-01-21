// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10], count = 0; bool check = true;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] < 0) check = false;
	}
	if (check == false) cout << "YES" << endl;
	else cout << "NO" << endl;
	system("pause");
	return 0;

}
