#include <interception_macros.h>

namespace app::methods::GizmoHelper {
IL2CPP_REGISTER_METHOD(0x02553910, void, DrawTextFilled, (Vector3 position, Vector3 scale, String * title, Color fillColor, Color outlineColor));
IL2CPP_REGISTER_METHOD(0x02553A40, void, DrawTextFilledNoSelectableBox, (Vector3 position, Vector3 scale, String * title, Color fillColor, Color outlineColor));
IL2CPP_REGISTER_METHOD(0x02553B40, void, DrawTextFilled, (Transform * transform, String * title, Color fillColor, Color outlineColor, bool bound));
IL2CPP_REGISTER_METHOD(0x02553E20, void, DrawTextFilled, (Vector3 position, Vector3 scale, String * title));
IL2CPP_REGISTER_METHOD(0x02553FD0, void, DrawTextFilled, (Transform * transform, String * title, bool bounds));
IL2CPP_REGISTER_METHOD(0x025540C0, void, DrawTextNoFill, (Vector3 position, Vector3 scale, String * title));
IL2CPP_REGISTER_METHOD(0x02554270, void, DrawTextNoFill, (Transform * transform, String * title, bool bounds));
IL2CPP_REGISTER_METHOD(0x02554360, void, DrawSelectedTextFilled, (Transform * transform, String * title, Color fillColor, Color outlineColor, bool bound));
IL2CPP_REGISTER_METHOD(0x025545C0, void, DrawSelectedTextFilled, (Transform * transform, String * title, Color fillColor, Color outlineColor));
IL2CPP_REGISTER_METHOD(0x025546B0, void, DrawSelectedTextFilled, (Transform * transform, String * title, bool bounds));
IL2CPP_REGISTER_METHOD(0x025547A0, void, SelectableBox, (Vector3 position, Vector3 size));
IL2CPP_REGISTER_METHOD(0x02554970, void, DrawArrow, (Vector3 from, Vector3 to, Vector3 forward, Color color, float tipSize));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawRectangle, (Vector3 position, Vector3 size, Color fill, Color outline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawWireCircle, (Vector3 position, float radius, Color outline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawWireArc, (Vector3 position, float radius, Vector3 from, float angle, Color outline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawSolidArc, (Vector3 position, float radius, Vector3 from, float angle, Color color));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawFilledCircle, (Vector3 position, float radius, Color fill, Color outline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawFilledCircleWithCenteredText, (String * text, Vector3 position, float radius, Color fill, Color outline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCircleWithSideText, (String * text, Vector3 position, float radius, Color circleOutline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawFilledSphere, (Vector3 position, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x02554FD0, void, DrawOutline, (Vector3 position, Vector3 size, Color outline));
IL2CPP_REGISTER_METHOD(0x00420EE0, GUIStyle *, get_CenteredWhiteBoldText, ());
IL2CPP_REGISTER_METHOD(0x02555060, void, DrawCenteredText, (String * text, Vector3 position, GUIStyle * style, bool sideways));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCenteredText, (GUIContent * content, Vector3 position, GUIStyle * style, bool sideways));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawText, (GUIContent * content, Vector3 position, GUIStyle * style, bool sideways));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawLine, (Vector3 start, Vector3 end, Color fill));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCube, (Vector3 start, Vector3 end, Color fill));
IL2CPP_REGISTER_METHOD(0x025551D0, bool, ShouldTextBeSideways, (Vector3 size));
IL2CPP_REGISTER_METHOD(0x025552A0, bool, IsOnCamera, (Vector3 position, Vector3 scale));
IL2CPP_REGISTER_METHOD(0x02555B50, Vector2, GetCameraDistance, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x02556050, void, DrawStartEndGizmo, (Vector3 startPosition, Vector3 endPosition));
IL2CPP_REGISTER_METHOD(0x02556330, Vector3, ScreenToWorld, (Vector2 screen, Transform * transform));
IL2CPP_REGISTER_METHOD(0x025563E0, Vector2, WorldToScreen, (Vector3 world));
IL2CPP_REGISTER_METHOD(0x025564C0, Bounds, BoundsFromTransform, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x025569E0, Bounds, BoundsFromPoints, (Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4));
IL2CPP_REGISTER_METHOD(0x02556BE0, void, __cctor, ());
}
