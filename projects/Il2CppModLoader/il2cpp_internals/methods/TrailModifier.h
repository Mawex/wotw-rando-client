#include <interception_macros.h>

namespace app::methods::TrailModifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (TrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (TrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (TrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (TrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (TrailModifier * __this));
}
