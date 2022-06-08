using namespace app;

namespace app::methods::System::Globalization::SortKey {
IL2CPP_REGISTER_METHOD(0x01DEBF40, int32_t, Compare, (SortKey * sortkey1, SortKey * sortkey2));
IL2CPP_REGISTER_METHODINFO(0x0471FDB8, SortKey_Compare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEC160, void, __ctor, (SortKey * __this, int32_t lcid, String * source, CompareOptions__Enum opt));
IL2CPP_REGISTER_METHOD(0x01DEC170, void, __ctor, (SortKey * __this, int32_t lcid, String * source, Byte__Array * buffer, CompareOptions__Enum opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_OriginalString, (SortKey * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Byte__Array *, get_KeyData, (SortKey * __this));
IL2CPP_REGISTER_METHOD(0x01DEC190, bool, Equals, (SortKey * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01DEC290, int32_t, GetHashCode, (SortKey * __this));
IL2CPP_REGISTER_METHOD(0x01DEC320, String *, ToString, (SortKey * __this));
IL2CPP_REGISTER_METHOD(0x01DEC600, void, __ctor, (SortKey * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CA18, SortKey__ctor_2__MethodInfo);
}
