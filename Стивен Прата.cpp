#include "stdafx.h"
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int furlong;
	int const yard(220);
	cout << "Enter the distance in furlongs: ";
	cin >> furlong;
	cout << "yard = " << furlong * yard << endl;
	return 0;
}