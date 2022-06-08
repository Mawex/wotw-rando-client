using namespace app;

namespace app::methods::MoveCameraHereAction {
IL2CPP_REGISTER_METHOD(0x00867DF0, void, Perform, (MoveCameraHereAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00868200, void, Stop, (MoveCameraHereAction * __this));
IL2CPP_REGISTER_METHODINFO(0x0474BED0, MoveCameraHereAction_Stop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00868250, bool, get_IsPerforming, (MoveCameraHereAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04790668, MoveCameraHereAction_get_IsPerforming__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_Duration, (MoveCameraHereAction * __this));
IL2CPP_REGISTER_METHOD(0x008682B0, void, set_Duration, (MoveCameraHereAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x008682C0, void, __ctor, (MoveCameraHereAction * __this));
}
