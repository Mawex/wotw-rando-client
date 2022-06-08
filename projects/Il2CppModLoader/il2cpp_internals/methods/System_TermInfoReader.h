#include <interception_macros.h>

namespace app::methods::System::TermInfoReader {
IL2CPP_REGISTER_METHOD(0x02444C20, void, __ctor, (TermInfoReader * __this, String * term, String * filename));
IL2CPP_REGISTER_METHODINFO(0x04751608, TermInfoReader__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02444E60, void, __ctor, (TermInfoReader * __this, String * term, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x04735F70, TermInfoReader__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02444F60, void, ReadHeader, (TermInfoReader * __this, Byte__Array * buffer, int32_t * position));
IL2CPP_REGISTER_METHODINFO(0x0470D490, TermInfoReader_ReadHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02445260, void, ReadNames, (TermInfoReader * __this, Byte__Array * buffer, int32_t * position));
IL2CPP_REGISTER_METHOD(0x02445290, int32_t, Get, (TermInfoReader * __this, TermInfoNumbers__Enum number));
IL2CPP_REGISTER_METHOD(0x024452F0, String *, Get, (TermInfoReader * __this, TermInfoStrings__Enum tstr));
IL2CPP_REGISTER_METHOD(0x02445400, Byte__Array *, GetStringBytes, (TermInfoReader * __this, TermInfoStrings__Enum tstr));
IL2CPP_REGISTER_METHOD(0x02445600, int16_t, GetInt16, (TermInfoReader * __this, Byte__Array * buffer, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02445680, String *, GetString, (TermInfoReader * __this, Byte__Array * buffer, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02445720, Byte__Array *, GetStringBytes, (TermInfoReader * __this, Byte__Array * buffer, int32_t offset));
}
