using namespace app;

namespace app::methods::ReadyForAnimationTrigger {
IL2CPP_REGISTER_METHOD(0x007340E0, void, Awake, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00734290, void, OnDestroy, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00734430, void, OnDisable, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x007346E0, void, OnRestoreCheckpoint, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D408, ReadyForAnimationTrigger_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007346F0, CharacterLeftRightMovement *, get_LeftRightMovement, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00734820, bool, get_IsOri, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x007348D0, Vector3, GetDestination, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00734CD0, void, Init, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00734FF0, void, FixedUpdate, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00735AD0, bool, Validate, (ReadyForAnimationTrigger * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00735B10, void, __ctor, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00735B20, void, _FixedUpdate_b__25_0, (ReadyForAnimationTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x0471BAC8, ReadyForAnimationTrigger__FixedUpdate_b__25_0__MethodInfo);
}
