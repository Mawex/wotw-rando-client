using namespace app;

namespace app::methods::UberShaderProperty {
IL2CPP_REGISTER_METHOD(0x002FB930, UberShaderBlock *, get_AttachedBlock, (UberShaderProperty * __this));
IL2CPP_REGISTER_METHOD(0x0191A3A0, bool, get_HasMaterial, (UberShaderProperty * __this));
IL2CPP_REGISTER_METHOD(0x0191A500, Material *, GetMaterial, (UberShaderProperty * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x0191A560, Material *, get_BindMaterial, (UberShaderProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_BindName, (UberShaderProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_BindName, (UberShaderProperty * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_BindID, (UberShaderProperty * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_BindID, (UberShaderProperty * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0191A6E0, void, Set, (UberShaderProperty * __this, String * bindName, UberShaderBlock * attachedBlock));
IL2CPP_REGISTER_METHOD(0x0191A7C0, void, BindTexture, (UberShaderProperty * __this, int32_t nameId, Texture * texture));
IL2CPP_REGISTER_METHOD(0x0191AA00, void, BindColor, (UberShaderProperty * __this, int32_t nameId, Color color));
IL2CPP_REGISTER_METHOD(0x0191AC00, void, BindVector, (UberShaderProperty * __this, int32_t nameId, Vector4 vector));
IL2CPP_REGISTER_METHOD(0x0191AE70, void, BindFloat, (UberShaderProperty * __this, int32_t nameId, float val));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UberShaderProperty * __this));
}
