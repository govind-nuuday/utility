// Global
#include <iostream>
#include <string>

// Project
#include "trace.h"

// Module
#include "explore.h"
#include "utility.h"

int main()
{
ENT_PRN;
	int rc = chkPrintStr("Welcome");
	rc = exploreMap();
	MSG_PRN("Good Bye!");
EXT_PRN;
}

