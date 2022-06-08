#include <interception_macros.h>

namespace app::methods::Moon::CsvReader {
IL2CPP_REGISTER_METHOD(0x030E8D60, void, __ctor, (CsvReader * __this, TextReader * reader, bool shouldDisposeReader));
IL2CPP_REGISTER_METHODINFO(0x04789CE8, CsvReader__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030E8F00, IEnumerable_1_Moon_CsvReader_Cell_ *, ReadRow, (CsvReader * __this));
IL2CPP_REGISTER_METHOD(0x030E9090, IEnumerable_1_Moon_CsvReader_Cell_ *, ReadToEnd, (CsvReader * __this));
IL2CPP_REGISTER_METHOD(0x030E9220, bool, TryPeak, (CsvReader * __this, CsvReader_Cell * cell));
IL2CPP_REGISTER_METHOD(0x030E9330, bool, TryRead, (CsvReader * __this, CsvReader_Cell * cell));
IL2CPP_REGISTER_METHOD(0x030E9410, bool, TryReadImpl, (CsvReader * __this, CsvReader_Cell * cell));
IL2CPP_REGISTER_METHOD(0x030E96A0, CsvReader_Cell, ReadQuotedCell, (CsvReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0477AF38, CsvReader_ReadQuotedCell__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030E9E80, void, EnsureNextCharIsLf, (CsvReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D628, CsvReader_EnsureNextCharIsLf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EA000, CsvReader_Cell, ReadUnquotedCell, (CsvReader * __this));
IL2CPP_REGISTER_METHOD(0x030EA3D0, void, TrimSbEnd, (CsvReader * __this));
IL2CPP_REGISTER_METHOD(0x030EA470, void, Dispose, (CsvReader * __this));
}
