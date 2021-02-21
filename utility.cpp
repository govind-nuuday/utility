// Global
#include <iostream>
#include <string>

// Project
#include "trace.h"

// Local
#include "utility.h"

int chkPrintStr(std::string str) 	{
ENT_PRN;
	int rc = 12;
	VAL_PRN (str);
EXT_PRN;	
	return rc;
}

