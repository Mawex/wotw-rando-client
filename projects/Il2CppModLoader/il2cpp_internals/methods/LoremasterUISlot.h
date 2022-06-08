using namespace app;

namespace app::methods::LoremasterUISlot {
IL2CPP_REGISTER_METHOD(0x002FBB60, ReplaySetting *, get_ReplaySetting, (LoremasterUISlot * __this));
IL2CPP_REGISTER_METHOD(0x009F3530, void, SetSetting, (LoremasterUISlot * __this, ReplaySetting * replay));
IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (LoremasterUISlot * __this, bool selected));
IL2CPP_REGISTER_METHOD(0x009F3960, void, SetItemContext, (LoremasterUISlot * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x009F3A30, void, OnItemContextDirty, (LoremasterUISlot * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x009F3A40, void, OnPressed, (LoremasterUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04774D70, LoremasterUISlot_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F3C90, void, OnHighlighted, (LoremasterUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04759340, LoremasterUISlot_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0083A0A0, void, OnUnhighlighted, (LoremasterUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DC00, LoremasterUISlot_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LoremasterUISlot * __this));
}
