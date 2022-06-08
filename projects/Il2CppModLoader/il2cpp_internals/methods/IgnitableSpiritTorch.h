#include <interception_macros.h>

namespace app::methods::IgnitableSpiritTorch {
IL2CPP_REGISTER_METHOD(0x00625800, void, add_OnLightTorchWithGrenadeEvent, (Action * value));
IL2CPP_REGISTER_METHOD(0x00625940, void, remove_OnLightTorchWithGrenadeEvent, (Action * value));
IL2CPP_REGISTER_METHOD(0x00625A80, void, Awake, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x00625BA0, void, UpdateLightSettings, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x00625C80, void, OnDestroy, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x00625D40, IgnitableSpiritTorch *, IgniteAnyTorchesNearPosition, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00625FB0, void, Light, (IgnitableSpiritTorch * __this, bool byGrenade));
IL2CPP_REGISTER_METHOD(0x006260E0, Vector3, get_Position, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x00626170, void, Serialize, (IgnitableSpiritTorch * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006261C0, void, FixedUpdate, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x006263E0, void, __ctor, (IgnitableSpiritTorch * __this));
IL2CPP_REGISTER_METHOD(0x00626400, void, __cctor, ());
}
