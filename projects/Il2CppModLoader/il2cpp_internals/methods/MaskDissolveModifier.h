using namespace app;

namespace app::methods::MaskDissolveModifier {
IL2CPP_REGISTER_METHOD(0x00A0FE00, IEnumerable_1_System_String_ *, GetKeywordsForShader, (MaskDissolveModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (MaskDissolveModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A0FF90, void, Randomize, (MaskDissolveModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A0FFC0, void, ApplyMultipliers, (MaskDissolveModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (MaskDissolveModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A10070, void, SetProperties, (MaskDissolveModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A10250, void, __ctor, (MaskDissolveModifier * __this));
}
