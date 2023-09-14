#include <windows.h>

BOOL WINAPI DllMain(
	HINSTANCE hModule,
	DWORD dwReason,
	LPVOID lpReserved
)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, L"Voila! DLL Injected", L"Tadaaa", MB_OK);
		break;

	}
	return TRUE;
}