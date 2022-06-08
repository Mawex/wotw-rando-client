#include <interception_macros.h>

namespace app::methods::UnityEngine::Debug {
IL2CPP_REGISTER_METHOD(0x0242BD40, ILogger *, get_unityLogger, ());
IL2CPP_REGISTER_METHOD(0x0242BDE0, void, DrawLine, (Vector3 start, Vector3 end, Color color, float duration));
IL2CPP_REGISTER_METHOD(0x0242BFB0, void, DrawLine, (Vector3 start, Vector3 end, Color color));
IL2CPP_REGISTER_METHOD(0x0242C170, void, DrawLine, (Vector3 start, Vector3 end));
IL2CPP_REGISTER_METHOD(0x0242C340, void, DrawLine, (Vector3 start, Vector3 end, Color color, float duration, bool depthTest));
IL2CPP_REGISTER_METHOD(0x0242C450, void, DrawRay, (Vector3 start, Vector3 dir, Color color, float duration));
IL2CPP_REGISTER_METHOD(0x0242C560, void, DrawRay, (Vector3 start, Vector3 dir, Color color));
IL2CPP_REGISTER_METHOD(0x0242C660, void, DrawRay, (Vector3 start, Vector3 dir, Color color, float duration, bool depthTest));
IL2CPP_REGISTER_METHOD(0x0242C890, void, Break, ());
IL2CPP_REGISTER_METHOD(0x0242C8E0, void, Log, (Object * message));
IL2CPP_REGISTER_METHOD(0x0242C9A0, void, Log, (Object * message, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x0242CA70, void, LogFormat, (String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242CB40, void, LogError, (Object * message));
IL2CPP_REGISTER_METHOD(0x0242CC00, void, LogError, (Object * message, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x0242CCD0, void, LogErrorFormat, (String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242CDA0, void, LogErrorFormat, (Object_1 * context, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242CE80, void, ClearDeveloperConsole, ());
IL2CPP_REGISTER_METHOD(0x0242CED0, void, set_developerConsoleVisible, (bool value));
IL2CPP_REGISTER_METHOD(0x0242CF20, void, LogException, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x0242CFE0, void, LogException, (Exception * exception, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x0242D0A0, void, LogWarning, (Object * message));
IL2CPP_REGISTER_METHOD(0x0242D160, void, LogWarning, (Object * message, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x0242D230, void, LogWarningFormat, (String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242D300, void, LogWarningFormat, (Object_1 * context, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0242D3E0, void, LogAssertion, (Object * message));
IL2CPP_REGISTER_METHOD(0x0242D4A0, bool, get_isDebugBuild, ());
IL2CPP_REGISTER_METHOD(0x0242D4F0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0242D700, void, DrawLine_Injected, (Vector3 * start, Vector3 * end, Color * color, float duration, bool depthTest));
}
