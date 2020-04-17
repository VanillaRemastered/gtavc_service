#include <plugin.h>
#include "RenderWare.h"
#include "d3dx9.h"
#include "rwd3d9.h"

#include <windows.h>

using namespace plugin;

class ViceCityVR {
public:
    ViceCityVR() {
        static RwTexDictionary* m_txd;
        static RwTexture* m_speedometerTex;

        m_pD3DXFont = NULL;
        SetWindowText(GetActiveWindow(), "Vanilla Remastered Vice City");
        HICON ico = (HICON)LoadImage(NULL, "favi.ico", IMAGE_ICON, 32, 32, LR_LOADFROMFILE);
        SendMessage(GetActiveWindow(), WM_SETICON, ICON_SMALL, (LPARAM)ico);
    }

    static ID3DXFont* m_pD3DXFont;

    static void InitFont() {
        IDirect3DDevice9* device = reinterpret_cast<IDirect3DDevice9*>(RwD3D9GetCurrentD3DDevice());
        if (FAILED(D3DXCreateFontA(device, 48, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, ANTIALIASED_QUALITY,
            DEFAULT_PITCH | FF_DONTCARE, "arial", &m_pD3DXFont)))
        {
            Error("Failed to create D3DX font!"); 
        }
    }

    static void DestroyFont() {
        if (m_pD3DXFont) {
            m_pD3DXFont->Release();
            m_pD3DXFont = NULL;
        }
    }

    static void Draw() {
        if (m_pD3DXFont) {
            RECT rect;
            rect.left = 0;
            rect.top = 0;
            rect.bottom = RsGlobal.maximumHeight;
            rect.right = RsGlobal.maximumWidth;
            std::string gameName = std::string("Vanilla Remastered ") + "\n" + "Vice City Build 01";
            m_pD3DXFont->DrawTextA(NULL, gameName.c_str(), -1, &rect, DT_CENTER | DT_VCENTER, D3DCOLOR_RGBA(255, 255, 0, 255));
        }
    }

    ~ViceCityVR() {
    }
} viceCityVR;

ID3DXFont* ViceCityVR::m_pD3DXFont;
