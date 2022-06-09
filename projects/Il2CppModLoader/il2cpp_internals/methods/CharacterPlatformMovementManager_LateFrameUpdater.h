#include <interception_macros.h>

namespace app::methods::CharacterPlatformMovementManager_LateFrameUpdater {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::CharacterPlatformMovementManager_LateFrameUpdater * this_ptr, app::CharacterPlatformMovementManager * owner));
IL2CPP_REGISTER_METHOD(0x002FA280, CharacterPlatformMovementManager *, get_Owner, (app::CharacterPlatformMovementManager_LateFrameUpdater * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Owner, (app::CharacterPlatformMovementManager_LateFrameUpdater * this_ptr, app::CharacterPlatformMovementManager * value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (app::CharacterPlatformMovementManager_LateFrameUpdater * this_ptr));
IL2CPP_REGISTER_METHOD(0x013139A0, void, OnUpdate, (app::CharacterPlatformMovementManager_LateFrameUpdater * this_ptr, float delta));
}
