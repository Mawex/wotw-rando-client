using namespace app;

namespace app::methods::P3D_Rect {
IL2CPP_REGISTER_METHOD(0x00243E50, bool, get_IsSet, (P3D_Rect__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B8E0, int32_t, get_Width, (P3D_Rect__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243E70, int32_t, get_Height, (P3D_Rect__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FC50, void, __ctor, (P3D_Rect__Boxed * __this, int32_t newXMin, int32_t newXMax, int32_t newYMin, int32_t newYMax));
IL2CPP_REGISTER_METHOD(0x0011FC50, void, Set, (P3D_Rect__Boxed * __this, int32_t newXMin, int32_t newXMax, int32_t newYMin, int32_t newYMax));
IL2CPP_REGISTER_METHOD(0x00243E80, void, Add, (P3D_Rect__Boxed * __this, int32_t newX, int32_t newY));
IL2CPP_REGISTER_METHOD(0x00243ED0, void, Add, (P3D_Rect__Boxed * __this, P3D_Rect rect));
IL2CPP_REGISTER_METHOD(0x00243F50, void, Add, (P3D_Rect__Boxed * __this, int32_t newXMin, int32_t newXMax, int32_t newYMin, int32_t newYMax));
IL2CPP_REGISTER_METHOD(0x00243FA0, bool, Overlaps, (P3D_Rect__Boxed * __this, P3D_Rect other));
IL2CPP_REGISTER_METHOD(0x00244030, void, Clear, (P3D_Rect__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002440E0, Rect, get_UnityRect, (P3D_Rect__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x03096D60, void, __cctor, (MethodInfo * method));
}
