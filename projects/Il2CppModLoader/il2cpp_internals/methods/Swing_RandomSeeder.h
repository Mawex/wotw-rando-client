using namespace app;

namespace app::methods::Swing::RandomSeeder {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_seed, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D340, void, set_seed, (RandomSeeder * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D4B0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D4C0, void, __ctor, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D570, void, __ctor, (RandomSeeder * __this, int32_t _seed));
IL2CPP_REGISTER_METHOD(0x0182D6D0, void, reset, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D820, void, reseed, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D8D0, int32_t, get_nextSeed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0182D9B0, int32_t, nextInt, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182D9E0, int32_t, nextInt, (RandomSeeder * __this, int32_t _min, int32_t _max));
IL2CPP_REGISTER_METHOD(0x0182DA10, float, nextInt, (RandomSeeder * __this, IntRange _range));
IL2CPP_REGISTER_METHOD(0x0182DA50, bool, nextBool, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182DA90, float, nextFloat, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182DAC0, float, nextFloat, (RandomSeeder * __this, float _min, float _max));
IL2CPP_REGISTER_METHOD(0x0182DBB0, float, nextFloat, (RandomSeeder * __this, FloatRange _range));
IL2CPP_REGISTER_METHOD(0x0182DC90, Angle, nextAngle, (RandomSeeder * __this));
IL2CPP_REGISTER_METHOD(0x0182DD90, Angle, nextAngle, (RandomSeeder * __this, AngleRange _range));
IL2CPP_REGISTER_METHOD(0x0182DEA0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016ABF00, Object *, nextItem, (RandomSeeder * __this, Object__Array * _array));
IL2CPP_REGISTER_METHOD(0x016ABE70, Object *, nextItem, (RandomSeeder * __this, List_1_System_Object_ * _list));
}
