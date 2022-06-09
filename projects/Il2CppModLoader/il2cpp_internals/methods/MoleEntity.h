#include <interception_macros.h>

namespace app::methods::MoleEntity {
    IL2CPP_REGISTER_METHOD(0x01331CE0, String*, get_DialogActorName, (app::MoleEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01331D60, String*, get_InteractionActorName, (app::MoleEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01331DE0, bool, get_CanEffectivelyStartInteraction, (app::MoleEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (app::MoleEntity * this_ptr));
} // namespace app::methods::MoleEntity
