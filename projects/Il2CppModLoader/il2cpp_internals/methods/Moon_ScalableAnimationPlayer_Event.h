#include <interception_macros.h>

namespace app::methods::Moon::ScalableAnimationPlayer_Event {
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_SimulatedTime, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_SimulatedTime, (ScalableAnimationPlayer_Event * __this, float value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsSent, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_IsSent, (ScalableAnimationPlayer_Event * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_EventId, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_StaticTime, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_VolatilePreviewTime, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_VolatilePreviewTime, (ScalableAnimationPlayer_Event * __this, float value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsConstrainable, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsDeletable, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeDragged, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_EventNormalizedTime, (ScalableAnimationPlayer_Event * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_EventNormalizedTime, (ScalableAnimationPlayer_Event * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ScalableAnimationPlayer_Event * __this));
}
