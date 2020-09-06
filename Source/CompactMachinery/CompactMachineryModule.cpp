#include "CompactMachineryModule.h"
#include "SML/mod/hooking.h"
#include "FGGameEngine.h"
#include "SML/util/Logging.h"
#include <windows.h>

void FCompactMachineryModule::StartupModule() {

	MessageBox(NULL, "Hello, World!", "Hi!", MB_OK);

	SUBSCRIBE_VIRTUAL_FUNCTION(UFGGameEngine, UFGGameEngine::Start, [](auto& scope, UFGGameEngine* self_r) {
		SML::Logging::info("GAME ENDING STARTED __>_> XDXDXDXDXD LOL");
		for (int i = 0; i < 100; i++) {
			SML::Logging::info("HOOK WORKED YAY");
		}
	})
}

IMPLEMENT_GAME_MODULE(FCompactMachineryModule, CompactMachinery);