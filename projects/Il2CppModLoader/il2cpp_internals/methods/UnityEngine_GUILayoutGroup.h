using namespace app;

namespace app::methods::UnityEngine::GUILayoutGroup {
IL2CPP_REGISTER_METHOD(0x029E8300, void, __ctor, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E8500, int32_t, get_marginLeft, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E8510, int32_t, get_marginRight, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5350, int32_t, get_marginTop, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5400, int32_t, get_marginBottom, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E8520, void, ApplyOptions, (GUILayoutGroup * __this, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029E86A0, void, ApplyStyleSettings, (GUILayoutGroup * __this, GUIStyle * style));
IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, ResetCursor, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E8980, GUILayoutEntry *, GetNext, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x0472EFB8, GUILayoutGroup_GetNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029E8C90, Rect, GetLast, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E9100, void, Add, (GUILayoutGroup * __this, GUILayoutEntry * e));
IL2CPP_REGISTER_METHOD(0x029E91A0, void, CalcWidth, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029E9B40, void, SetHorizontal, (GUILayoutGroup * __this, float x, float width));
IL2CPP_REGISTER_METHOD(0x029EA4A0, void, CalcHeight, (GUILayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x029EAC90, void, SetVertical, (GUILayoutGroup * __this, float y, float height));
IL2CPP_REGISTER_METHOD(0x029EB5A0, String *, ToString, (GUILayoutGroup * __this));
}
