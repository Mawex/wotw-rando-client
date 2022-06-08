using namespace app;

namespace app::methods::DeathsPlugin {
IL2CPP_REGISTER_METHOD(0x00DE0FB0, void, Awake, (DeathsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (DeathsPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (DeathsPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (DeathsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00DE1140, void, OnPlayerDeath, (DeathsPlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x04773870, DeathsPlugin_OnPlayerDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DE1320, List_1_UnityEngine_Vector3_ *, ExtractDataFromRecorder, (RecorderData * recorderData));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DeathsPlugin * __this));
}
