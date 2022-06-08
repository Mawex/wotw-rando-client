#include <interception_macros.h>

namespace app::methods::InstantiateDebug::InstantiateDebugUtility {
IL2CPP_REGISTER_METHOD(0x0062D3F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0062D850, InstantiateDebugIgnore *, get_ObjectsToIgnore, ());
IL2CPP_REGISTER_METHOD(0x0062D9A0, void, Init, (List_1_UberPoolPrefabSetting_ * settings));
IL2CPP_REGISTER_METHOD(0x0062DCB0, void, Report, (Object_1 * original));
IL2CPP_REGISTER_METHOD(0x0062DE30, void, Report, (Object_1 * original, InstantiateDebugUtility_InstantiationType__Enum instantiationType));
IL2CPP_REGISTER_METHOD(0x0062E0A0, void, ReportUnpooled, (Object_1 * original));
IL2CPP_REGISTER_METHOD(0x0062E140, void, ReportInsufficient, (GameObject * original));
IL2CPP_REGISTER_METHOD(0x0062E1E0, void, DumpReports, (bool onExit));
IL2CPP_REGISTER_METHOD(0x0062E4D0, void, DumpMetricsReport, ());
IL2CPP_REGISTER_METHOD(0x0062ECC0, void, DumpOverTimeReport, ());
IL2CPP_REGISTER_METHOD(0x0062F3A0, void, AddReport, (InstantiateDebugUtility_InstanceInfo info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InstantiateDebugUtility * __this));
IL2CPP_REGISTER_METHOD(0x0062F470, void, __cctor, ());
}
