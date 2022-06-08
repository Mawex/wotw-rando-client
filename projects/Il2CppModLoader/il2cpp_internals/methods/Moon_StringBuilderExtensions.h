using namespace app;

namespace app::methods::Moon::StringBuilderExtensions {
IL2CPP_REGISTER_METHOD(0x030F27E0, void, AppendGuid, (StringBuilder * sb, Guid value));
IL2CPP_REGISTER_METHOD(0x030F2810, void, AppendByteAsHex, (StringBuilder * sb, uint8_t value));
IL2CPP_REGISTER_METHOD(0x030F2890, uint16_t, GetNibble, (int32_t value));
IL2CPP_REGISTER_METHOD(0x030F28B0, void, AppendI32, (StringBuilder * sb, int32_t value));
IL2CPP_REGISTER_METHOD(0x030F2900, void, AppendI64, (StringBuilder * sb, int64_t value));
IL2CPP_REGISTER_METHOD(0x030F2950, void, AppendU8, (StringBuilder * sb, uint8_t value));
IL2CPP_REGISTER_METHOD(0x030F2B40, void, AppendU16, (StringBuilder * sb, uint16_t value));
IL2CPP_REGISTER_METHOD(0x030F2D30, void, AppendU32, (StringBuilder * sb, uint32_t value));
IL2CPP_REGISTER_METHOD(0x030F2F30, void, AppendU64, (StringBuilder * sb, uint64_t value));
IL2CPP_REGISTER_METHOD(0x030F3140, void, AppendF32, (StringBuilder * sb, float value, bool skipIfZero));
IL2CPP_REGISTER_METHOD(0x030F3390, void, AppendF64, (StringBuilder * sb, double value, bool skipIfZero));
}
