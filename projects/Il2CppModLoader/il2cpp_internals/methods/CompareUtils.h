using namespace app;

namespace app::methods::CompareUtils {
IL2CPP_REGISTER_METHOD(0x025528A0, bool, Compare, (float a, float b, CompareMethod__Enum cm, float floatingPoint));
IL2CPP_REGISTER_METHOD(0x025529B0, bool, Compare, (int32_t a, int32_t b, CompareMethod__Enum cm));
IL2CPP_REGISTER_METHOD(0x025529F0, String *, GetCompareString, (CompareMethod__Enum cm));
}
