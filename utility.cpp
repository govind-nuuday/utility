
#include <iostream>
#include <string>

#include "trace.h"

int chkPrintStr(std::string str) 	{
ENT_PRN;
	int rc = 12;
	VAL_PRN (str);
EXT_PRN;	
	return rc;
}

#ifdef _UT
int main()
{
ENT_PRN;
	int rc = chkPrintStr("Welcome");
	MSG_PRN("Good Bye!");
EXT_PRN;
}

#endif


