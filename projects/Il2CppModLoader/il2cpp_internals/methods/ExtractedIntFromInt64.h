#include <interception_macros.h>

namespace app::methods::ExtractedIntFromInt64 {
IL2CPP_REGISTER_METHOD(0x00988420, void, __ctor, (ExtractedIntFromInt64 * __this, int32_t bits));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Bits, (ExtractedIntFromInt64 * __this));
IL2CPP_REGISTER_METHOD(0x00988420, void, set_Bits, (ExtractedIntFromInt64 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Value, (ExtractedIntFromInt64 * __this));
IL2CPP_REGISTER_METHOD(0x00988440, void, set_Value, (ExtractedIntFromInt64 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00988510, int32_t, get_MaxValue, (ExtractedIntFromInt64 * __this));
IL2CPP_REGISTER_METHOD(0x00988510, int32_t, get_Mask, (ExtractedIntFromInt64 * __this));
IL2CPP_REGISTER_METHOD(0x00988520, void, Encode, (ExtractedIntFromInt64 * __this, int32_t * data));
IL2CPP_REGISTER_METHOD(0x00988540, void, Decode, (ExtractedIntFromInt64 * __this, int32_t * data));
IL2CPP_REGISTER_METHOD(0x00988570, bool, Validate, (ExtractedIntFromInt64 * __this));
}
