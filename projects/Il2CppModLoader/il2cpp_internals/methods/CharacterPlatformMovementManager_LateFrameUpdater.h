using namespace app;

namespace app::methods::CharacterPlatformMovementManager_LateFrameUpdater {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CharacterPlatformMovementManager_LateFrameUpdater * __this, CharacterPlatformMovementManager * owner));
IL2CPP_REGISTER_METHOD(0x002FA280, CharacterPlatformMovementManager *, get_Owner, (CharacterPlatformMovementManager_LateFrameUpdater * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Owner, (CharacterPlatformMovementManager_LateFrameUpdater * __this, CharacterPlatformMovementManager * value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (CharacterPlatformMovementManager_LateFrameUpdater * __this));
IL2CPP_REGISTER_METHOD(0x013139A0, void, OnUpdate, (CharacterPlatformMovementManager_LateFrameUpdater * __this, float delta));
}
