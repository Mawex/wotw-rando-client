using namespace app;

namespace app::methods::StatUISlot {
IL2CPP_REGISTER_METHOD(0x002FBBA0, StatSetting *, get_StatSetting, (StatUISlot * __this));
IL2CPP_REGISTER_METHOD(0x009B4000, void, SetSetting, (StatUISlot * __this, StatSetting * stat));
IL2CPP_REGISTER_METHOD(0x009B43A0, void, SetSelected, (StatUISlot * __this, bool selected));
IL2CPP_REGISTER_METHOD(0x009B43F0, void, SetItemContext, (StatUISlot * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x009B44C0, void, OnItemContextDirty, (StatUISlot * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPressed, (StatUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x0475EC90, StatUISlot_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B44D0, void, OnHighlighted, (StatUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04791268, StatUISlot_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B4590, void, OnUnhighlighted, (StatUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F518, StatUISlot_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (StatUISlot * __this));
}
