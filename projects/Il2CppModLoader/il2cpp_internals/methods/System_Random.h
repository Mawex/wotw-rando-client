using namespace app;

namespace app::methods::System::Random {
IL2CPP_REGISTER_METHOD(0x022806C0, void, __ctor, (Random * __this));
IL2CPP_REGISTER_METHOD(0x02280710, void, __ctor, (Random * __this, int32_t Seed));
IL2CPP_REGISTER_METHOD(0x022809F0, double, Sample, (Random * __this));
IL2CPP_REGISTER_METHOD(0x02280A10, int32_t, InternalSample, (Random * __this));
IL2CPP_REGISTER_METHOD(0x02280AE0, int32_t, Next, (Random * __this));
IL2CPP_REGISTER_METHOD(0x02280AF0, double, GetSampleForLargeRange, (Random * __this));
IL2CPP_REGISTER_METHOD(0x02280B50, int32_t, Next, (Random * __this, int32_t minValue, int32_t maxValue));
IL2CPP_REGISTER_METHODINFO(0x04722BB8, Random_Next_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02280D20, int32_t, Next, (Random * __this, int32_t maxValue));
IL2CPP_REGISTER_METHODINFO(0x04797480, Random_Next_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00980110, double, NextDouble, (Random * __this));
}
