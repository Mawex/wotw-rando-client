#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::GZipFormatter {
IL2CPP_REGISTER_METHOD(0x02B78A40, void, __ctor, (GZipFormatter * __this));
IL2CPP_REGISTER_METHOD(0x02B78AF0, void, __ctor, (GZipFormatter * __this, int32_t compressionLevel));
IL2CPP_REGISTER_METHOD(0x002FA280, Byte__Array *, GetHeader, (GZipFormatter * __this));
IL2CPP_REGISTER_METHOD(0x02B78BD0, void, UpdateWithBytesRead, (GZipFormatter * __this, Byte__Array * buffer, int32_t offset, int32_t bytesToCopy));
IL2CPP_REGISTER_METHOD(0x02B78CE0, Byte__Array *, GetFooter, (GZipFormatter * __this));
IL2CPP_REGISTER_METHOD(0x02B78DB0, void, WriteUInt32, (GZipFormatter * __this, Byte__Array * b, uint32_t value, int32_t startIndex));
}
