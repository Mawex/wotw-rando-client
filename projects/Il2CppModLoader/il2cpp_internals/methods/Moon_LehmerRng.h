using namespace app;

namespace app::methods::Moon::LehmerRng {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LehmerRng * __this, uint32_t seed));
IL2CPP_REGISTER_METHOD(0x0255A5E0, uint32_t, GetNext, (LehmerRng * __this));
IL2CPP_REGISTER_METHOD(0x0255A620, float, GetNextFloat, (LehmerRng * __this));
IL2CPP_REGISTER_METHOD(0x0255A670, float, GetFloatInRange, (LehmerRng * __this, float min, float max));
IL2CPP_REGISTER_METHOD(0x0255A790, uint32_t, GetInRange, (LehmerRng * __this, uint32_t min, uint32_t max));
}
