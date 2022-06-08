#include <interception_macros.h>

namespace app::methods::AkPlatformInitSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkPlatformInitSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01888810, void *, getCPtr, (AkPlatformInitSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkPlatformInitSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x018888A0, void, Finalize, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01888920, void, Dispose, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01888B30, void, set_threadLEngine, (AkPlatformInitSettings * __this, AkThreadProperties * value));
IL2CPP_REGISTER_METHOD(0x01888C70, AkThreadProperties *, get_threadLEngine, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01888E80, void, set_threadOutputMgr, (AkPlatformInitSettings * __this, AkThreadProperties * value));
IL2CPP_REGISTER_METHOD(0x01888FC0, AkThreadProperties *, get_threadOutputMgr, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x018891D0, void, set_threadBankManager, (AkPlatformInitSettings * __this, AkThreadProperties * value));
IL2CPP_REGISTER_METHOD(0x01889310, AkThreadProperties *, get_threadBankManager, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01889520, void, set_threadMonitor, (AkPlatformInitSettings * __this, AkThreadProperties * value));
IL2CPP_REGISTER_METHOD(0x01889660, AkThreadProperties *, get_threadMonitor, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01889870, void, set_uLEngineDefaultPoolSize, (AkPlatformInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018899A0, uint32_t, get_uLEngineDefaultPoolSize, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01889AC0, void, set_fLEngineDefaultPoolRatioThreshold, (AkPlatformInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x01889BF0, float, get_fLEngineDefaultPoolRatioThreshold, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01889D10, void, set_uNumRefillsInVoice, (AkPlatformInitSettings * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01889E40, uint16_t, get_uNumRefillsInVoice, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x01889F60, void, set_uSampleRate, (AkPlatformInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0188A090, uint32_t, get_uSampleRate, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x0188A1B0, void, set_eAudioAPI, (AkPlatformInitSettings * __this, AkAudioAPI__Enum value));
IL2CPP_REGISTER_METHOD(0x0188A2E0, AkAudioAPI__Enum, get_eAudioAPI, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x0188A400, void, set_bGlobalFocus, (AkPlatformInitSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0188A530, bool, get_bGlobalFocus, (AkPlatformInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x0188A660, void, __ctor, (AkPlatformInitSettings * __this));
}
