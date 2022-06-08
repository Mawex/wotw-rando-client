using namespace app;

namespace app::methods::Mono::Globalization::Unicode::MSCompatUnicodeTable {
IL2CPP_REGISTER_METHOD(0x023BA2C0, TailoringInfo *, GetTailoringInfo, (int32_t lcid));
IL2CPP_REGISTER_METHOD(0x023BA470, void, BuildTailoringTables, (CultureInfo * culture, TailoringInfo * t, Contraction__Array * * contractions, Level2Map__Array * * diacriticals));
IL2CPP_REGISTER_METHODINFO(0x04764E80, MSCompatUnicodeTable_BuildTailoringTables__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023BAE80, void, SetCJKReferences, (String * name, CodePointIndexer * * cjkIndexer, uint8_t * * catTable, uint8_t * * lv1Table, CodePointIndexer * * lv2Indexer, uint8_t * * lv2Table));
IL2CPP_REGISTER_METHOD(0x023BB200, uint8_t, Category, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x023BB300, uint8_t, Level1, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x023BB400, uint8_t, Level2, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x023BB500, uint8_t, Level3, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x023BB600, bool, IsIgnorable, (int32_t cp, uint8_t flag));
IL2CPP_REGISTER_METHOD(0x023BB770, bool, IsIgnorableNonSpacing, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x023BB810, int32_t, ToKanaTypeInsensitive, (int32_t i));
IL2CPP_REGISTER_METHOD(0x023BB830, int32_t, ToWidthCompat, (int32_t i));
IL2CPP_REGISTER_METHOD(0x023BB9B0, bool, HasSpecialWeight, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x023BBA20, bool, IsHalfWidthKana, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x023BBA40, bool, IsHiragana, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x023BBA60, bool, IsJapaneseSmallLetter, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x023BBBD0, bool, get_IsReady, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023BBC70, void *, GetResource, (String * name));
IL2CPP_REGISTER_METHODINFO(0x0472AB38, MSCompatUnicodeTable_GetResource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023BBD20, uint32_t, UInt32FromBytePtr, (uint8_t * raw, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x023BBD60, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023BC3C0, void, FillCJK, (String * culture, CodePointIndexer * * cjkIndexer, uint8_t * * catTable, uint8_t * * lv1Table, CodePointIndexer * * lv2Indexer, uint8_t * * lv2Table));
IL2CPP_REGISTER_METHOD(0x023BC5C0, void, FillCJKCore, (String * culture, CodePointIndexer * * cjkIndexer, uint8_t * * catTable, uint8_t * * lv1Table, CodePointIndexer * * cjkLv2Indexer, uint8_t * * lv2Table));
}
