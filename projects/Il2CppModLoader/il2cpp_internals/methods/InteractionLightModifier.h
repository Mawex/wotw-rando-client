#include <interception_macros.h>

namespace app::methods::InteractionLightModifier {
IL2CPP_REGISTER_METHOD(0x00637F10, void, Reset, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00637F20, void, ApplyMultipliers, (InteractionLightModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00637F40, String *, get_InteractionName, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00637FE0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00638170, float, GetStrength, (InteractionLightModifier * __this, Vector3 velocity, Vector4 strengthVal));
IL2CPP_REGISTER_METHOD(0x006382A0, UberInteractionManager_PropertyIDCache *, get_PropertyCache, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00638380, void, SetProperties, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00638510, void, __ctor, (InteractionLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00638950, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x006389E0, IEnumerable_1_System_String_ *, __n__0, (InteractionLightModifier * __this));
}
