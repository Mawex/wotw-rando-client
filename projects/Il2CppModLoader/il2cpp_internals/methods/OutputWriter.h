using namespace app;

namespace app::methods::OutputWriter {
IL2CPP_REGISTER_METHOD(0x00442420, void, __ctor, (OutputWriter * __this, String * folder, String * outputFileName));
IL2CPP_REGISTER_METHOD(0x004427E0, void, WriteLines, (OutputWriter * __this, String__Array * lines));
IL2CPP_REGISTER_METHOD(0x00442880, void, FlushStreamWriter, (OutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x004428B0, void, Write, (OutputWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x00442900, void, WriteBuffer, (OutputWriter * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x00442880, void, Flush, (OutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x00442A10, void, Close, (OutputWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, GetOutputPath, (OutputWriter * __this));
}
