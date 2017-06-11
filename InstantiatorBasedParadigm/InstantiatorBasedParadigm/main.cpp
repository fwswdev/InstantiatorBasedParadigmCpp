/*
* ----------------------------------------------------------------------------
* "THE BEER-WARE LICENSE" (Revision 42):
* <phk@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
* can do whatever you want with this stuff. If we meet some day, and you think
* this stuff is worth it, you can buy me a beer in return.   Poul-Henning Kamp
* ----------------------------------------------------------------------------
*/

#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h> 

#include "stdafx.h"
#include "global.h"

int main()
{
	auto p = GetABaseWebSocketv1();
	p->StartServer();
	p->StopServer();
	delete p;

	// Report Memory leaks
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
    return 0;
}

