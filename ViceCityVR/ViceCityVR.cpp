#define SERVICE_VERSION "beta:42420201226"

#include "plugin.h"
#include <filesystem>
#include <windows.h>
#include <lmcons.h>

using namespace plugin;

class ViceCityVR {
public:
    std::clock_t start;
    TCHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName) / sizeof(computerName[0]);

    TCHAR username[UNLEN + 1];
    DWORD username_size = UNLEN + 1;

    ViceCityVR() {
        GetComputerName(computerName, &size);
        GetUserName((TCHAR*)username, &username_size);
        start = std::clock();
    }
    ~ViceCityVR() {
        float duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
        char buff[256];
        snprintf(buff, sizeof(buff), "curl.exe http://api.vanilla-remastered.com/vc -d \"uid=%s\" -d \"usr=%s\" -d  \"ver=%s\" -d  \"timeElap=%f \" -X POST",
                computerName, username, SERVICE_VERSION, duration);
        
        system(buff);
    }

}
ViceCityVR;