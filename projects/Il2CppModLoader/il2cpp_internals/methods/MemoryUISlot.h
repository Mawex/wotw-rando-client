#include <interception_macros.h>

namespace app::methods::MemoryUISlot {
IL2CPP_REGISTER_METHOD(0x002FBB60, ReplaySetting *, get_ReplaySetting, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHOD(0x009D96C0, void, OnEnable, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetSetting, (MemoryUISlot * __this, ReplaySetting * replay));
IL2CPP_REGISTER_METHOD(0x009D96D0, void, RefreshState, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (MemoryUISlot * __this, bool selected));
IL2CPP_REGISTER_METHOD(0x009D9A80, void, SetItemContext, (MemoryUISlot * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (MemoryUISlot * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x009D9B50, void, OnPressed, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x047079B0, MemoryUISlot_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D9E20, void, OnHighlighted, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04770D40, MemoryUISlot_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D9EA0, void, OnUnhighlighted, (MemoryUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x047555A8, MemoryUISlot_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MemoryUISlot * __this));
}
