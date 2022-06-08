#include <interception_macros.h>

namespace app::methods::TurbulenceScaleModifier {
IL2CPP_REGISTER_METHOD(0x00B14990, void, ApplyMultipliers, (TurbulenceScaleModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00B19610, IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (TurbulenceScaleModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B19790, IEnumerable_1_System_String_ *, GetKeywordsForShader, (TurbulenceScaleModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B19920, void, Randomize, (TurbulenceScaleModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (TurbulenceScaleModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B19A60, void, SetProperties, (TurbulenceScaleModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B19BF0, void, __ctor, (TurbulenceScaleModifier * __this));
}
