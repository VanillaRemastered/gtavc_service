// VanillaCore.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "VanillaCore.h"


// This is an example of an exported variable
VANILLACORE_API int nVanillaCore=0;

// This is an example of an exported function.
VANILLACORE_API int fnVanillaCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CVanillaCore::CVanillaCore()
{
    return;
}
