using namespace app;

namespace app::methods::SoundSource {
IL2CPP_REGISTER_METHOD(0x00EED000, bool, get_IsPlaying, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IsPlaying, (SoundSource * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EED020, void, OnPoolSpawned, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED030, void, OnPoolDespawned, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED060, void, EnsureSoundHost, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED1A0, void, OnEnable, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED250, void, Awake, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED2F0, void, OnDestroy, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED3B0, void, OnEnd, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED4B0, void, Start, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED570, void, OnDisable, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED630, void, Play, (SoundSource * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00EED8F0, void, Play, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED9E0, void, Pause, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EEDA80, void, OnUpdate, (SoundSource * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00EEDB40, void, Stop, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EEDB40, void, StopAndFadeOut, (SoundSource * __this, float duration));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_IsSuspended, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EEDBC0, void, set_IsSuspended, (SoundSource * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, SuspendableMask__Enum, get_Mask, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EEDBD0, void, set_Mask, (SoundSource * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00EEDC80, void, AddRtpc, (SoundSource * __this, RTPC * continousSoundRtpc, Func_1_Single_ * continousSoundRtpcGetValue));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x004FA630, void, __ctor, (SoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00EED3B0, void, _Play_b__18_0, (SoundSource * __this, Object * cookie, AkCallbackType__Enum type, AkCallbackInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04792590, SoundSource__Play_b__18_0__MethodInfo);
}
