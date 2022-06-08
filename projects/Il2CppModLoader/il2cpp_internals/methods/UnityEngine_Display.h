using namespace app;

namespace app::methods::UnityEngine::Display {
IL2CPP_REGISTER_METHOD(0x0063D180, void, __ctor, (Display * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Display * __this, void * nativeDisplay));
IL2CPP_REGISTER_METHOD(0x0242D9E0, int32_t, get_renderingWidth, (Display * __this));
IL2CPP_REGISTER_METHOD(0x0242DAE0, int32_t, get_renderingHeight, (Display * __this));
IL2CPP_REGISTER_METHOD(0x0242DBE0, int32_t, get_systemWidth, (Display * __this));
IL2CPP_REGISTER_METHOD(0x0242DCE0, int32_t, get_systemHeight, (Display * __this));
IL2CPP_REGISTER_METHOD(0x0242DDE0, Vector3, RelativeMouseAt, (Vector3 inputMouseCoordinates));
IL2CPP_REGISTER_METHOD(0x0242DF10, Display *, get_main, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0242DFB0, void, RecreateDisplayList, (IntPtr__Array * nativeDisplay));
IL2CPP_REGISTER_METHOD(0x0242E260, void, FireDisplaysUpdated, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0242E340, void, GetSystemExtImpl, (void * nativeDisplay, int32_t * w, int32_t * h));
IL2CPP_REGISTER_METHOD(0x0242E3B0, void, GetRenderingExtImpl, (void * nativeDisplay, int32_t * w, int32_t * h));
IL2CPP_REGISTER_METHOD(0x0242E420, int32_t, RelativeMouseAtImpl, (int32_t x, int32_t y, int32_t * rx, int32_t * ry));
IL2CPP_REGISTER_METHOD(0x0242E4A0, void, __cctor, (MethodInfo * method));
}
