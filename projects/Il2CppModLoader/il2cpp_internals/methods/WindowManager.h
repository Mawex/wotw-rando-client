using namespace app;

namespace app::methods::WindowManager {
IL2CPP_REGISTER_METHOD(0x0057AB90, int32_t, SetWindowLong, (void * hWnd, int32_t nIndex, int32_t dwNewLong));
IL2CPP_REGISTER_METHOD(0x0057AC40, int32_t, GetWindowLong, (void * hWnd, int32_t index));
IL2CPP_REGISTER_METHOD(0x0057ACF0, void *, FindWindowByCaption, (void * ZeroOnly, String * lpWindowName));
IL2CPP_REGISTER_METHOD(0x0057AED0, bool, DrawMenuBar, (void * hWnd));
IL2CPP_REGISTER_METHOD(0x0057AF70, void *, SetWindowPos, (void * hWnd, int32_t hWndInsertAfter, int32_t x, int32_t Y, int32_t cx, int32_t cy, int32_t wFlags));
IL2CPP_REGISTER_METHOD(0x0057B030, bool, GetWindowRect, (void * hWnd, RECT * lpRect));
IL2CPP_REGISTER_METHOD(0x0057B0E0, void *, GetForegroundWindow, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0057B170, void *, GetActiveWindow, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0057B200, bool, ShowWindow, (void * hwnd, int32_t nCmdShow));
IL2CPP_REGISTER_METHOD(0x0057B2B0, void *, GetFocus, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0057B340, void, Awake, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B470, int32_t, MakeBorderless, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B4F0, void, MakeBordered, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B610, void, UpdateWindowProperties, (WindowManager * __this, int32_t properties));
IL2CPP_REGISTER_METHOD(0x0057B730, void, KickWindow, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x003FC3D0, bool, IsFullScreen, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B7B0, bool, IsMaximized, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B7E0, bool, IsMinimized, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B810, bool, HasFocus, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B8B0, void, Update, (WindowManager * __this));
IL2CPP_REGISTER_METHOD(0x0057B9D0, void, __ctor, (WindowManager * __this));
}
