using namespace app;

namespace app::methods::VisibleOnWorldMap {
IL2CPP_REGISTER_METHOD(0x008C1CB0, void, AlwaysAddToAll, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, ShouldRevealWhenOnScreen, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, GetIsSecret, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, ConditionUberState *, get_VisibilityCondition, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x008C1CC0, bool, get_MeetsRevealCondition, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x008C1DA0, bool, get_IsInCameraBoundingBox, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x008C1FD0, SerializedBooleanUberState *, get_CollectedState, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x008C2440, void, OnUpdate, (VisibleOnWorldMap * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (VisibleOnWorldMap * __this));
IL2CPP_REGISTER_METHOD(0x008C25F0, void, __ctor, (VisibleOnWorldMap * __this));
}
