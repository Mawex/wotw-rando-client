using namespace app;

namespace app::methods::DesiredUberStateInt {
IL2CPP_REGISTER_METHOD(0x01B59E10, void, WriteDesiredStates, (DesiredUberStateInt * __this));
IL2CPP_REGISTER_METHODINFO(0x04732C00, DesiredUberStateInt_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B59F30, void, Revert, (DesiredUberStateInt * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IUberState *, get_UberState, (DesiredUberStateInt * __this));
IL2CPP_REGISTER_METHOD(0x01B59F80, bool, IsFulfilled, (DesiredUberStateInt * __this));
IL2CPP_REGISTER_METHOD(0x01B5A060, String *, get_NiceName, (DesiredUberStateInt * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DesiredUberStateInt * __this));
}
