using namespace app;

namespace app::methods::ByteExtentions {
IL2CPP_REGISTER_METHOD(0x02551CF0, bool, GetBit, (uint8_t b, int32_t bitIndex));
IL2CPP_REGISTER_METHODINFO(0x0478C2E8, ByteExtentions_GetBit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02551DC0, uint8_t, SetBit, (uint8_t b, int32_t bitIndex, bool value));
IL2CPP_REGISTER_METHODINFO(0x047068C8, ByteExtentions_SetBit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02551EB0, uint8_t, ToogleBit, (uint8_t b, int32_t bitIndex));
IL2CPP_REGISTER_METHODINFO(0x0475E638, ByteExtentions_ToogleBit__MethodInfo);
}
