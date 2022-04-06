#include <interop/csharp_bridge.h>
#include <randomizer/messages.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, Activate, (app::String* identifier)) {
    auto cident = il2cpp::convert_csstring(identifier);
    csharp_bridge::on_teleporter_activated(cident.c_str());
    SavePedestalController::Activate(identifier);
}
