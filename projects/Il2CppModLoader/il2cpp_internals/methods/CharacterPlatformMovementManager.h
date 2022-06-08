using namespace app;

namespace app::methods::CharacterPlatformMovementManager {
IL2CPP_REGISTER_METHOD(0x01312690, CharacterPlatformMovementManager *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (CharacterPlatformMovementManager * __this));
IL2CPP_REGISTER_METHOD(0x013129B0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01312A50, void, Register, (CharacterPlatformMovementManager * __this, CharacterPlatformMovement * pm));
IL2CPP_REGISTER_METHOD(0x01312BE0, void, Unregister, (CharacterPlatformMovementManager * __this, CharacterPlatformMovement * pm));
IL2CPP_REGISTER_METHOD(0x01312D20, void, OnUpdate, (CharacterPlatformMovementManager * __this, float delta));
IL2CPP_REGISTER_METHOD(0x013134A0, void, OnLateFrameUpdate, (CharacterPlatformMovementManager * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01313670, void, __ctor, (CharacterPlatformMovementManager * __this));
IL2CPP_REGISTER_METHOD(0x01313920, void, __cctor, (MethodInfo * method));
}
