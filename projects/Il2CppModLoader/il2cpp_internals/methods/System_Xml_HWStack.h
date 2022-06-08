using namespace app;

namespace app::methods::System::Xml::HWStack {
IL2CPP_REGISTER_METHOD(0x021F81C0, void, __ctor, (HWStack * __this, int32_t GrowthRate));
IL2CPP_REGISTER_METHOD(0x021F8270, void, __ctor, (HWStack * __this, int32_t GrowthRate, int32_t limit));
IL2CPP_REGISTER_METHOD(0x021F8320, Object *, Push, (HWStack * __this));
IL2CPP_REGISTER_METHODINFO(0x047068A8, HWStack_Push__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021F8480, Object *, Pop, (HWStack * __this));
IL2CPP_REGISTER_METHOD(0x021F84D0, Object *, Peek, (HWStack * __this));
IL2CPP_REGISTER_METHOD(0x021F8520, void, AddToTop, (HWStack * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x021F85B0, Object *, get_Item, (HWStack * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473C228, HWStack_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021F8690, void, set_Item, (HWStack * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04705B10, HWStack_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Length, (HWStack * __this));
IL2CPP_REGISTER_METHOD(0x021F87A0, void, __ctor, (HWStack * __this, Object__Array * stack, int32_t growthRate, int32_t used, int32_t size));
IL2CPP_REGISTER_METHOD(0x021F87C0, Object *, Clone, (HWStack * __this));
}
