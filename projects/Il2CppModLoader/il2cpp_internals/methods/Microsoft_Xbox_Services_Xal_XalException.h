#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalException {
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, (XalException * __this));
IL2CPP_REGISTER_METHOD(0x009C9740, void, set_ErrorCode, (XalException * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01435830, String *, get_Message, (XalException * __this));
IL2CPP_REGISTER_METHOD(0x01435940, void, __ctor, (XalException * __this, int32_t errorCode));
}
