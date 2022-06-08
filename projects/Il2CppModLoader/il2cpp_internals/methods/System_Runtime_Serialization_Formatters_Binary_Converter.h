#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::Converter {
IL2CPP_REGISTER_METHOD(0x01D8F4D0, InternalPrimitiveTypeE__Enum, ToCode, (Type * type));
IL2CPP_REGISTER_METHOD(0x01D8F7A0, bool, IsWriteAsByteArray, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D8F810, int32_t, TypeLength, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D8F890, Type *, ToArrayType, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D8F9D0, void, InitTypeA, ());
IL2CPP_REGISTER_METHOD(0x01D90080, void, InitArrayTypeA, ());
IL2CPP_REGISTER_METHOD(0x01D90750, Type *, ToType, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D90890, Array *, CreatePrimitiveArray, (InternalPrimitiveTypeE__Enum code, int32_t length));
IL2CPP_REGISTER_METHOD(0x01D90A10, bool, IsPrimitiveArray, (Type * type, Object * * typeInformation));
IL2CPP_REGISTER_METHOD(0x01D90D80, void, InitValueA, ());
IL2CPP_REGISTER_METHOD(0x01D913E0, String *, ToComType, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D91520, void, InitTypeCodeA, ());
IL2CPP_REGISTER_METHOD(0x01D91810, TypeCode__Enum, ToTypeCode, (InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D91940, void, InitCodeA, ());
IL2CPP_REGISTER_METHOD(0x01D91C80, InternalPrimitiveTypeE__Enum, ToPrimitiveTypeEnum, (TypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x01D91DB0, Object *, FromString, (String * value, InternalPrimitiveTypeE__Enum code));
IL2CPP_REGISTER_METHOD(0x01D91FE0, void, __cctor, ());
}
