using namespace app;

namespace app::methods::SeinPinned {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B8250, void, OnSetReferenceToSein, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B8330, void, OnEnter, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B87A0, void, OnExit, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B88C0, void, OnDestroy, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B88D0, void, Serialize, (SeinPinned * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x008B88E0, void, UpdateCharacterState, (SeinPinned * __this));
IL2CPP_REGISTER_METHOD(0x008B8F30, bool, ShouldPlayPinnedAnimation, (SeinPinned * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FF90, SeinPinned_ShouldPlayPinnedAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B8F50, bool, ShouldPlayRavageAnimation, (SeinPinned * __this));
IL2CPP_REGISTER_METHODINFO(0x047879C8, SeinPinned_ShouldPlayRavageAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinPinned * __this));
}
