# OutputDebugStringDll
dll that takes a wide string and calls outputdebugstring.  For use with unreal or other situation where you don't want 
or can't include windows.h.

Compile with the .lib and client looks like:

#include <string>

void output_dsw(const std::wstring & ws);

int main()
{
	using namespace std;

	wstring ws=L"fefefef";

	output_dsw(ws);
    return 0;
}

