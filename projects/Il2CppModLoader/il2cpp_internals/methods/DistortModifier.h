#include <interception_macros.h>

namespace app::methods::DistortModifier {
IL2CPP_REGISTER_METHOD(0x00B99D90, IEnumerable_1_System_String_ *, GetKeywordsForShader, (DistortModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B99F20, void, ApplyMultipliers, (DistortModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00B99FF0, void, SetProperties, (DistortModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9A120, float, GetQuadExpandSize, (DistortModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (DistortModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Randomize, (DistortModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9A210, void, __ctor, (DistortModifier * __this));
}
