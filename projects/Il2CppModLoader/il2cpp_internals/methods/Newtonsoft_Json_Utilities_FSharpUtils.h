#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::FSharpUtils {
IL2CPP_REGISTER_METHOD(0x01C11750, void, set_FSharpCoreAssembly, (Assembly * value));
IL2CPP_REGISTER_METHOD(0x01C11800, MethodCall_2_System_Object_System_Object_ *, get_IsUnion, ());
IL2CPP_REGISTER_METHOD(0x01C118A0, void, set_IsUnion, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11950, MethodCall_2_System_Object_System_Object_ *, get_GetUnionCases, ());
IL2CPP_REGISTER_METHOD(0x01C119F0, void, set_GetUnionCases, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11AA0, MethodCall_2_System_Object_System_Object_ *, get_PreComputeUnionTagReader, ());
IL2CPP_REGISTER_METHOD(0x01C11B40, void, set_PreComputeUnionTagReader, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11BF0, MethodCall_2_System_Object_System_Object_ *, get_PreComputeUnionReader, ());
IL2CPP_REGISTER_METHOD(0x01C11C90, void, set_PreComputeUnionReader, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11D40, MethodCall_2_System_Object_System_Object_ *, get_PreComputeUnionConstructor, ());
IL2CPP_REGISTER_METHOD(0x01C11DE0, void, set_PreComputeUnionConstructor, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11E90, Func_2_Object_Object_ *, get_GetUnionCaseInfoDeclaringType, ());
IL2CPP_REGISTER_METHOD(0x01C11F30, void, set_GetUnionCaseInfoDeclaringType, (Func_2_Object_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C11FE0, Func_2_Object_Object_ *, get_GetUnionCaseInfoName, ());
IL2CPP_REGISTER_METHOD(0x01C12080, void, set_GetUnionCaseInfoName, (Func_2_Object_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C12130, Func_2_Object_Object_ *, get_GetUnionCaseInfoTag, ());
IL2CPP_REGISTER_METHOD(0x01C121D0, void, set_GetUnionCaseInfoTag, (Func_2_Object_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C12280, MethodCall_2_System_Object_System_Object_ *, get_GetUnionCaseInfoFields, ());
IL2CPP_REGISTER_METHOD(0x01C12320, void, set_GetUnionCaseInfoFields, (MethodCall_2_System_Object_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01C123D0, void, EnsureInitialized, (Assembly * fsharpCoreAssembly));
IL2CPP_REGISTER_METHOD(0x01C12F10, MethodInfo_1 *, GetMethodWithNonPublicFallback, (Type * type, String * methodName, BindingFlags__Enum bindingFlags));
IL2CPP_REGISTER_METHOD(0x01C12FF0, MethodCall_2_System_Object_System_Object_ *, CreateFSharpFuncCall, (Type * type, String * methodName));
IL2CPP_REGISTER_METHOD(0x01C13340, ObjectConstructor_1_System_Object_ *, CreateSeq, (Type * t));
IL2CPP_REGISTER_METHOD(0x01C134D0, ObjectConstructor_1_System_Object_ *, CreateMap, (Type * keyType, Type * valueType));
IL2CPP_REGISTER_METHOD(0x01C13700, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F0440, ObjectConstructor_1_System_Object_ *, BuildMapCreator, ());
}
