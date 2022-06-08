#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::ConvertUtils {
IL2CPP_REGISTER_METHOD(0x01C01D10, PrimitiveTypeCode__Enum, GetTypeCode, (Type * t));
IL2CPP_REGISTER_METHOD(0x01C01DC0, PrimitiveTypeCode__Enum, GetTypeCode, (Type * t, bool * isEnum));
IL2CPP_REGISTER_METHOD(0x01C020D0, TypeInformation_1 *, GetTypeInformation, (IConvertible * convertable));
IL2CPP_REGISTER_METHOD(0x01C021D0, bool, IsConvertible, (Type * t));
IL2CPP_REGISTER_METHOD(0x01C022A0, TimeSpan, ParseTimeSpan, (String * input));
IL2CPP_REGISTER_METHOD(0x01C02370, Func_2_Object_Object_ *, CreateCastConverter, (StructMultiKey_2_System_Type_System_Type_ t));
IL2CPP_REGISTER_METHODINFO(0x04756170, ConvertUtils_CreateCastConverter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C027B0, BigInteger_2, ToBigInteger, (Object * value));
IL2CPP_REGISTER_METHODINFO(0x04792860, ConvertUtils_ToBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C02BE0, Object *, FromBigInteger, (BigInteger_2 i, Type * targetType));
IL2CPP_REGISTER_METHODINFO(0x0477B610, ConvertUtils_FromBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C03040, bool, TryConvert, (Object * initialValue, CultureInfo * culture, Type * targetType, Object * * value));
IL2CPP_REGISTER_METHOD(0x01C03140, ConvertUtils_ConvertResult__Enum, TryConvertInternal, (Object * initialValue, CultureInfo * culture, Type * targetType, Object * * value));
IL2CPP_REGISTER_METHODINFO(0x04758F38, ConvertUtils_TryConvertInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C03D00, Object *, ConvertOrCast, (Object * initialValue, CultureInfo * culture, Type * targetType));
IL2CPP_REGISTER_METHOD(0x01C03EC0, Object *, EnsureTypeAssignable, (Object * value, Type * initialType, Type * targetType));
IL2CPP_REGISTER_METHODINFO(0x04746B48, ConvertUtils_EnsureTypeAssignable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C04120, bool, VersionTryParse, (String * input, Version * * result));
IL2CPP_REGISTER_METHOD(0x01C04280, bool, IsInteger, (Object * value));
IL2CPP_REGISTER_METHOD(0x01C043A0, ParseResult__Enum, Int32TryParse, (Char__Array * chars, int32_t start, int32_t length, int32_t * value));
IL2CPP_REGISTER_METHOD(0x01C04570, ParseResult__Enum, Int64TryParse, (Char__Array * chars, int32_t start, int32_t length, int64_t * value));
IL2CPP_REGISTER_METHOD(0x01C04710, ParseResult__Enum, DecimalTryParse, (Char__Array * chars, int32_t start, int32_t length, Decimal * value));
IL2CPP_REGISTER_METHOD(0x01C05580, bool, TryConvertGuid, (String * s, Guid * g));
IL2CPP_REGISTER_METHOD(0x01C05640, bool, TryHexTextToInt, (Char__Array * text, int32_t start, int32_t end, int32_t * value));
IL2CPP_REGISTER_METHOD(0x01C056F0, void, __cctor, ());
}
