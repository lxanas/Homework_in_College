// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include"stdlib.h"
#include<iostream>
using namespace std;
int main()
{
	int num;
	//cin >> num;
	cin >> num;
	for (int i = 0; i < num; i++)
		cout << i << ' ';
	cout << endl;
	getchar();
	return 0;
}