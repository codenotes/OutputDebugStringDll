// ramaODT.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "windows.h"
#include <string>


__declspec(dllexport) void output_dsw(const std::wstring & ws)
{
	OutputDebugStringW(ws.c_str());

}

