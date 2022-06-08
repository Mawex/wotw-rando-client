using namespace app;

namespace app::methods::RisingWater {
IL2CPP_REGISTER_METHOD(0x01357920, RisingWater *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013579C0, void, SetProperties, (float speed));
IL2CPP_REGISTER_METHOD(0x01357AD0, bool, get_Available, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01357B90, Vector2, get_Position, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01357D20, void, Awake, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x01357E00, void, OnDestroy, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x01357EA0, void, FixedUpdate, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x013582A0, void, Serialize, (RisingWater * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (RisingWater * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x013584B0, void, set_Mask, (RisingWater * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01358560, void, __ctor, (RisingWater * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
