#include <interception_macros.h>

namespace app::methods::AkInitSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkInitSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E84A0, void *, getCPtr, (AkInitSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkInitSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E8530, void, Finalize, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E85B0, void, Dispose, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E87C0, void, set_uMaxNumPaths, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E88F0, uint32_t, get_uMaxNumPaths, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E8A10, void, set_uDefaultPoolSize, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E8B40, uint32_t, get_uDefaultPoolSize, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E8C60, void, set_fDefaultPoolRatioThreshold, (AkInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E8D90, float, get_fDefaultPoolRatioThreshold, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E8EB0, void, set_uCommandQueueSize, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E8FE0, uint32_t, get_uCommandQueueSize, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9100, void, set_uPrepareEventMemoryPoolID, (AkInitSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x026E9230, int32_t, get_uPrepareEventMemoryPoolID, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9350, void, set_bEnableGameSyncPreparation, (AkInitSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026E9480, bool, get_bEnableGameSyncPreparation, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E95B0, void, set_uContinuousPlaybackLookAhead, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E96E0, uint32_t, get_uContinuousPlaybackLookAhead, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9800, void, set_uNumSamplesPerFrame, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E9930, uint32_t, get_uNumSamplesPerFrame, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9A50, void, set_uMonitorPoolSize, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E9B80, uint32_t, get_uMonitorPoolSize, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9CA0, void, set_uMonitorQueuePoolSize, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E9DD0, uint32_t, get_uMonitorQueuePoolSize, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E9EF0, void, set_settingsMainOutput, (AkInitSettings * __this, AkOutputSettings * value));
IL2CPP_REGISTER_METHOD(0x026EA030, AkOutputSettings *, get_settingsMainOutput, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EA240, void, set_uMaxHardwareTimeoutMs, (AkInitSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026EA370, uint32_t, get_uMaxHardwareTimeoutMs, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EA490, void, set_bUseSoundBankMgrThread, (AkInitSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026EA5C0, bool, get_bUseSoundBankMgrThread, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EA6F0, void, set_bUseLEngineThread, (AkInitSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026EA820, bool, get_bUseLEngineThread, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EA950, void, set_szPluginDLLPath, (AkInitSettings * __this, String * value));
IL2CPP_REGISTER_METHOD(0x026EAA90, String *, get_szPluginDLLPath, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EABE0, void, set_eFloorPlane, (AkInitSettings * __this, AkFloorPlane__Enum value));
IL2CPP_REGISTER_METHOD(0x026EAD10, AkFloorPlane__Enum, get_eFloorPlane, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EAE30, void, set_fDebugOutOfRangeLimit, (AkInitSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026EAF60, float, get_fDebugOutOfRangeLimit, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EB080, void, set_bDebugOutOfRangeCheckEnabled, (AkInitSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026EB1B0, bool, get_bDebugOutOfRangeCheckEnabled, (AkInitSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EB2E0, void, __ctor, (AkInitSettings * __this));
}
