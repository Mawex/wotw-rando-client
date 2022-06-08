using namespace app;

namespace app::methods::RopeReeler {
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_LastLinkPercentage, (RopeReeler * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_LastLinkPercentage, (RopeReeler * __this, float value));
IL2CPP_REGISTER_METHOD(0x0136CC90, void, ResetReel, (RopeReeler * __this));
IL2CPP_REGISTER_METHOD(0x0136CFE0, void, ReelIn, (RopeReeler * __this, float amount));
IL2CPP_REGISTER_METHOD(0x0136D9F0, bool, ReelOut, (RopeReeler * __this, float amount));
IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (RopeReeler * __this));
}
