#include <interception_macros.h>

namespace app::methods::SetupState {
IL2CPP_REGISTER_METHOD(0x03144EB0, void, __ctor, (SetupState * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Index, (SetupState * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (SetupState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NotMappable, (SetupState * __this));
}
