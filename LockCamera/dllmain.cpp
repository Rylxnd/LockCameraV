#include "stdafx.h"

#include "Main.h"

BOOL APIENTRY DllMain(HMODULE hInstance, DWORD reason, LPVOID lpReserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:

		scriptRegister(hInstance, Main::OnRun);
		keyboardHandlerRegister(Main::OnKeyboardInput);

		break;
	case DLL_PROCESS_DETACH:

		keyboardHandlerUnregister(Main::OnKeyboardInput);
		scriptUnregister(hInstance);

		break;
	}

	return TRUE;
}