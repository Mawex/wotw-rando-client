using namespace app;

namespace app::methods::UnityEngine::Bindings::NativeMethodAttribute {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NativeMethodAttribute * __this));
IL2CPP_REGISTER_METHOD(0x031BB340, void, __ctor, (NativeMethodAttribute * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04769900, NativeMethodAttribute__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB460, void, __ctor, (NativeMethodAttribute * __this, String * name, bool isFreeFunction));
IL2CPP_REGISTER_METHOD(0x031BB490, void, __ctor, (NativeMethodAttribute * __this, String * name, bool isFreeFunction, bool isThreadSafe));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (NativeMethodAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsThreadSafe, (NativeMethodAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00533170, void, set_IsFreeFunction, (NativeMethodAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_ThrowsException, (NativeMethodAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031BB4D0, void, set_HasExplicitThis, (NativeMethodAttribute * __this, bool value));
}
