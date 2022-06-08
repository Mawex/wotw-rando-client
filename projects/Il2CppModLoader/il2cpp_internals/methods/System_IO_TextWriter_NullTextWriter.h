using namespace app;

namespace app::methods::System::IO::TextWriter_NullTextWriter {
IL2CPP_REGISTER_METHOD(0x023881E0, void, __ctor, (TextWriter_NullTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x023882B0, Encoding *, get_Encoding, (TextWriter_NullTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (TextWriter_NullTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (TextWriter_NullTextWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine, (TextWriter_NullTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine, (TextWriter_NullTextWriter * __this, String * value));
}
