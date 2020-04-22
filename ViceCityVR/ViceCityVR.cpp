#include "plugin.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"

#include <CHud.h>

using namespace plugin;

class ScriptCommands {
public:
    ScriptCommands() {
        Events::gameProcessEvent += [] {
           
            
        };
        Events::processScriptsEvent += [] {

        };
    }
} scriptCommands;