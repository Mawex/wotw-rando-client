#include <interception_macros.h>

namespace app::methods::GrolEntity {
    IL2CPP_REGISTER_METHOD(0x0108CDB0, String*, get_DialogActorName, (app::GrolEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0108CE30, String*, get_InteractionActorName, (app::GrolEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (app::GrolEntity * this_ptr));
} // namespace app::methods::GrolEntity
