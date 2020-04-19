#include "plugin.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"

#include <windows.h>
#include <Lmcons.h>

using namespace plugin;

class ScriptCommands {
public:
    ScriptCommands() {
        Events::processScriptsEvent += [] {
            char username[UNLEN + 1];
            DWORD username_len = UNLEN + 1;
            GetUserName((LPWSTR)username, &username_len);


            if (Command<Commands::IS_PLAYER_PLAYING>(0))
            {
                    static char message[400];
                    snprintf(message, 400, "www.vanilla-remastered - id:%s", username);
                    CMessages::AddMessageJumpQ(message, 500, 1);
            }
        };
    }
} scriptCommands;