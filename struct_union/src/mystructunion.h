#ifndef __MYSTRUCTUNION_H__
#define __MYSTRUCTUNION_H__

#include <intsafe.h>

union MyStruct
{
	INT8 iValue;
	struct
	{
		INT8 iVal1 : 4;
		INT8 iVal2 : 4;
	};
	MyStruct() : iValue(0){}
};

#endif //__MYSTRUCTUNION_H__