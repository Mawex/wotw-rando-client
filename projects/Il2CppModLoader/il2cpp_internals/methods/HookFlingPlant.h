using namespace app;

namespace app::methods::HookFlingPlant {
IL2CPP_REGISTER_METHOD(0x00B5D6D0, SeinSpiritLeashAbility *, get_Leash, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, Transform *, get_HookTargetTransform, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00A79490, float, get_OriCloseEnoughDistance, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDecelerateOnApproach, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5D810, void, Awake, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5D8B0, void, OnSpiritLeashed, (HookFlingPlant * __this, Vector3 playerPosition, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x00B5DDA0, void, Start, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5DF40, void, OnDestroy, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHODINFO(0x047305D0, HookFlingPlant_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B5E270, void, FixedUpdate, (HookFlingPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5E430, void, __ctor, (HookFlingPlant * __this));
}
