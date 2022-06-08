using namespace app;

namespace app::methods::UnityEngine::UI::ClipperRegistry {
IL2CPP_REGISTER_METHOD(0x01F2F2F0, void, __ctor, (ClipperRegistry * __this));
IL2CPP_REGISTER_METHOD(0x01F2F440, ClipperRegistry *, get_instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F2F6D0, void, Cull, (ClipperRegistry * __this));
IL2CPP_REGISTER_METHOD(0x01F2F890, void, Register, (IClipper * c));
IL2CPP_REGISTER_METHOD(0x01F2F940, void, Unregister, (IClipper * c));
}
