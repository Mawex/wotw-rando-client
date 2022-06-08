using namespace app;

namespace app::methods::Moon::Primitive {
IL2CPP_REGISTER_METHOD(0x00C3EAA0, Vector3, TransformPosition, (Vector3 position, PrimitiveSpace__Enum sourceSpace, PrimitiveSpace__Enum targetSpace, Transform * localToworld, Transform * root));
IL2CPP_REGISTER_METHOD(0x002FC6D0, PrimitiveSpace__Enum, get_Space, (Primitive * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetSpace, (Primitive * __this, PrimitiveSpace__Enum targetSpace, Transform * localToworld, Transform * root));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Primitive * __this));
}
