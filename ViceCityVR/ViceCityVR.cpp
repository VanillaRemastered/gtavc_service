#include "plugin.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"

#include <CHud.h>

using namespace plugin;

class VanillaRemasteredVC{
public:
    VanillaRemasteredVC() {
        Events::gameProcessEvent += [] {
           
            
        };
        Events::processScriptsEvent += [] {

        };
    }
} VanillaRemasteredVC;