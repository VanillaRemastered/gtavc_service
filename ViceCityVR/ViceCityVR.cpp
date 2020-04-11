#include <plugin.h>
#include "VanillaCore.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"
using namespace plugin;

class ViceCityVR {
public:
    ViceCityVR() {
        SetWindowText(GetActiveWindow(), "test");
    }
    ~ViceCityVR() {
        CVanillaCore::PrintMessage();
    }
} viceCityVR;
