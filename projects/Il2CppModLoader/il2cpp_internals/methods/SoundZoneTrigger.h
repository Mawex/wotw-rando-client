#include <interception_macros.h>

namespace app::methods::SoundZoneTrigger {
IL2CPP_REGISTER_METHOD(0x00EF3770, String *, get_GizmoText, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF3800, bool, get_HasTriggered, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF38E0, void, set_HasTriggered, (SoundZoneTrigger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EF39C0, SoundHost *, get_EffectiveSoundHost, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF3AE0, bool, get_WithinBounds, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF3D60, void, Awake, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF43C0, void, OnDestroy, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF4560, void, Update, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00A2AC20, void, OnRestoreCheckpoint, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x04796710, SoundZoneTrigger_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EF4570, void, OnListenerEnteredZone, (SoundZoneTrigger * __this, ISoundListener * listener));
IL2CPP_REGISTER_METHOD(0x00EF4590, void, OnListenerExitsZone, (SoundZoneTrigger * __this, ISoundListener * listener, bool forceReset));
IL2CPP_REGISTER_METHOD(0x00EF45D0, void, OnListenerUpdateZone, (SoundZoneTrigger * __this, ISoundListener * listener, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x00EF45F0, void, ResetAdditionalTracking, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF4600, void, Triggered, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00EF49E0, void, CheckCharacterPosition, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (SoundZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SoundZoneTrigger * __this));
}
