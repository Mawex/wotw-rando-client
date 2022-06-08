#include <interception_macros.h>

namespace app::methods::System::Xml::XmlRegisteredNonCachedStream {
IL2CPP_REGISTER_METHOD(0x01706880, void, __ctor, (XmlRegisteredNonCachedStream * __this, Stream * stream, XmlDownloadManager * downloadManager, String * host));
IL2CPP_REGISTER_METHOD(0x01706940, void, Finalize, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x017069E0, void, Dispose, (XmlRegisteredNonCachedStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01706B30, IAsyncResult *, BeginRead, (XmlRegisteredNonCachedStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01706B60, IAsyncResult *, BeginWrite, (XmlRegisteredNonCachedStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01706B90, int32_t, EndRead, (XmlRegisteredNonCachedStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01706BC0, void, EndWrite, (XmlRegisteredNonCachedStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706C20, int32_t, Read, (XmlRegisteredNonCachedStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01706C50, int32_t, ReadByte, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706C80, int64_t, Seek, (XmlRegisteredNonCachedStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHOD(0x01706CB0, void, SetLength, (XmlRegisteredNonCachedStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01706CE0, void, Write, (XmlRegisteredNonCachedStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01706D10, void, WriteByte, (XmlRegisteredNonCachedStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01706D40, bool, get_CanRead, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706D70, bool, get_CanSeek, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706DD0, int64_t, get_Length, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706E00, int64_t, get_Position, (XmlRegisteredNonCachedStream * __this));
IL2CPP_REGISTER_METHOD(0x01706E30, void, set_Position, (XmlRegisteredNonCachedStream * __this, int64_t value));
}
