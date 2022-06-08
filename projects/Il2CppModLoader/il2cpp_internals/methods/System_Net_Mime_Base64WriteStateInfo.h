#include <interception_macros.h>

namespace app::methods::System::Net::Mime::Base64WriteStateInfo {
IL2CPP_REGISTER_METHOD(0x01E6ECF0, void, __ctor, (Base64WriteStateInfo * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_Padding, (Base64WriteStateInfo * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Padding, (Base64WriteStateInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x004E5A00, uint8_t, get_LastBits, (Base64WriteStateInfo * __this));
IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_LastBits, (Base64WriteStateInfo * __this, uint8_t value));
}
