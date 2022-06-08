using namespace app;

namespace app::methods::AkSpatialAudioInitSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkSpatialAudioInitSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026FAE20, void *, getCPtr, (AkSpatialAudioInitSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkSpatialAudioInitSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026FAEB0, void, Finalize, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FAF30, void, Dispose, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FB140, void, __ctor, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FB260, void, set_uPoolID, (AkSpatialAudioInitSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x026FB390, int32_t, get_uPoolID, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FB4B0, void, set_uPoolSize, (AkSpatialAudioInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FB5E0, uint32_t, get_uPoolSize, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FB700, void, set_uMaxSoundPropagationDepth, (AkSpatialAudioInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FB830, uint32_t, get_uMaxSoundPropagationDepth, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FB950, void, set_uDiffractionFlags, (AkSpatialAudioInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FBA80, uint32_t, get_uDiffractionFlags, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FBBA0, void, set_fDiffractionShadowAttenFactor, (AkSpatialAudioInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026FBCD0, float, get_fDiffractionShadowAttenFactor, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FBDF0, void, set_fDiffractionShadowDegrees, (AkSpatialAudioInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026FBF20, float, get_fDiffractionShadowDegrees, (AkSpatialAudioInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FC040, void, set_fMovementThreshold, (AkSpatialAudioInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026FC170, float, get_fMovementThreshold, (AkSpatialAudioInitSettings * __this));
}
