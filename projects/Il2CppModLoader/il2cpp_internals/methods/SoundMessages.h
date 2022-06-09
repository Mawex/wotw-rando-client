#include <interception_macros.h>

namespace app::methods::SoundMessages {
    IL2CPP_REGISTER_METHOD(0x00EEB110, void, ShowMessage, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SoundMessages * this_ptr));
} // namespace app::methods::SoundMessages
