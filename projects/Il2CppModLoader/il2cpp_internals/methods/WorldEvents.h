#include <interception_macros.h>

namespace app::methods::WorldEvents {
IL2CPP_REGISTER_METHOD(0x00581340, String *, GetNameFromID, (WorldEvents * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x005815A0, int32_t, GetIDFromName, (WorldEvents * __this, String * eventName));
IL2CPP_REGISTER_METHODINFO(0x04788200, WorldEvents_GetIDFromName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00581850, void, __ctor, (WorldEvents * __this));
}
