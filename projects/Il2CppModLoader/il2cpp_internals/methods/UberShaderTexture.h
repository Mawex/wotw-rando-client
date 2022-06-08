using namespace app;

namespace app::methods::UberShaderTexture {
IL2CPP_REGISTER_METHOD(0x012881C0, void, Set, (UberShaderTexture * __this, String * bindName, UberShaderBlock * attachedBlock));
IL2CPP_REGISTER_METHOD(0x012882B0, void, SetWithUnboundVariant, (UberShaderTexture * __this, String * bindName, UberShaderBlock * attachedBlock));
IL2CPP_REGISTER_METHOD(0x01288370, void, BindProperties, (UberShaderTexture * __this));
IL2CPP_REGISTER_METHOD(0x012883D0, void, SetTextureVariant, (UberShaderTexture * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, Initialize, (UberShaderTexture * __this, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x01288410, bool, get_TextureSet, (UberShaderTexture * __this));
IL2CPP_REGISTER_METHOD(0x012884C0, void, SpeedupScroll, (UberShaderTexture * __this, float speed));
IL2CPP_REGISTER_METHOD(0x01288500, void, __ctor, (UberShaderTexture * __this));
}
