#include <interception_macros.h>

namespace app::methods::UberShaderVector {
IL2CPP_REGISTER_METHOD(0x01289810, void, __ctor, (UberShaderVector * __this, float x, float y, float z, float w));
IL2CPP_REGISTER_METHOD(0x01289910, void, __ctor, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x012899C0, void, BindProperties, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289ED0, Vector4, get_VectorValue, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289EE0, void, set_VectorValue, (UberShaderVector * __this, Vector4 value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_X, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289F00, void, set_X, (UberShaderVector * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Y, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289F20, void, set_Y, (UberShaderVector * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_Z, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289F40, void, set_Z, (UberShaderVector * __this, float value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_W, (UberShaderVector * __this));
IL2CPP_REGISTER_METHOD(0x01289F60, void, set_W, (UberShaderVector * __this, float value));
IL2CPP_REGISTER_METHOD(0x01289F80, float, get_Item, (UberShaderVector * __this, int32_t key));
IL2CPP_REGISTER_METHOD(0x01289FB0, void, set_Item, (UberShaderVector * __this, int32_t key, float value));
IL2CPP_REGISTER_METHOD(0x01289FE0, void, set_Scale, (UberShaderVector * __this, float value));
}
