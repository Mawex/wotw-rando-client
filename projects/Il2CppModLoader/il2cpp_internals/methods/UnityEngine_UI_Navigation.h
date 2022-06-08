#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Navigation {
IL2CPP_REGISTER_METHOD(0x001EBC90, Navigation_Mode__Enum, get_mode, (Navigation__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_mode, (Navigation__Boxed * __this, Navigation_Mode__Enum value));
IL2CPP_REGISTER_METHOD(0x001FBB90, Selectable *, get_selectOnUp, (Navigation__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_selectOnUp, (Navigation__Boxed * __this, Selectable * value));
IL2CPP_REGISTER_METHOD(0x001FBBA0, Selectable *, get_selectOnDown, (Navigation__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_selectOnDown, (Navigation__Boxed * __this, Selectable * value));
IL2CPP_REGISTER_METHOD(0x001FBBB0, Selectable *, get_selectOnLeft, (Navigation__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3C0, void, set_selectOnLeft, (Navigation__Boxed * __this, Selectable * value));
IL2CPP_REGISTER_METHOD(0x001FBBC0, Selectable *, get_selectOnRight, (Navigation__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3D0, void, set_selectOnRight, (Navigation__Boxed * __this, Selectable * value));
IL2CPP_REGISTER_METHOD(0x02662E00, Navigation, get_defaultNavigation, ());
IL2CPP_REGISTER_METHOD(0x001FBBD0, bool, Equals, (Navigation__Boxed * __this, Navigation other));
}
