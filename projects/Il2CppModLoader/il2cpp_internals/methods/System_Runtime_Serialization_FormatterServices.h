#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::FormatterServices {
IL2CPP_REGISTER_METHOD(0x01D88670, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01D888B0, MemberInfo_1__Array *, GetSerializableMembers, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01D88AB0, bool, CheckSerializable, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01D88AE0, MemberInfo_1__Array *, InternalGetSerializableMembers, (RuntimeType * type));
IL2CPP_REGISTER_METHODINFO(0x0477C6E8, FormatterServices_InternalGetSerializableMembers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D89290, bool, GetParentTypes, (RuntimeType * parentType, RuntimeType__Array * * parentTypes, int32_t * parentTypeCount));
IL2CPP_REGISTER_METHOD(0x01D89620, MemberInfo_1__Array *, GetSerializableMembers, (Type * type, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04796F10, FormatterServices_GetSerializableMembers_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D89A90, Object *, GetUninitializedObject, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x047403D8, FormatterServices_GetUninitializedObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D89CB0, Object *, GetSafeUninitializedObject, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x047790F0, FormatterServices_GetSafeUninitializedObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A98CD0, Object *, nativeGetUninitializedObject, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01A98CD0, Object *, nativeGetSafeUninitializedObject, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetEnableUnsafeTypeForwarders, ());
IL2CPP_REGISTER_METHOD(0x01D89F70, bool, UnsafeTypeForwardersIsEnabled, ());
IL2CPP_REGISTER_METHOD(0x01D8A0A0, void, SerializationSetValue, (MemberInfo_1 * fi, Object * target, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0475EA90, FormatterServices_SerializationSetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8A360, Object *, PopulateObjectMembers, (Object * obj, MemberInfo_1__Array * members, Object__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04747920, FormatterServices_PopulateObjectMembers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8A6C0, Object__Array *, GetObjectData, (Object * obj, MemberInfo_1__Array * members));
IL2CPP_REGISTER_METHODINFO(0x04709378, FormatterServices_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8AAB0, Type *, GetTypeFromAssembly, (Assembly * assem, String * name));
IL2CPP_REGISTER_METHODINFO(0x0475F1B8, FormatterServices_GetTypeFromAssembly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8AB90, Assembly *, LoadAssemblyFromString, (String * assemblyName));
IL2CPP_REGISTER_METHOD(0x01D8ABA0, Assembly *, LoadAssemblyFromStringNoThrow, (String * assemblyName));
IL2CPP_REGISTER_METHOD(0x01D8AC60, String *, GetClrAssemblyName, (Type * type, bool * hasTypeForwardedFrom));
IL2CPP_REGISTER_METHODINFO(0x0476D290, FormatterServices_GetClrAssemblyName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8AE10, String *, GetClrTypeFullName, (Type * type));
IL2CPP_REGISTER_METHOD(0x01D8AEF0, String *, GetClrTypeFullNameForArray, (Type * type));
IL2CPP_REGISTER_METHOD(0x01D8B1E0, String *, GetClrTypeFullNameForNonArrayTypes, (Type * type));
}
