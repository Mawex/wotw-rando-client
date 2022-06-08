using namespace app;

namespace app::methods::System::IO::BinaryWriter {
IL2CPP_REGISTER_METHOD(0x01DFF690, void, __ctor, (BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DFF850, void, __ctor, (BinaryWriter * __this, Stream * output));
IL2CPP_REGISTER_METHOD(0x01DFF9C0, void, __ctor, (BinaryWriter * __this, Stream * output, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01DFF9E0, void, __ctor, (BinaryWriter * __this, Stream * output, Encoding * encoding, bool leaveOpen));
IL2CPP_REGISTER_METHODINFO(0x0474BCE8, BinaryWriter__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, (BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DFFB80, void, Dispose, (BinaryWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose, (BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DFFBE0, Stream *, get_BaseStream, (BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DFFC10, void, Flush, (BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DFFC40, int64_t, Seek, (BinaryWriter * __this, int32_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHOD(0x01DFFC70, void, Write, (BinaryWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01DFFCE0, void, Write, (BinaryWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01DFFCE0, void, Write, (BinaryWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01DFFD10, void, Write, (BinaryWriter * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x0472EC18, BinaryWriter_Write_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFFE00, void, Write, (BinaryWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DFFE30, void, Write, (BinaryWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x047328E0, BinaryWriter_Write_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFFFC0, void, Write, (BinaryWriter * __this, Char__Array * chars));
IL2CPP_REGISTER_METHODINFO(0x04752D88, BinaryWriter_Write_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E000E0, void, Write, (BinaryWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x01E00140, void, Write, (BinaryWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01E001E0, void, Write, (BinaryWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01E00280, void, Write, (BinaryWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E00390, void, Write, (BinaryWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01E004A0, void, Write, (BinaryWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01E006B0, void, Write, (BinaryWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01E008C0, void, Write, (BinaryWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01E00920, void, Write, (BinaryWriter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04767CC0, BinaryWriter_Write_15__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E00C90, void, Write7BitEncodedInt, (BinaryWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E00D00, void, __cctor, (MethodInfo * method));
}
