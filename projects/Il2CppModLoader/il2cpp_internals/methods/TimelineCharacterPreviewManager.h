#include <interception_macros.h>

namespace app::methods::TimelineCharacterPreviewManager {
IL2CPP_REGISTER_METHOD(0x010F5790, bool, HasInstance, (app::CinematicCharacterAnimator_Character__Enum character));
IL2CPP_REGISTER_METHOD(0x010F58A0, GameObject *, GetPreviewCharacter, (app::CinematicCharacterAnimator_Character__Enum character, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5930, MoonAnimator *, GetPreviewCharacterAnimator, (app::CinematicCharacterAnimator_Character__Enum character));
IL2CPP_REGISTER_METHOD(0x00420EE0, TimelineCharacterPreviewManager_CharacterPreviewInstance *, GetPreviewCharacterInternal, (app::CinematicCharacterAnimator_Character__Enum character, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F59C0, SeinController3D *, GetPreviewSeinController3D, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, GameObject *, CreatePlaybackInstance, (app::GameObject * prefab, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5A60, GhostPlayer *, GetOrCreateGhostInstance, (app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5AD0, void, AppendScenarioSceneStart, ());
IL2CPP_REGISTER_METHOD(0x010F5DC0, void, AppendScenarioSceneEnd, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TimelineCharacterPreviewManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x010F6080, void, __cctor, ());
}
