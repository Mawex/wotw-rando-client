#include <interception_macros.h>

namespace app::methods::TimelineCharacterPreviewManager {
IL2CPP_REGISTER_METHOD(0x010F5790, bool, HasInstance, (CinematicCharacterAnimator_Character__Enum character));
IL2CPP_REGISTER_METHOD(0x010F58A0, GameObject *, GetPreviewCharacter, (CinematicCharacterAnimator_Character__Enum character, Vector3 position, Quaternion rotation, Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5930, MoonAnimator *, GetPreviewCharacterAnimator, (CinematicCharacterAnimator_Character__Enum character));
IL2CPP_REGISTER_METHOD(0x00420EE0, TimelineCharacterPreviewManager_CharacterPreviewInstance *, GetPreviewCharacterInternal, (CinematicCharacterAnimator_Character__Enum character, Vector3 position, Quaternion rotation, Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F59C0, SeinController3D *, GetPreviewSeinController3D, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, GameObject *, CreatePlaybackInstance, (GameObject * prefab, Vector3 position, Quaternion rotation, Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5A60, GhostPlayer *, GetOrCreateGhostInstance, (Transform * parent));
IL2CPP_REGISTER_METHOD(0x010F5AD0, void, AppendScenarioSceneStart, ());
IL2CPP_REGISTER_METHOD(0x010F5DC0, void, AppendScenarioSceneEnd, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimelineCharacterPreviewManager * __this));
IL2CPP_REGISTER_METHOD(0x010F6080, void, __cctor, ());
}
