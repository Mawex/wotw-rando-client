using namespace app;

namespace app::methods::UnityEngine::UI::ObjectPool_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x01F19BD0, int32_t, get_countAll, (ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_countAll, (ObjectPool_1_System_Object_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02ACEF00, int32_t, get_countActive, (ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACEF70, int32_t, get_countInactive, (ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACEDE0, void, __ctor, (ObjectPool_1_System_Object_ * __this, UnityAction_1_System_Object_ * actionOnGet, UnityAction_1_System_Object_ * actionOnRelease));
IL2CPP_REGISTER_METHOD(0x02ACEFA0, Object *, Get, (ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACF090, void, Release, (ObjectPool_1_System_Object_ * __this, Object * element));
}
