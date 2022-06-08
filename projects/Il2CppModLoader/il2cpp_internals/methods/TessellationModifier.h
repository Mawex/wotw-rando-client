#include <interception_macros.h>

namespace app::methods::TessellationModifier {
IL2CPP_REGISTER_METHOD(0x010D9050, void, ApplyMultipliers, (TessellationModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x010D90A0, void, SetProperties, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x010D9190, bool, get_IsWorldRotation, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x010D91B0, bool, DoStrip, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x010D91D0, void, Update, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x010D9200, void, UpdateWorldRotation, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (TessellationModifier * __this));
IL2CPP_REGISTER_METHOD(0x010D93D0, void, __ctor, (TessellationModifier * __this));
}
