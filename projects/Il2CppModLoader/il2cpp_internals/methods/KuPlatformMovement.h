using namespace app;

namespace app::methods::KuPlatformMovement {
IL2CPP_REGISTER_METHOD(0x005C7620, Vector3, get_Position, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01245400, void, set_Position, (KuPlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01245540, void, OnAwake, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x012455F0, void, OnDestroy, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x012456A0, void, Apply, (KuPlatformMovement * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x012457A0, bool, get_ApplyOnEditor, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00956AE0, IUberState__Array *, get_AffectingUberStates, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7C20, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KuPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x012457B0, void, __ctor, (KuPlatformMovement * __this));
}
