#include <interception_macros.h>

namespace app::methods::UnityEngine::RectOffset {
IL2CPP_REGISTER_METHOD(0x0296DE00, void, __ctor, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0231B8E0, void, __ctor, (RectOffset * __this, Object * sourceStyle, void * source));
IL2CPP_REGISTER_METHOD(0x0296DE60, void *, InternalCreate, ());
IL2CPP_REGISTER_METHOD(0x0296DEB0, void, InternalDestroy, (void * ptr));
IL2CPP_REGISTER_METHOD(0x0296DF00, int32_t, get_left, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296DF50, void, set_left, (RectOffset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0296DFB0, int32_t, get_right, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E000, void, set_right, (RectOffset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0296E060, int32_t, get_top, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E0B0, void, set_top, (RectOffset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0296E110, int32_t, get_bottom, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E160, void, set_bottom, (RectOffset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0296E1C0, int32_t, get_horizontal, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E210, int32_t, get_vertical, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E260, Rect, Remove, (RectOffset * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0296E2F0, void, Finalize, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E410, String *, ToString, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E770, void, Destroy, (RectOffset * __this));
IL2CPP_REGISTER_METHOD(0x0296E840, void, Remove_Injected, (RectOffset * __this, Rect * rect, Rect * ret));
}
