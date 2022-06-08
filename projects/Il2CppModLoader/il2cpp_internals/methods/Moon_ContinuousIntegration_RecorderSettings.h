using namespace app;

namespace app::methods::Moon::ContinuousIntegration::RecorderSettings {
IL2CPP_REGISTER_METHOD(0x031C46C0, RecorderSettings *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C4740, void, set_Instance, (RecorderSettings * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ShotName, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ShotName, (RecorderSettings * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_ShowInputScreen, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_ShowInputScreen, (RecorderSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00533160, bool, get_DumpFrames, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00533170, void, set_DumpFrames, (RecorderSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_SpawnEnemies, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_SpawnEnemies, (RecorderSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031C47D0, bool, get_EnableMotionBlur, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x031BB4D0, void, set_EnableMotionBlur, (RecorderSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Enable120FPS, (RecorderSettings * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Enable120FPS, (RecorderSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031C47E0, RecorderSettings *, Create, (IRecorderShot * shot, bool showInputScreen, bool dumpFrames, bool spawnEnemies, float playbackScale, bool scaleEntireShot, bool enableMotionBlur, bool enable120FPS));
IL2CPP_REGISTER_METHOD(0x031C4A70, void, Reset, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C4A80, void, __ctor, (RecorderSettings * __this));
}
