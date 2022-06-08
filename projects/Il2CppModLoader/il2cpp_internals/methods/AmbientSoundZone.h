using namespace app;

namespace app::methods::AmbientSoundZone {
IL2CPP_REGISTER_METHOD(0x004F8FB0, void, Awake, (AmbientSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x004F9140, void, Start, (AmbientSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x004F91E0, void, OnDestroy, (AmbientSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x004F9340, void, OnTriggerEnter, (AmbientSoundZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x004F9510, void, OnTriggerExit, (AmbientSoundZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x004F9770, void, OnSceneWasLoaded, (AmbientSoundZone * __this, Scene scene, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHODINFO(0x047192B0, AmbientSoundZone_OnSceneWasLoaded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F9930, void, Update, (AmbientSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x004F9B70, void, __ctor, (AmbientSoundZone * __this));
}
