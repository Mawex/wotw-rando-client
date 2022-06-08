#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonBinaryWriter {
IL2CPP_REGISTER_METHOD(0x002FD1D0, DateTimeKind__Enum, get_DateTimeKindHandling, (BsonBinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A488A0, void, Close, (BsonBinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A488D0, void, WriteToken, (BsonBinaryWriter * __this, BsonToken * t));
IL2CPP_REGISTER_METHOD(0x01A48900, void, WriteTokenInternal, (BsonBinaryWriter * __this, BsonToken * t));
IL2CPP_REGISTER_METHODINFO(0x04741AB8, BsonBinaryWriter_WriteTokenInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A494F0, void, WriteString, (BsonBinaryWriter * __this, String * s, int32_t byteCount, Nullable_1_Int32_ calculatedlengthPrefix));
IL2CPP_REGISTER_METHOD(0x01A495F0, void, WriteUtf8Bytes, (BsonBinaryWriter * __this, String * s, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x01A497D0, int32_t, CalculateSize, (BsonBinaryWriter * __this, int32_t stringByteCount));
IL2CPP_REGISTER_METHOD(0x01A497E0, int32_t, CalculateSizeWithLength, (BsonBinaryWriter * __this, int32_t stringByteCount, bool includeSize));
IL2CPP_REGISTER_METHOD(0x01A497F0, int32_t, CalculateSize, (BsonBinaryWriter * __this, BsonToken * t));
IL2CPP_REGISTER_METHODINFO(0x0474BF70, BsonBinaryWriter_CalculateSize_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A49DC0, void, __cctor, ());
}
