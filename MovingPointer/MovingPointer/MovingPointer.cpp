// MovingPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Obj.h"
#include "Thing.h"

using namespace std;


int main()
{
	Obj tempObj;
	Thing tempThing;
	tempObj = tempThing;



	//Obj* tempObj2 = new Thing();
	//Obj tempVal;

	//int tab[] = { 2,4,5,6 };
	//int* fstPtr = &(tab[1]);
	//int* sndPtr = &(tab[2]);

	//cout <<fstPtr << endl;
	//cout << *(++fstPtr) << endl;

	system("Pause");
    return 0;
}

