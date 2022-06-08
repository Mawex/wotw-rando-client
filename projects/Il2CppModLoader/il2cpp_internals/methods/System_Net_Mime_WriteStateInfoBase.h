#include <interception_macros.h>

namespace app::methods::System::Net::Mime::WriteStateInfoBase {
IL2CPP_REGISTER_METHOD(0x01E6ECF0, void, __ctor, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_FooterLength, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Byte__Array *, get_Footer, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Byte__Array *, get_Header, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Byte__Array *, get_Buffer, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_Length, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentLineLength, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x01E6EDB0, void, EnsureSpaceInBuffer, (WriteStateInfoBase * __this, int32_t moreBytes));
IL2CPP_REGISTER_METHOD(0x01E6EEA0, void, Append, (WriteStateInfoBase * __this, uint8_t aByte));
IL2CPP_REGISTER_METHOD(0x01E6EF00, void, Append, (WriteStateInfoBase * __this, Byte__Array * bytes));
IL2CPP_REGISTER_METHOD(0x01E6EF50, void, AppendCRLF, (WriteStateInfoBase * __this, bool includeSpace));
IL2CPP_REGISTER_METHOD(0x01E6F140, void, AppendHeader, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x01E6F1A0, void, AppendFooter, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_MaxLineLength, (WriteStateInfoBase * __this));
IL2CPP_REGISTER_METHOD(0x01E6F200, void, Reset, (WriteStateInfoBase * __this));
}
