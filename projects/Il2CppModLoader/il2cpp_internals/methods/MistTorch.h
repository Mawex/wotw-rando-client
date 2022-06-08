#include <interception_macros.h>

namespace app::methods::MistTorch {
IL2CPP_REGISTER_METHOD(0x01327220, void, Awake, (MistTorch * __this));
IL2CPP_REGISTER_METHOD(0x013273E0, void, OnDestroy, (MistTorch * __this));
IL2CPP_REGISTER_METHOD(0x01327590, void, OnGameReset, (MistTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D780, MistTorch_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, OnPressed, (MistTorch * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x00650B90, void, OnReleased, (MistTorch * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MistTorch * __this));
}
