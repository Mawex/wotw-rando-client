#include <interception_macros.h>

namespace app::methods::VolatileDebugMenuLog {
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Path, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Path, (VolatileDebugMenuLog * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Text, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Text, (VolatileDebugMenuLog * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_HelpText, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_HelpText, (VolatileDebugMenuLog * __this, String * value));
IL2CPP_REGISTER_METHOD(0x008C2DD0, void, Awake, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C2FB0, bool, Draw, (VolatileDebugMenuLog * __this, Rect rect, bool isSelected));
IL2CPP_REGISTER_METHOD(0x008C3530, void, OnSelected, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C35F0, void, OnSelectedUpdate, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3860, void, OnSelectedFixedUpdate, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3970, void, MoveSelectionDown, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3A30, void, MoveSelectionUp, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3AE0, void, ResetHold, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Func_1_String_ *, get_DynamicText, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_DynamicText, (VolatileDebugMenuLog * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Active, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Active, (VolatileDebugMenuLog * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_List_1_IDebugMenuItem_ *, get_Items, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Items, (VolatileDebugMenuLog * __this, List_1_List_1_IDebugMenuItem_ * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddMenuItem, (VolatileDebugMenuLog * __this, String * path, IDebugMenuItem * item, int32_t col));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GoBackMenu, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3B00, void, Reset, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3BC0, void, Log, (String * text, bool shouldSendTelemetry));
IL2CPP_REGISTER_METHOD(0x008C3E30, void, DeleteMessage, (String * text));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (VolatileDebugMenuLog * __this));
IL2CPP_REGISTER_METHOD(0x008C3FF0, void, __cctor, ());
}
