#include <interception_macros.h>

namespace app::methods::Moon::Wwise::SoundHost {
IL2CPP_REGISTER_METHOD(0x0270B840, bool, IsActiveVersion, (SoundHost * __this, int32_t version));
IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsActive, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsActive, (SoundHost * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_Version, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Version, (SoundHost * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0270B850, ISoundListener *, get_AsListener, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270B8D0, Vector3, get_Position, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270B960, Quaternion, get_Rotation, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, uint64_t, get_GameObject, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, uint64_t, get_Id, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Id, (SoundHost * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0270B9F0, void, OnEnable, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270BAC0, void, OnDisable, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270BAE0, void, Activate, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270C050, void, OnAuxCountChanged, (SoundHost * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047666F8, SoundHost_OnAuxCountChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0270C110, void, Register, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270C1C0, void, Unregister, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270C270, void, RemovePlayingIDToStopOnDisable, (SoundHost * __this, AkCallbackInfo * info));
IL2CPP_REGISTER_METHOD(0x0270C3A0, void, AddPlayingIDToStopOnDisable, (SoundHost * __this, uint32_t playingID));
IL2CPP_REGISTER_METHOD(0x0270C4A0, void, Deactivate, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270C680, void, OnDrawGizmos, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x0270C880, void, OnUpdate, (SoundHost * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0270C9C0, void, SetRTPC, (SoundHost * __this, RTPC * rtpc, float value));
IL2CPP_REGISTER_METHOD(0x0270CA00, void, SetGlobalRTPC, (RTPC * rtpc, float value));
IL2CPP_REGISTER_METHOD(0x0270CA10, void, SetSwitch, (SoundHost * __this, Switch_1 * wSwitch));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (SoundHost * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (SoundHost * __this));
}
