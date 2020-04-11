// VanillaCore.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "VanillaCore.h"
#include <Windows.h>
#include <tchar.h>
#include <urlmon.h>

#include<fstream>
#include<sstream>
#include<string>

#pragma comment(lib, "urlmon.lib")
// This is the constructor of a class that has been exported.
CVanillaCore::CVanillaCore()
{
    return;
}

void CVanillaCore::PrintMessage(void)
{
    HRESULT hr = URLDownloadToFile(NULL, "https://vanilla-remastered.com/files/license.txt", "F:\\test.txt", 0, nullptr);

    std::ifstream f("F:\\test.txt"); //taking file as inputstream
    std::string str;
    if (f) {
        std::ostringstream ss;
        ss << f.rdbuf(); // reading data
        str = ss.str();
    }
    MessageBox(0, str.c_str(), "", MB_OK);

}
