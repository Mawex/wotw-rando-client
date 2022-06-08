using namespace app;

namespace app::methods::System::String {
IL2CPP_REGISTER_METHOD(0x01E26B60, String *, Join, (String * separator, String__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0476FE10, String_Join__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E26C40, String *, Join, (String * separator, IEnumerable_1_System_String_ * values));
IL2CPP_REGISTER_METHODINFO(0x0477F650, String_Join_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E26F60, String *, Join, (String * separator, String__Array * value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047517A8, String_Join_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E27360, int32_t, CompareOrdinalIgnoreCaseHelper, (String * strA, String * strB));
IL2CPP_REGISTER_METHOD(0x01E274A0, bool, EqualsHelper, (String * strA, String * strB));
IL2CPP_REGISTER_METHOD(0x01E27530, int32_t, CompareOrdinalHelper, (String * strA, String * strB));
IL2CPP_REGISTER_METHOD(0x01E276F0, bool, Equals, (String * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0470F748, String_Equals__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E27800, bool, Equals, (String * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473D8B0, String_Equals_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E278F0, bool, Equals, (String * __this, String * value, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x0473B330, String_Equals_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, Equals, (String * a, String * b));
IL2CPP_REGISTER_METHOD(0x01E27D00, bool, Equals, (String * a, String * b, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x04750ED0, String_Equals_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, operator___, (String * a, String * b));
IL2CPP_REGISTER_METHOD(0x01E280E0, bool, operator___, (String * a, String * b));
IL2CPP_REGISTER_METHOD(0x01E28120, uint16_t, get_Chars, (String * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047230C0, String_get_Chars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E281E0, void, CopyTo, (String * __this, int32_t sourceIndex, Char__Array * destination, int32_t destinationIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04747348, String_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E28430, Char__Array *, ToCharArray, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E28500, bool, IsNullOrEmpty, (String * value));
IL2CPP_REGISTER_METHOD(0x01E28510, bool, IsNullOrWhiteSpace, (String * value));
IL2CPP_REGISTER_METHOD(0x01E285F0, int32_t, GetHashCode, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E285F0, int32_t, GetLegacyNonRandomizedHashCode, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E28640, String__Array *, Split, (String * __this, Char__Array * separator));
IL2CPP_REGISTER_METHOD(0x01E28660, String__Array *, Split, (String * __this, Char__Array * separator, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E28680, String__Array *, Split, (String * __this, Char__Array * separator, StringSplitOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x01E286A0, String__Array *, SplitInternal, (String * __this, Char__Array * separator, int32_t count, StringSplitOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x0472C968, String_SplitInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E288F0, String__Array *, Split, (String * __this, String__Array * separator, StringSplitOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x01E28910, String__Array *, Split, (String * __this, String__Array * separator, int32_t count, StringSplitOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x0473F220, String_Split_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E28BB0, String__Array *, InternalSplitKeepEmptyEntries, (String * __this, Int32__Array * sepList, Int32__Array * lengthList, int32_t numReplaces, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E28EB0, String__Array *, InternalSplitOmitEmptyEntries, (String * __this, Int32__Array * sepList, Int32__Array * lengthList, int32_t numReplaces, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E29260, int32_t, MakeSeparatorList, (String * __this, Char__Array * separator, Int32__Array * * sepList));
IL2CPP_REGISTER_METHOD(0x01E29460, int32_t, MakeSeparatorList, (String * __this, String__Array * separators, Int32__Array * * sepList, Int32__Array * * lengthList));
IL2CPP_REGISTER_METHOD(0x01E29620, String *, Substring, (String * __this, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E29630, String *, Substring, (String * __this, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x0478BE50, String_Substring_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E29840, String *, InternalSubString, (String * __this, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E298B0, String *, Trim, (String * __this, Char__Array * trimChars));
IL2CPP_REGISTER_METHOD(0x01E298E0, String *, TrimStart, (String * __this, Char__Array * trimChars));
IL2CPP_REGISTER_METHOD(0x01E299A0, String *, TrimEnd, (String * __this, Char__Array * trimChars));
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, uint16_t * value));
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, uint16_t * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, int8_t * value));
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, int8_t * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E29A60, void, __ctor, (String * __this, int8_t * value, int32_t startIndex, int32_t length, Encoding * enc));
IL2CPP_REGISTER_METHOD(0x01E29A80, String *, CreateStringFromEncoding, (uint8_t * bytes, int32_t byteLength, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01E29BB0, String *, Normalize, (String * __this, NormalizationForm__Enum normalizationForm));
IL2CPP_REGISTER_METHOD(0x01E29E00, String *, FastAllocateString, (int32_t length));
IL2CPP_REGISTER_METHOD(0x01E29E10, void, FillStringChecked, (String * dest, int32_t destPos, String * src));
IL2CPP_REGISTER_METHODINFO(0x04784978, String_FillStringChecked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, Char__Array * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, Char__Array * value));
IL2CPP_REGISTER_METHOD(0x01E29F00, void, wstrcpy, (uint16_t * dmem, uint16_t * smem, int32_t charCount));
IL2CPP_REGISTER_METHOD(0x01E29F10, String *, CtorCharArray, (String * __this, Char__Array * value));
IL2CPP_REGISTER_METHOD(0x01E2A000, String *, CtorCharArrayStartLength, (String * __this, Char__Array * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x047644C8, String_CtorCharArrayStartLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2A210, int32_t, wcslen, (uint16_t * ptr));
IL2CPP_REGISTER_METHOD(0x01E2A270, String *, CtorCharPtr, (String * __this, uint16_t * ptr));
IL2CPP_REGISTER_METHODINFO(0x047294C0, String_CtorCharPtr__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2A420, String *, CtorCharPtrStartLength, (String * __this, uint16_t * ptr, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04743350, String_CtorCharPtrStartLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E29A50, void, __ctor, (String * __this, uint16_t c, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E2A640, int32_t, Compare, (String * strA, String * strB));
IL2CPP_REGISTER_METHOD(0x01E2A750, int32_t, Compare, (String * strA, String * strB, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01E2A8E0, int32_t, Compare, (String * strA, String * strB, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x04725A88, String_Compare_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2ACB0, int32_t, Compare, (String * strA, String * strB, bool ignoreCase, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0473B520, String_Compare_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2ADE0, int32_t, Compare, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E2AF50, int32_t, Compare, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t length, bool ignoreCase, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0470DC60, String_Compare_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2B0F0, int32_t, Compare, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t length, CultureInfo * culture, CompareOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x047930F8, String_Compare_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2B250, int32_t, Compare, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t length, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x04718078, String_Compare_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2B810, int32_t, CompareTo, (String * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04701680, String_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2B930, int32_t, CompareTo, (String * __this, String * strB));
IL2CPP_REGISTER_METHOD(0x01E2BA50, int32_t, CompareOrdinal, (String * strA, String * strB));
IL2CPP_REGISTER_METHOD(0x01E2BA90, int32_t, CompareOrdinal, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E2BAD0, bool, Contains, (String * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E2BB00, bool, EndsWith, (String * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E2BB10, bool, EndsWith, (String * __this, String * value, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x0473A7E8, String_EndsWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2BED0, bool, EndsWith, (String * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01E2BF00, int32_t, IndexOf, (String * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01E2BF20, int32_t, IndexOf, (String * __this, uint16_t value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E2BF40, int32_t, IndexOfAny, (String * __this, Char__Array * anyOf));
IL2CPP_REGISTER_METHOD(0x01E2BF60, int32_t, IndexOfAny, (String * __this, Char__Array * anyOf, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E2BF80, int32_t, IndexOf, (String * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E2BFA0, int32_t, IndexOf, (String * __this, String * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E2BFC0, int32_t, IndexOf, (String * __this, String * value, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHOD(0x01E2BFF0, int32_t, IndexOf, (String * __this, String * value, int32_t startIndex, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHOD(0x01E2C020, int32_t, IndexOf, (String * __this, String * value, int32_t startIndex, int32_t count, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x047798F8, String_IndexOf_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2C550, int32_t, LastIndexOf, (String * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01E2C570, int32_t, LastIndexOf, (String * __this, uint16_t value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E2C590, int32_t, LastIndexOfAny, (String * __this, Char__Array * anyOf));
IL2CPP_REGISTER_METHOD(0x01E2C5B0, int32_t, LastIndexOfAny, (String * __this, Char__Array * anyOf, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x01E2C5D0, int32_t, LastIndexOf, (String * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E2C600, int32_t, LastIndexOf, (String * __this, String * value, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHOD(0x01E2C630, int32_t, LastIndexOf, (String * __this, String * value, int32_t startIndex, int32_t count, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x0476DA88, String_LastIndexOf_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2CBA0, String *, PadLeft, (String * __this, int32_t totalWidth, uint16_t paddingChar));
IL2CPP_REGISTER_METHOD(0x01E2CBC0, String *, PadRight, (String * __this, int32_t totalWidth));
IL2CPP_REGISTER_METHOD(0x01E2CBE0, String *, PadRight, (String * __this, int32_t totalWidth, uint16_t paddingChar));
IL2CPP_REGISTER_METHOD(0x01E2CC00, bool, StartsWith, (String * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473E440, String_StartsWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2CCD0, bool, StartsWith, (String * __this, String * value, StringComparison__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x04776C48, String_StartsWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2D090, String *, ToLower, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E2D150, String *, ToLower, (String * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04765D38, String_ToLower_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2D240, String *, ToLowerInvariant, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E2D2F0, String *, ToUpper, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E2D3B0, String *, ToUpper, (String * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04794460, String_ToUpper_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2D4A0, String *, ToUpperInvariant, (String * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, ToString, (String * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, ToString, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, Clone, (String * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsBOMWhitespace, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x01E2D550, String *, Trim, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E2D560, String *, TrimHelper, (String * __this, int32_t trimType));
IL2CPP_REGISTER_METHOD(0x01E2D6D0, String *, TrimHelper, (String * __this, Char__Array * trimChars, int32_t trimType));
IL2CPP_REGISTER_METHOD(0x01E2D800, String *, CreateTrimmedString, (String * __this, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x01E2D8E0, String *, Insert, (String * __this, int32_t startIndex, String * value));
IL2CPP_REGISTER_METHODINFO(0x04753A40, String_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2DA90, String *, Replace, (String * __this, uint16_t oldChar, uint16_t newChar));
IL2CPP_REGISTER_METHOD(0x01E2DBC0, String *, Replace, (String * __this, String * oldValue, String * newValue));
IL2CPP_REGISTER_METHODINFO(0x0473AE70, String_Replace_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2DD50, String *, Remove, (String * __this, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04784AB0, String_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2DF40, String *, Remove, (String * __this, int32_t startIndex));
IL2CPP_REGISTER_METHODINFO(0x04794BB8, String_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2E060, String *, Format, (String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x01E2E0C0, String *, Format, (String * format, Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x01E2E120, String *, Format, (String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x01E2E180, String *, Format, (String * format, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0470C738, String_Format_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2E2F0, String *, Format, (IFormatProvider * provider, String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x01E2E360, String *, Format, (IFormatProvider * provider, String * format, Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x01E2E3D0, String *, Format, (IFormatProvider * provider, String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x01E2E450, String *, Format, (IFormatProvider * provider, String * format, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0478DA48, String_Format_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2E5D0, String *, FormatHelper, (IFormatProvider * provider, String * format, ParamsArray args));
IL2CPP_REGISTER_METHODINFO(0x04792100, String_FormatHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2E730, String *, Copy, (String * str));
IL2CPP_REGISTER_METHODINFO(0x047333A0, String_Copy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2E820, String *, Concat, (Object * arg0));
IL2CPP_REGISTER_METHOD(0x01E2E8C0, String *, Concat, (Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x01E2E9C0, String *, Concat, (Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x01E2EB00, String *, Concat, (Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0477D878, String_Concat_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E2ED50, String *, Concat, (String * str0, String * str1));
IL2CPP_REGISTER_METHOD(0x01E2EE50, String *, Concat, (String * str0, String * str1, String * str2));
IL2CPP_REGISTER_METHOD(0x01E2EFA0, String *, Concat, (String * str0, String * str1, String * str2, String * str3));
IL2CPP_REGISTER_METHOD(0x01E2F140, String *, ConcatArray, (String__Array * values, int32_t totalLength));
IL2CPP_REGISTER_METHOD(0x01E2F200, String *, Concat, (String__Array * values));
IL2CPP_REGISTER_METHODINFO(0x047970F8, String_Concat_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E3D980, TypeCode__Enum, GetTypeCode, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E2F3C0, bool, IConvertible_ToBoolean, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F4F0, uint16_t, IConvertible_ToChar, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F670, int8_t, IConvertible_ToSByte, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F740, uint8_t, IConvertible_ToByte, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F820, int16_t, IConvertible_ToInt16, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F900, uint16_t, IConvertible_ToUInt16, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2F9E0, int32_t, IConvertible_ToInt32, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FAC0, uint32_t, IConvertible_ToUInt32, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FBA0, int64_t, IConvertible_ToInt64, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FC80, uint64_t, IConvertible_ToUInt64, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FD60, float, IConvertible_ToSingle, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FE40, double, IConvertible_ToDouble, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FEF0, Decimal, IConvertible_ToDecimal, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E2FFC0, DateTime, IConvertible_ToDateTime, (String * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E30110, Object *, IConvertible_ToType, (String * __this, Type * type, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E301D0, IEnumerator_1_System_Char_ *, IEnumerable_char__GetEnumerator, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E30320, IEnumerator *, IEnumerable_GetEnumerator, (String * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Length, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E30470, int32_t, CompareOrdinalUnchecked, (String * strA, int32_t indexA, int32_t lenA, String * strB, int32_t indexB, int32_t lenB));
IL2CPP_REGISTER_METHOD(0x01E30600, int32_t, IndexOf, (String * __this, uint16_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04751F48, String_IndexOf_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E307A0, int32_t, IndexOfUnchecked, (String * __this, uint16_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E308A0, int32_t, IndexOfUnchecked, (String * __this, String * value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E309C0, int32_t, IndexOfAny, (String * __this, Char__Array * anyOf, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04719A30, String_IndexOfAny_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E30BF0, int32_t, IndexOfAnyUnchecked, (String * __this, Char__Array * anyOf, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E30D20, int32_t, LastIndexOf, (String * __this, uint16_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04763D10, String_LastIndexOf_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E30EB0, int32_t, LastIndexOfUnchecked, (String * __this, uint16_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E30FC0, int32_t, LastIndexOfAny, (String * __this, Char__Array * anyOf, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0471E680, String_LastIndexOfAny_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E311F0, int32_t, LastIndexOfAnyUnchecked, (String * __this, Char__Array * anyOf, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E312B0, int32_t, nativeCompareOrdinalEx, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04789EA8, String_nativeCompareOrdinalEx__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E31490, String *, ReplaceInternal, (String * __this, uint16_t oldChar, uint16_t newChar));
IL2CPP_REGISTER_METHOD(0x01E315A0, String *, ReplaceInternal, (String * __this, String * oldValue, String * newValue));
IL2CPP_REGISTER_METHODINFO(0x0478CBA0, String_ReplaceInternal_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E316E0, String *, ReplaceUnchecked, (String * __this, String * oldValue, String * newValue));
IL2CPP_REGISTER_METHODINFO(0x0475F3B8, String_ReplaceUnchecked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E31A80, String *, ReplaceFallback, (String * __this, String * oldValue, String * newValue, int32_t testedCount));
IL2CPP_REGISTER_METHOD(0x01E31CE0, String *, PadHelper, (String * __this, int32_t totalWidth, uint16_t paddingChar, bool isRightPadded));
IL2CPP_REGISTER_METHODINFO(0x047137D0, String_PadHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E31EE0, bool, StartsWithOrdinalUnchecked, (String * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E31F30, bool, IsAscii, (String * __this));
IL2CPP_REGISTER_METHOD(0x01E31F60, void, CharCopy, (uint16_t * dest, uint16_t * src, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E31FB0, void, memset, (uint8_t * dest, int32_t val, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32090, void, memcpy, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E320A0, void, bzero, (uint8_t * dest, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32150, void, bzero_aligned_1, (uint8_t * dest, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32160, void, bzero_aligned_2, (uint8_t * dest, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32170, void, bzero_aligned_4, (uint8_t * dest, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32180, void, bzero_aligned_8, (uint8_t * dest, int32_t len));
IL2CPP_REGISTER_METHOD(0x01E32190, void, memcpy_aligned_1, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E321A0, void, memcpy_aligned_2, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E321B0, void, memcpy_aligned_4, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E321C0, void, memcpy_aligned_8, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E321D0, String *, CreateString, (String * __this, int8_t * value));
IL2CPP_REGISTER_METHODINFO(0x04764878, String_CreateString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E322D0, String *, CreateString, (String * __this, int8_t * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E322F0, String *, CreateString, (String * __this, uint16_t * value));
IL2CPP_REGISTER_METHOD(0x01E32300, String *, CreateString, (String * __this, uint16_t * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E32310, String *, CreateString, (String * __this, Char__Array * val, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x01E32320, String *, CreateString, (String * __this, Char__Array * val));
IL2CPP_REGISTER_METHOD(0x01E32410, String *, CreateString, (String * __this, uint16_t c, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04775778, String_CreateString_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E32540, String *, CreateString, (String * __this, int8_t * value, int32_t startIndex, int32_t length, Encoding * enc));
IL2CPP_REGISTER_METHODINFO(0x04759EE8, String_CreateString_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01541DC0, String *, Join, (String * separator, IEnumerable_1_System_Object_ * values));
IL2CPP_REGISTER_METHODINFO(0x0474BEB8, String_Join_3__MethodInfo);
}
