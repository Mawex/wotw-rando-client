using namespace app;

namespace app::methods::CleverMenuOptionsList {
IL2CPP_REGISTER_METHOD(0x012BFF60, void, ClearItems, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C0110, void, SetSelection, (CleverMenuOptionsList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x012C0140, void, Awake, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C0310, void, OnDestroy, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C04F0, void, OnOptionPressed, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHODINFO(0x04740A10, CleverMenuOptionsList_OnOptionPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C0590, void, OnEnable, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C05A0, void, FixedUpdate, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C0C60, void, AddItem, (CleverMenuOptionsList * __this, String * label, Action * onPressed));
IL2CPP_REGISTER_METHOD(0x012C1220, void, AddItem, (CleverMenuOptionsList * __this, Language__Enum language, String * label, Action * onPressed));
IL2CPP_REGISTER_METHOD(0x012C17B0, void, __ctor, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHOD(0x012C1920, void, _FixedUpdate_b__17_0, (CleverMenuOptionsList * __this));
IL2CPP_REGISTER_METHODINFO(0x04767588, CleverMenuOptionsList__FixedUpdate_b__17_0__MethodInfo);
}
