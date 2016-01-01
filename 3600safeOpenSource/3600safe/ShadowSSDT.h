#include "StdAfx.h"
//---------------------------------------------------------------------------------------
//ShadowSSDT
//---------------------------------------------------------------------------------------
typedef struct _SHADOWSSDTINFO_INFORMATION {          //SHADOWSSDTINFO_INFORMATION
	ULONG ulNumber;
	ULONG ulMemoryFunctionBase;
	CHAR lpszFunction[256];
	CHAR lpszHookModuleImage[256];
	ULONG ulHookModuleBase;
	ULONG ulHookModuleSize;
	int  IntHookType;                     //
} SHADOWSSDTINFO_INFORMATION, *PSHADOWSSDTINFO_INFORMATION;

typedef struct _SHADOWSSDTINFO {          //SSDT
	ULONG ulCount;
	SHADOWSSDTINFO_INFORMATION SSDT[1];
} SHADOWSSDTINFO, *PSHADOWSSDTINFO;

//---------------------------------------------------------------------------------------
PSHADOWSSDTINFO ShadowSSDTInfo;

CHAR* setClipboardText(CHAR* str);