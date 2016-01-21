// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10], count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < 9; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) count++;
	}
	cout << count << endl;
	system("pause");
	return 0;

}