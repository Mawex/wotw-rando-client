using namespace app;

namespace app::methods::System::ParseNumbers {
IL2CPP_REGISTER_METHOD(0x0227EBF0, int32_t, StringToInt, (String * value, int32_t fromBase, int32_t flags));
IL2CPP_REGISTER_METHOD(0x0227EC10, int32_t, StringToInt, (String * value, int32_t fromBase, int32_t flags, int32_t * parsePos));
IL2CPP_REGISTER_METHODINFO(0x04736EA0, ParseNumbers_StringToInt_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227F090, int64_t, StringToLong, (String * value, int32_t fromBase, int32_t flags));
IL2CPP_REGISTER_METHOD(0x0227F0B0, int64_t, StringToLong, (String * value, int32_t fromBase, int32_t flags, int32_t * parsePos));
IL2CPP_REGISTER_METHODINFO(0x04795470, ParseNumbers_StringToLong_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227F5F0, String *, IntToString, (int32_t value, int32_t toBase, int32_t width, uint16_t paddingChar, int32_t flags));
IL2CPP_REGISTER_METHODINFO(0x04775FA0, ParseNumbers_IntToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227F9F0, void, EndianSwap, (Byte__Array * * value));
IL2CPP_REGISTER_METHOD(0x0227FB20, StringBuilder *, ConvertToBase2, (Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x0227FD50, StringBuilder *, ConvertToBase8, (Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0474CF30, ParseNumbers_ConvertToBase8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02280170, StringBuilder *, ConvertToBase16, (Byte__Array * value));
}
