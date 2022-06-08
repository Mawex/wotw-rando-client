using namespace app;

namespace app::methods::Mono::Globalization::Unicode::SortKeyBuffer {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SortKeyBuffer * __this, int32_t lcid));
IL2CPP_REGISTER_METHOD(0x023C4400, void, Reset, (SortKeyBuffer * __this));
IL2CPP_REGISTER_METHOD(0x023C4420, void, Initialize, (SortKeyBuffer * __this, CompareOptions__Enum options, int32_t lcid, String * s, bool frenchSort));
IL2CPP_REGISTER_METHOD(0x023C45F0, void, AppendCJKExtension, (SortKeyBuffer * __this, uint8_t lv1msb, uint8_t lv1lsb));
IL2CPP_REGISTER_METHOD(0x023C46D0, void, AppendKana, (SortKeyBuffer * __this, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth));
IL2CPP_REGISTER_METHOD(0x023C47A0, void, AppendNormal, (SortKeyBuffer * __this, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3));
IL2CPP_REGISTER_METHOD(0x023C49D0, void, AppendLevel5, (SortKeyBuffer * __this, uint8_t category, uint8_t lv1));
IL2CPP_REGISTER_METHOD(0x023C4AB0, void, AppendBufferPrimitive, (SortKeyBuffer * __this, uint8_t value, Byte__Array * * buf, int32_t * bidx));
IL2CPP_REGISTER_METHOD(0x023C4BB0, SortKey *, GetResultAndReset, (SortKeyBuffer * __this));
IL2CPP_REGISTER_METHOD(0x023C4BE0, int32_t, GetOptimizedLength, (SortKeyBuffer * __this, Byte__Array * data, int32_t len, uint8_t defaultValue));
IL2CPP_REGISTER_METHOD(0x023C4C40, SortKey *, GetResult, (SortKeyBuffer * __this));
}
