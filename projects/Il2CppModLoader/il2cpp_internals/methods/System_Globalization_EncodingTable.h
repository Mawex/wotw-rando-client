#include <interception_macros.h>

namespace app::methods::System::Globalization::EncodingTable {
IL2CPP_REGISTER_METHOD(0x02607260, int32_t, GetNumEncodingItems, ());
IL2CPP_REGISTER_METHOD(0x02607310, InternalEncodingDataItem, ENC, (String * name, uint16_t cp));
IL2CPP_REGISTER_METHOD(0x02607340, InternalCodePageDataItem, MapCodePageDataItem, (uint16_t cp, uint16_t fcp, String * names, uint32_t flags));
IL2CPP_REGISTER_METHOD(0x02607370, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0260FB60, int32_t, internalGetCodePageFromName, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04788CB0, EncodingTable_internalGetCodePageFromName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02610060, int32_t, GetCodePageFromName, (String * name));
IL2CPP_REGISTER_METHODINFO(0x0476EA20, EncodingTable_GetCodePageFromName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02610230, CodePageDataItem *, GetCodePageDataItem, (int32_t codepage));
}
