#include <interception_macros.h>

namespace app::methods::System::Xml::BinXmlSqlDecimal {
IL2CPP_REGISTER_METHOD(0x001DE5A0, bool, get_IsPositive, (BinXmlSqlDecimal__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE5B0, void, __ctor, (BinXmlSqlDecimal__Boxed * __this, Byte__Array * data, int32_t offset, bool trim));
IL2CPP_REGISTER_METHODINFO(0x04792E08, BinXmlSqlDecimal__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B5AAD0, uint32_t, UIntFromByteArray, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E67F0, void, MpDiv1, (UInt32__Array * rgulU, int32_t * ciulU, uint32_t iulD, uint32_t * iulR));
IL2CPP_REGISTER_METHOD(0x021E6970, void, MpNormalize, (UInt32__Array * rgulU, int32_t * ciulU));
IL2CPP_REGISTER_METHOD(0x021E69C0, uint16_t, ChFromDigit, (uint32_t uiDigit));
IL2CPP_REGISTER_METHOD(0x001DE5C0, Decimal, ToDecimal, (BinXmlSqlDecimal__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B3D8, BinXmlSqlDecimal_ToDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DE5F0, void, TrimTrailingZeros, (BinXmlSqlDecimal__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE600, String *, ToString, (BinXmlSqlDecimal__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x021E7190, void, __cctor, ());
}
