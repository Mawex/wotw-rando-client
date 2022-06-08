#include <interception_macros.h>

namespace app::methods::System::Text::Normalization {
IL2CPP_REGISTER_METHOD(0x0245A300, uint32_t, PropValue, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x0245A480, int32_t, CharMapIdx, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x0245A600, uint8_t, GetCombiningClass, (int32_t c));
IL2CPP_REGISTER_METHOD(0x0245A700, int32_t, GetPrimaryCompositeFromMapIndex, (int32_t src));
IL2CPP_REGISTER_METHOD(0x0245A800, int32_t, GetPrimaryCompositeHelperIndex, (int32_t cp));
IL2CPP_REGISTER_METHOD(0x0245A900, String *, Compose, (String * source, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245AA60, StringBuilder *, Combine, (String * source, int32_t start, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245AC80, void, Combine, (StringBuilder * sb, int32_t i, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245ADE0, int32_t, CombineHangul, (StringBuilder * sb, String * s, int32_t current));
IL2CPP_REGISTER_METHOD(0x0245AFF0, int32_t, Fetch, (StringBuilder * sb, String * s, int32_t i));
IL2CPP_REGISTER_METHOD(0x0245B040, int32_t, TryComposeWithPreviousStarter, (StringBuilder * sb, String * s, int32_t current));
IL2CPP_REGISTER_METHOD(0x0245B470, int32_t, TryCompose, (int32_t i, int32_t starter, int32_t candidate));
IL2CPP_REGISTER_METHOD(0x0245B640, String *, Decompose, (String * source, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245B730, void, Decompose, (String * source, StringBuilder * * sb, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245B8E0, void, ReorderCanonical, (String * src, StringBuilder * * sb, int32_t start));
IL2CPP_REGISTER_METHOD(0x0245BCA0, void, DecomposeChar, (StringBuilder * * sb, Int32__Array * * buf, String * s, int32_t i, int32_t checkType, int32_t * start));
IL2CPP_REGISTER_METHOD(0x0245BFE0, NormalizationCheck__Enum, QuickCheck, (uint16_t c, int32_t type));
IL2CPP_REGISTER_METHOD(0x0245C1A0, int32_t, GetCanonicalHangul, (int32_t s, Int32__Array * buf, int32_t bufIdx));
IL2CPP_REGISTER_METHOD(0x0245C2F0, int32_t, GetCanonical, (int32_t c, Int32__Array * buf, int32_t bufIdx, int32_t checkType));
IL2CPP_REGISTER_METHOD(0x0245C810, String *, Normalize, (String * source, NormalizationForm__Enum normalizationForm));
IL2CPP_REGISTER_METHOD(0x0245C950, String *, Normalize, (String * source, int32_t type));
IL2CPP_REGISTER_METHOD(0x0245CC10, void, load_normalization_resource, (void * * props, void * * mappedChars, void * * charMapIndex, void * * helperIndex, void * * mapIdxToComposite, void * * combiningClass));
IL2CPP_REGISTER_METHOD(0x0245CC60, void, __cctor, ());
}
