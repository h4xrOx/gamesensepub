#include "stdafx.h"
#include "Testingdll.h"


extern stTestingdll_text Testingdll_text;
extern stTestingdll_rdata Testingdll_rdata;
extern stTestingdll_data Testingdll_data;
extern stTestingdll_retard0 Testingdll_retard0;
extern UCHAR Testingdll_retard1[0x58D000];
extern stTestingdll_reloc Testingdll_reloc;
extern stTestingdll_rsrc Testingdll_rsrc;
extern UCHAR Testingdll_vmpdmp[0x0];

__declspec(align(16)) stTestingdll Testingdll;

void* __stdcall Testingdll_RVA(DWORD rvaAddr)
{
	if(rvaAddr==0)
		return g_hTestingdll;
	if(rvaAddr >= 0 && rvaAddr < 0xB99000)
		return (UCHAR*)&Testingdll + rvaAddr;

	return NULL;
}

BOOL Testingdll_Init()
{
	HMODULE hDll;
	DWORD oldProtect;
	DWORD nCodeSize;
	void (*fInitData)(HMODULE,void*,void*);

	oldProtect = PAGE_EXECUTE_READWRITE;
	nCodeSize = Testingdll_text(Testingdll_CodeEnd) - Testingdll_text(Testingdll_CodeStart);
	VirtualProtect(Testingdll_text(Testingdll_CodeStart),nCodeSize,PAGE_EXECUTE_READWRITE,&oldProtect);

	memcpy(&Testingdll.Text,&Testingdll_text,sizeof(Testingdll_text));
	memcpy(&Testingdll.Rdata,&Testingdll_rdata,sizeof(Testingdll_rdata));
	memcpy(&Testingdll.Data,&Testingdll_data,sizeof(Testingdll_data));
	memcpy(&Testingdll.Retard0,&Testingdll_retard0,sizeof(Testingdll_retard0));
	memcpy(&Testingdll.Retard1,&Testingdll_retard1,sizeof(Testingdll_retard1));
	memcpy(&Testingdll.Reloc,&Testingdll_reloc,sizeof(Testingdll_reloc));
	memcpy(&Testingdll.Rsrc,&Testingdll_rsrc,sizeof(Testingdll_rsrc));
	memcpy(&Testingdll.Vmpdmp,&Testingdll_vmpdmp,sizeof(Testingdll_vmpdmp));

	hDll = ::LoadLibraryA("KERNEL32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"KERNEL32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581000) = (FARPROC)&GetProcAddress;

	hDll = ::LoadLibraryA("USER32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"USER32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B008) = (FARPROC)&ShowWindow;

	hDll = ::LoadLibraryA("MSVCP140.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"MSVCP140.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B010) = (FARPROC)&?_Xout_of_range@std@@YAXPBD@Z;

	hDll = ::LoadLibraryA("WININET.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"WININET.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581018) = (FARPROC)&InternetOpenA;

	hDll = ::LoadLibraryA("VCRUNTIME140.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"VCRUNTIME140.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581020) = (FARPROC)&memcpy;

	hDll = ::LoadLibraryA("api-ms-win-crt-runtime-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-runtime-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581028) = (FARPROC)&_c_exit;

	hDll = ::LoadLibraryA("api-ms-win-crt-utility-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-utility-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B030) = (FARPROC)&rand;

	hDll = ::LoadLibraryA("api-ms-win-crt-stdio-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-stdio-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581038) = (FARPROC)&fclose;

	hDll = ::LoadLibraryA("api-ms-win-crt-time-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-time-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B040) = (FARPROC)&_time64;

	hDll = ::LoadLibraryA("api-ms-win-crt-heap-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-heap-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581048) = (FARPROC)&malloc;

	hDll = ::LoadLibraryA("api-ms-win-crt-math-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-math-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581050) = (FARPROC)&__setusermatherr;

	hDll = ::LoadLibraryA("api-ms-win-crt-locale-l1-1-0.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"api-ms-win-crt-locale-l1-1-0.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B058) = (FARPROC)&_configthreadlocale;

	hDll = ::LoadLibraryA("WTSAPI32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"WTSAPI32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B060) = (FARPROC)&WTSSendMessageW;

	hDll = ::LoadLibraryA("KERNEL32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"KERNEL32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B068) = (FARPROC)&GetCurrentProcess;

	hDll = ::LoadLibraryA("USER32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"USER32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_loc_0140B070) = (FARPROC)&CharUpperBuffW;

	hDll = ::LoadLibraryA("ADVAPI32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"ADVAPI32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B078) = (FARPROC)&RegQueryValueExA;

	hDll = ::LoadLibraryA("KERNEL32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"KERNEL32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_0140B080) = (FARPROC)&LocalAlloc;
	*Testingdll_retard1(Testingdll_sub_0140B084) = (FARPROC)&GetCurrentProcess;
	*Testingdll_retard1(Testingdll_proc_140B088) = (FARPROC)&GetCurrentThread;
	*Testingdll_retard1(Testingdll_proc_0140B08C) = (FARPROC)&LocalFree;
	*Testingdll_retard1(Testingdll_proc_140B090) = (FARPROC)&GetModuleFileNameW;
	*(Testingdll_retard1(Testingdll_CodeStart)+0x581094) = (FARPROC)&GetProcessAffinityMask;
	*Testingdll_retard1(Testingdll_proc_140B098) = (FARPROC)&SetProcessAffinityMask;
	*Testingdll_retard1(Testingdll_proc_140B09C) = (FARPROC)&SetThreadAffinityMask;
	*Testingdll_retard1(Testingdll_proc_140B0A0) = (FARPROC)&Sleep;
	*(Testingdll_retard1(Testingdll_CodeStart)+0x5810A4) = (FARPROC)&ExitProcess;
	*(Testingdll_retard1(Testingdll_CodeStart)+0x5810A8) = (FARPROC)&GetLastError;
	*(Testingdll_retard1(Testingdll_CodeStart)+0x5810AC) = (FARPROC)&FreeLibrary;
	*Testingdll_retard1(Testingdll_proc_0140B0B0) = (FARPROC)&LoadLibraryA;
	*Testingdll_retard1(Testingdll_proc_0140B0B4) = (FARPROC)&GetModuleHandleA;
	*Testingdll_retard1(Testingdll_proc_0140B0B8) = (FARPROC)&GetProcAddress;

	hDll = ::LoadLibraryA("ADVAPI32.dll");
	if(!hDll)
	{
#ifdef _DEBUG
		MessageBoxA(NULL,
			"Please copy the dependent DLL \"ADVAPI32.dll\" to the working directory.",
			"Load DLL Failed",MB_OK|MB_ICONERROR);
#endif
		ASSERT(0);
		return FALSE;
	}
	*Testingdll_retard1(Testingdll_proc_140B0C0) = (FARPROC)&OpenSCManagerW;
	*Testingdll_retard1(Testingdll_proc_140B0C4) = (FARPROC)&EnumServicesStatusExW;
	*Testingdll_retard1(Testingdll_proc_140B0C8) = (FARPROC)&OpenServiceW;
	*Testingdll_retard1(Testingdll_proc_140B0CC) = (FARPROC)&QueryServiceConfigW;
	*Testingdll_retard1(Testingdll_proc_140B0D0) = (FARPROC)&CloseServiceHandle;

	*(FARPROC*)&fInitData = (FARPROC)&Testingdll_InitData[0];
	fInitData(g_hTestingdll,Testingdll_RVA,NULL);

	return TRUE;
}


