// ramaODTdll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

void output_dsw(const std::wstring & ws);

int main()
{
	using namespace std;

	wstring ws=L"fefefef";

	output_dsw(ws);
    return 0;
}

