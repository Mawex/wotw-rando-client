#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::TypeTranslator {
IL2CPP_REGISTER_METHOD(0x01C93DB0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01C98520, TypeData *, GetTypeData, (Type * type));
IL2CPP_REGISTER_METHOD(0x01C985C0, TypeData *, GetTypeData, (Type * runtimeType, String * xmlDataType, bool underlyingEnumType));
IL2CPP_REGISTER_METHODINFO(0x04794660, TypeTranslator_GetTypeData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C993D0, TypeData *, GetPrimitiveTypeData, (String * typeName));
IL2CPP_REGISTER_METHOD(0x01C99470, TypeData *, GetPrimitiveTypeData, (String * typeName, bool nullable));
IL2CPP_REGISTER_METHODINFO(0x047677F0, TypeTranslator_GetPrimitiveTypeData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C99720, TypeData *, FindPrimitiveTypeData, (String * typeName));
IL2CPP_REGISTER_METHOD(0x01C99840, String *, GetArrayName, (String * elemName));
IL2CPP_REGISTER_METHOD(0x01C99A00, void, ParseArrayType, (String * arrayType, String * * type, String * * ns, String * * dimensions));
IL2CPP_REGISTER_METHODINFO(0x0472E7E0, TypeTranslator_ParseArrayType__MethodInfo);
}
