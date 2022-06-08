using namespace app;

namespace app::methods::LocationChanger {
IL2CPP_REGISTER_METHOD(0x00FC1570, void, Start, (LocationChanger * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_SceneName, (LocationChanger * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_TargetName, (LocationChanger * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Transform *, get_TargetTransform, (LocationChanger * __this));
IL2CPP_REGISTER_METHOD(0x00FC16E0, Vector3, TargetOffset, (LocationChanger * __this, Transform * other));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_UseFader, (LocationChanger * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LocationChanger * __this));
}
