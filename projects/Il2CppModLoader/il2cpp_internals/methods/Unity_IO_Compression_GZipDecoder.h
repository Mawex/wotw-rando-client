#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::GZipDecoder {
IL2CPP_REGISTER_METHOD(0x02B781E0, void, __ctor, (GZipDecoder * __this));
IL2CPP_REGISTER_METHOD(0x02B781E0, void, Reset, (GZipDecoder * __this));
IL2CPP_REGISTER_METHOD(0x02B78200, bool, ReadHeader, (GZipDecoder * __this, InputBuffer * input));
IL2CPP_REGISTER_METHODINFO(0x047266D0, GZipDecoder_ReadHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B78700, bool, ReadFooter, (GZipDecoder * __this, InputBuffer * input));
IL2CPP_REGISTER_METHOD(0x02B78820, void, UpdateWithBytesRead, (GZipDecoder * __this, Byte__Array * buffer, int32_t offset, int32_t copied));
IL2CPP_REGISTER_METHOD(0x02B78930, void, Validate, (GZipDecoder * __this));
IL2CPP_REGISTER_METHODINFO(0x04732740, GZipDecoder_Validate__MethodInfo);
}
