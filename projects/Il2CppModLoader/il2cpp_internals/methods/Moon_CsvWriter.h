#include <interception_macros.h>

namespace app::methods::Moon::CsvWriter {
IL2CPP_REGISTER_METHOD(0x01669060, void, __ctor, (CsvWriter * __this, TextWriter * writer, bool shouldDisposeWriter));
IL2CPP_REGISTER_METHOD(0x030EAC60, void, FinishRow, (CsvWriter * __this));
IL2CPP_REGISTER_METHOD(0x00442880, void, Flush, (CsvWriter * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_NextColumn, (CsvWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NextRow, (CsvWriter * __this));
IL2CPP_REGISTER_METHOD(0x030EACA0, void, WriteString, (CsvWriter * __this, String * str));
IL2CPP_REGISTER_METHOD(0x030EACD0, void, WriteString, (CsvWriter * __this, String * str, int32_t start, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04724188, CsvWriter_WriteString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EAE10, void, WriteSingle, (CsvWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x030EAE90, void, WriteDouble, (CsvWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x030EAF10, void, WriteDecimal, (CsvWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x030EAF90, void, WriteU8, (CsvWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x030EB010, void, WriteU16, (CsvWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x030EB080, void, WriteU32, (CsvWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x030EB0F0, void, WriteU64, (CsvWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x030EB160, void, WriteI8, (CsvWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x030EB1E0, void, WriteI16, (CsvWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x030EB250, void, WriteI32, (CsvWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x030EB2C0, void, WriteI64, (CsvWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x030EB330, void, StartWrite, (CsvWriter * __this));
IL2CPP_REGISTER_METHOD(0x030EB380, void, WriteStringImpl, (CsvWriter * __this, String * str, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x030EB620, void, Dispose, (CsvWriter * __this));
}
