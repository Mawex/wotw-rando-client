#include <interception_macros.h>

namespace app::methods::UnityEngine::JsonUtility {
IL2CPP_REGISTER_METHOD(0x031C2D00, String *, ToJsonInternal, (Object * obj, bool prettyPrint));
IL2CPP_REGISTER_METHOD(0x031C2D60, Object *, FromJsonInternal, (String * json, Object * objectToOverwrite, Type * type));
IL2CPP_REGISTER_METHOD(0x00C4CBF0, String *, ToJson, (Object * obj));
IL2CPP_REGISTER_METHOD(0x031C2DD0, String *, ToJson, (Object * obj, bool prettyPrint));
IL2CPP_REGISTER_METHODINFO(0x047716E8, JsonUtility_ToJson_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031C2FA0, Object *, FromJson, (String * json, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0473F880, JsonUtility_FromJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031C3150, void, FromJsonOverwrite, (String * json, Object * objectToOverwrite));
IL2CPP_REGISTER_METHODINFO(0x04765AB8, JsonUtility_FromJsonOverwrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, Object *, FromJson, (String * json));
IL2CPP_REGISTER_METHOD(0x0157CEF0, AkWwiseInitializationSettings_WwiseOverrideSettings *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04770880, JsonUtility_FromJson_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04764800, JsonUtility_FromJson_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, GameParameters *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04714330, JsonUtility_FromJson_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, ReplayValidatorData *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x0475FE58, JsonUtility_FromJson_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, NameOptions_NameDatabase *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x0476C020, JsonUtility_FromJson_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, RuntimeBuildInformation *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x0475A510, JsonUtility_FromJson_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, XAchievements *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04745710, JsonUtility_FromJson_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, UberPoolPerfTest_Settings *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x0473C618, JsonUtility_FromJson_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157CEF0, SwitchController_VibrationData *, FromJson, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04791B88, JsonUtility_FromJson_10__MethodInfo);
}
