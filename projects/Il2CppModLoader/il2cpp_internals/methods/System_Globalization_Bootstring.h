#include <interception_macros.h>

namespace app::methods::System::Globalization::Bootstring {
IL2CPP_REGISTER_METHOD(0x01A1D930, void, __ctor, (Bootstring * __this, uint16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN));
IL2CPP_REGISTER_METHOD(0x01A1D960, String *, Encode, (Bootstring * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04785038, Bootstring_Encode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1DF90, uint16_t, EncodeDigit, (Bootstring * __this, int32_t d));
IL2CPP_REGISTER_METHOD(0x01A1DFB0, int32_t, DecodeDigit, (Bootstring * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x01A1DFE0, int32_t, Adapt, (Bootstring * __this, int32_t delta, int32_t numPoints, bool firstTime));
IL2CPP_REGISTER_METHOD(0x01A1E050, String *, Decode, (Bootstring * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0471BEE0, Bootstring_Decode__MethodInfo);
}
