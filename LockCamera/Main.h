#pragma once
#include "stdafx.h"

namespace Main
{
	void OnRun();

	void OnKeyboardInput(DWORD ulKey, WORD usRepeats, BYTE ucScanCode, BOOL bIsExtended, BOOL bIsWithAlt, BOOL bWasDownBefore, BOOL bIsUpNow);
};

