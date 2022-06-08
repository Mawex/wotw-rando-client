using namespace app;

namespace app::methods::SceneWarningManager {
IL2CPP_REGISTER_METHOD(0x03113CC0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Register, (ISceneWarningSource * source));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Unregister, (ISceneWarningSource * source));
IL2CPP_REGISTER_METHOD(0x03113DA0, void, RemoveNulls, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SceneWarningManager * __this));
IL2CPP_REGISTER_METHOD(0x03113F20, void, __cctor, (MethodInfo * method));
}
