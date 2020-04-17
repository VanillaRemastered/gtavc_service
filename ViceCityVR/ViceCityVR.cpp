#include <plugin.h>
#include "RenderWare.h"
#include "d3dx9.h"
#include "rwd3d9.h"

#include <windows.h>

using namespace plugin;

class ViceCityVR {
public:
    ViceCityVR() {
        SetWindowText(GetActiveWindow(), "Vanilla Remastered Vice City");
        HICON ico = (HICON)LoadImage(NULL, "favi.ico", IMAGE_ICON, 32, 32, LR_LOADFROMFILE);
        SendMessage(GetActiveWindow(), WM_SETICON, ICON_SMALL, (LPARAM)ico);
    }

    ~ViceCityVR() {}
} viceCityVR;

