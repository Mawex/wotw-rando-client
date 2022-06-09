#include <interception_macros.h>

namespace app::methods::SpiderlingNPCEntity {
IL2CPP_REGISTER_METHOD(0x011C6C20, String *, get_DialogActorName, (app::SpiderlingNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x011C6CA0, String *, get_InteractionActorName, (app::SpiderlingNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x011C6D20, bool, get_CanEffectivelyStartInteraction, (app::SpiderlingNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (app::SpiderlingNPCEntity * this_ptr));
}
