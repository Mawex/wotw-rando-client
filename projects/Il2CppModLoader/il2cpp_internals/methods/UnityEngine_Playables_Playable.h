#include <interception_macros.h>

namespace app::methods::UnityEngine_Playables::Playable {
IL2CPP_REGISTER_METHOD(0x00120520, void, __ctor, (app::Playable__Boxed * this_ptr, app::PlayableHandle handle));
IL2CPP_REGISTER_METHOD(0x02963DB0, Playable, get_Null, ());
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (app::Playable__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216570, Type *, GetPlayableType, (app::Playable__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216590, bool, Equals, (app::Playable__Boxed * this_ptr, app::Playable other));
IL2CPP_REGISTER_METHOD(0x02963FC0, void, __cctor, ());
}
