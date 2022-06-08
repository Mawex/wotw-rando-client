#include <interception_macros.h>

namespace app::methods::System::TypeSpec {
IL2CPP_REGISTER_METHOD(0x00519290, bool, get_HasModifiers, (TypeSpec * __this));
IL2CPP_REGISTER_METHOD(0x027C19B0, String *, GetDisplayFullName, (TypeSpec * __this, TypeSpec_DisplayNameFormat__Enum flags));
IL2CPP_REGISTER_METHOD(0x027C20E0, StringBuilder *, GetModifierString, (TypeSpec * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x027C22F0, String *, get_DisplayFullName, (TypeSpec * __this));
IL2CPP_REGISTER_METHOD(0x027C2320, TypeSpec *, Parse, (String * typeName));
IL2CPP_REGISTER_METHODINFO(0x04713C48, TypeSpec_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C2430, String *, UnescapeInternalName, (String * displayName));
IL2CPP_REGISTER_METHOD(0x027C2610, Type *, Resolve, (TypeSpec * __this, Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_ * assemblyResolver, Func_4_System_Reflection_Assembly_String_Boolean_Type_ * typeResolver, bool throwOnError, bool ignoreCase));
IL2CPP_REGISTER_METHODINFO(0x04787298, TypeSpec_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C2EF0, void, AddName, (TypeSpec * __this, String * type_name));
IL2CPP_REGISTER_METHOD(0x027C30A0, void, AddModifier, (TypeSpec * __this, ModifierSpec * md));
IL2CPP_REGISTER_METHOD(0x027C3220, void, SkipSpace, (String * name, int32_t * pos));
IL2CPP_REGISTER_METHOD(0x027C3310, void, BoundCheck, (int32_t idx, String * s));
IL2CPP_REGISTER_METHODINFO(0x04704BB8, TypeSpec_BoundCheck__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C33E0, TypeIdentifier *, ParsedTypeIdentifier, (String * displayName));
IL2CPP_REGISTER_METHOD(0x027C33F0, TypeSpec *, Parse, (String * name, int32_t * p, bool is_recurse, bool allow_aqn));
IL2CPP_REGISTER_METHODINFO(0x04799D48, TypeSpec_Parse_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TypeSpec * __this));
}
