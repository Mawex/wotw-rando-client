#include <interception_macros.h>

namespace app::methods::Moon::MoonDebug {
IL2CPP_REGISTER_METHOD(0x031A1030, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x031A11B0, void, __ctor, (MoonDebug * __this));
IL2CPP_REGISTER_METHOD(0x031A1370, void, OnApplicationQuit, ());
IL2CPP_REGISTER_METHOD(0x031A14B0, void, AddMessage, (MoonDebugMessageType__Enum typ, String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawArrow, (Vector3 from, Vector3 to, Color color, float tipSize));
IL2CPP_REGISTER_METHOD(0x031A1740, void, DrawArrow, (Vector3 from, Vector3 to, Vector3 forward, Color color, float tipSize));
IL2CPP_REGISTER_METHOD(0x031A1BE0, void, DrawCircle, (Vector3 position, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawRectangle, (Rect rect, Color color));
IL2CPP_REGISTER_METHOD(0x031A1EB0, void, DrawRectangle, (Vector3 position, float width, float height, Color color));
IL2CPP_REGISTER_METHOD(0x031A2130, void, DrawArc, (Vector3 position, float radius, float arcDegrees, Quaternion rotation, Color color, int32_t amountOfPoints));
IL2CPP_REGISTER_METHOD(0x031A24E0, Vector3, RotatePointAroundPivot, (Vector3 point, Vector3 pivot, Quaternion angles));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCapsule2D, (Vector3 baseCircleCenter, Vector3 topCircleCenter, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x031A2690, void, DrawCapsule2D, (Vector3 baseCircleCenter, Vector3 topCircleCenter, float baseRadius, float topRadius, Color color));
IL2CPP_REGISTER_METHOD(0x031A2EF0, void, Flush, ());
IL2CPP_REGISTER_METHOD(0x031A34E0, void, LogFormat, (String * message, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x031A35F0, void, Log, (Object * message, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A3700, void, LogInBuild, (Object * message, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A3790, void, LogWarningFormat, (Object_1 * obj, String * text, Object__Array * arg));
IL2CPP_REGISTER_METHOD(0x031A3960, void, LogWarning, (String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A3A70, void, LogError, (String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A3D30, void, LogError, (Exception * e, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A4010, void, LogErrorFormat, (String * error, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x031A40C0, void, LogErrorFormat, (Object_1 * context, String * error, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x031A4180, void, LogException, (Exception * exception, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LogAssertion, (String * text, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A46C0, String *, GetCurrentSceneName, ());
IL2CPP_REGISTER_METHOD(0x031A4740, String *, GetFullHierarchy, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x031A4900, String *, GetObjectPath, (Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x031A4B10, void, DrawLine, (Vector3 origin, Vector3 target, Color color));
IL2CPP_REGISTER_METHOD(0x031A4C00, void, DrawLine, (Vector3 origin, Vector3 target, Color color, float duration));
IL2CPP_REGISTER_METHOD(0x031A4D10, void, DrawRay, (Vector3 origin, Vector3 dir, Color color));
IL2CPP_REGISTER_METHOD(0x031A4E90, void, DrawLolipop, (Vector3 from, Vector3 to, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x031A5030, void, __cctor, ());
}
