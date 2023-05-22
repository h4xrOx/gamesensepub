#if !defined(_TESTINGDLL_SUPP_H_00B99000_INCLUDED_)
#define _TESTINGDLL_SUPP_H_00B99000_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <windows.h>

#pragma pack(push)
#pragma pack(1)

#include "Testingdll_text.h"
#include "Testingdll_rdata.h"
#include "Testingdll_data.h"
#include "Testingdll_retard0.h"
#include "Testingdll_reloc.h"
#include "Testingdll_rsrc.h"

__declspec(align(16)) struct stTestingdll
{
	UCHAR Header[0x1000];
	stTestingdll_text Text;
	stTestingdll_rdata Rdata;
	stTestingdll_data Data;
	stTestingdll_retard0 Retard0;
	UCHAR Retard1[0x58D000];
	stTestingdll_reloc Reloc;
	stTestingdll_rsrc Rsrc;
	UCHAR Vmpdmp[0x0];
};

#pragma pack(pop)

__declspec(align(16)) extern stTestingdll Testingdll;

/* Export Symbols in the .text section */
enum{
	Testingdll_CodeEnd = 0,
};

/* .retard1 section, RVA range: 0x60A000 - 0xB97000 */
UCHAR* __stdcall Testingdll_retard1(INT iSymbol);

/* Data for initialization. */
extern UCHAR Testingdll_InitData[0x0];

extern HMODULE g_hTestingdll;

/*
	Description: Access any address in the DLL.
	Parameters:
		rvaAddr: The RVA address you want to access.
*/
void* __stdcall Testingdll_RVA(DWORD rvaAddr);

#define Testingdll_VA(vaAddr) Testingdll_RVA((vaAddr) - 0x880000)


#endif // !defined(_TESTINGDLL_SUPP_H_00B99000_INCLUDED_)