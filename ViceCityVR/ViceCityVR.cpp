#include <plugin.h>
#include "VanillaCore.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"
using namespace plugin;

class ViceCityVR {
public:
    ViceCityVR() {
        SetWindowText(GetActiveWindow(), "Vanilla Remastered Vice City");

    }
    ~ViceCityVR() {
        CVanillaCore::PrintMessage();
    }
} viceCityVR;
