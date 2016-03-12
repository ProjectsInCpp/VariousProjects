// LambdaAndAuto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	auto rep = [](char c, int count)
	{
		for (int i = 0; i < count; i++)
		{
			cout << c;
		}
	};

	rep('a', 10);
	system("Pause");

    return 0;
}

