using namespace app;

namespace app::methods::System::Net::FileWebStream {
IL2CPP_REGISTER_METHOD(0x01D2BB10, void, __ctor, (FileWebStream * __this, FileWebRequest * request, String * path, FileMode__Enum mode, FileAccess__Enum access, FileShare__Enum sharing));
IL2CPP_REGISTER_METHOD(0x01D2BC10, void, __ctor, (FileWebStream * __this, FileWebRequest * request, String * path, FileMode__Enum mode, FileAccess__Enum access, FileShare__Enum sharing, int32_t length, bool async));
IL2CPP_REGISTER_METHOD(0x01D2BD30, void, Dispose, (FileWebStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01D2BDF0, void, ICloseEx_CloseEx, (FileWebStream * __this, CloseExState__Enum closeState));
IL2CPP_REGISTER_METHOD(0x01D2BE40, int32_t, Read, (FileWebStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04722E70, FileWebStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2BF20, void, Write, (FileWebStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04763ED0, FileWebStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2C000, IAsyncResult *, BeginRead, (FileWebStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0474D5B8, FileWebStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2C100, int32_t, EndRead, (FileWebStream * __this, IAsyncResult * ar));
IL2CPP_REGISTER_METHODINFO(0x04747C70, FileWebStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2C1C0, IAsyncResult *, BeginWrite, (FileWebStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04718CE8, FileWebStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2C2C0, void, EndWrite, (FileWebStream * __this, IAsyncResult * ar));
IL2CPP_REGISTER_METHODINFO(0x04713C40, FileWebStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2C380, void, CheckError, (FileWebStream * __this));
IL2CPP_REGISTER_METHODINFO(0x047323F0, FileWebStream_CheckError__MethodInfo);
}
