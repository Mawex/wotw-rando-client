using namespace app;

namespace app::methods::UnityEngine::GUIClip {
IL2CPP_REGISTER_METHOD(0x029E2440, Rect, get_visibleRect, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029E24B0, void, Internal_Push, (Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset));
IL2CPP_REGISTER_METHOD(0x029E2530, void, Internal_Pop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029E2580, Vector2, Unclip_Vector2, (Vector2 pos));
IL2CPP_REGISTER_METHOD(0x029D9F60, Matrix4x4, GetMatrix, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029E25F0, void, SetMatrix, (Matrix4x4 m));
IL2CPP_REGISTER_METHOD(0x029E2640, void, Push, (Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset));
IL2CPP_REGISTER_METHOD(0x029E2530, void, Pop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029E26C0, Vector2, Unclip, (Vector2 pos));
IL2CPP_REGISTER_METHOD(0x029E2730, void, get_visibleRect_Injected, (Rect * ret));
IL2CPP_REGISTER_METHOD(0x029E2780, void, Internal_Push_Injected, (Rect * screenRect, Vector2 * scrollOffset, Vector2 * renderOffset, bool resetOffset));
IL2CPP_REGISTER_METHOD(0x029E2810, void, Unclip_Vector2_Injected, (Vector2 * pos, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x029E2870, void, GetMatrix_Injected, (Matrix4x4 * ret));
IL2CPP_REGISTER_METHOD(0x029E28C0, void, SetMatrix_Injected, (Matrix4x4 * m));
}
