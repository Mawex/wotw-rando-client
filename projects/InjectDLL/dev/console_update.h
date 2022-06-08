#include "Il2CppModLoader/interception_macros.h"
#include "Il2CppModLoader/windows_api/console.h"

IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController * this_ptr)) {
    GameController::Update(this_ptr);
    modloader::win::console::console_update();
}