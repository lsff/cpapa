#include <iostream>
#include "mystructunion.h"

int main(int argc, char** argv)
{
	MyStruct testStruct;
	testStruct.iVal1 = 8;
	testStruct.iVal2 = 8;
	printf("%d\n", sizeof(testStruct));
	printf("%d\n", testStruct.iValue); //1000,1000 -> -120
	return 0;
}