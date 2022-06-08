using namespace app;

namespace app::methods::Unity::IO::Compression::DeflateInput {
IL2CPP_REGISTER_METHOD(0x002FA280, Byte__Array *, get_Buffer, (DeflateInput * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Buffer, (DeflateInput * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (DeflateInput * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Count, (DeflateInput * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_StartIndex, (DeflateInput * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_StartIndex, (DeflateInput * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02B72110, void, ConsumeBytes, (DeflateInput * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x02B72120, DeflateInput_InputState, DumpState, (DeflateInput * __this));
IL2CPP_REGISTER_METHOD(0x02B72140, void, RestoreState, (DeflateInput * __this, DeflateInput_InputState state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DeflateInput * __this));
}
