#include <interception_macros.h>

namespace app::methods::System::Reflection::AssemblyName {
IL2CPP_REGISTER_METHOD(0x02283AA0, void, __ctor, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02283AB0, bool, ParseAssemblyName, (void * name, MonoAssemblyName * aname, bool * is_version_definited, bool * is_token_defined));
IL2CPP_REGISTER_METHOD(0x02283AC0, void, __ctor, (AssemblyName * __this, String * assemblyName));
IL2CPP_REGISTER_METHODINFO(0x0473D3C0, AssemblyName__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02283DA0, void, __ctor, (AssemblyName * __this, SerializationInfo * si, StreamingContext sc));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (AssemblyName * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, CultureInfo *, get_CultureInfo, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_CultureInfo, (AssemblyName * __this, CultureInfo * value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, AssemblyNameFlags__Enum, get_Flags, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Flags, (AssemblyName * __this, AssemblyNameFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x02284220, String *, get_FullName, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Version *, get_Version, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02284720, void, set_Version, (AssemblyName * __this, Version * value));
IL2CPP_REGISTER_METHOD(0x02284810, String *, ToString, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Byte__Array *, GetPublicKey, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02284860, Byte__Array *, GetPublicKeyToken, (AssemblyName * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E750, AssemblyName_GetPublicKeyToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02284970, bool, get_IsPublicKeyValid, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02284A40, Byte__Array *, InternalGetPublicKeyToken, (AssemblyName * __this));
IL2CPP_REGISTER_METHODINFO(0x047949A0, AssemblyName_InternalGetPublicKeyToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173D7D0, void, get_public_token, (uint8_t * token, uint8_t * pubkey, int32_t len));
IL2CPP_REGISTER_METHOD(0x02284B50, Byte__Array *, ComputePublicKeyToken, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02284C40, void, SetPublicKey, (AssemblyName * __this, Byte__Array * publicKey));
IL2CPP_REGISTER_METHOD(0x02284C60, void, GetObjectData, (AssemblyName * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04710598, AssemblyName_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02284EB0, Object *, Clone, (AssemblyName * __this));
IL2CPP_REGISTER_METHOD(0x02285060, void, OnDeserialization, (AssemblyName * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x02285070, MonoAssemblyName *, GetNativeName, (void * assembly_ptr));
IL2CPP_REGISTER_METHOD(0x02285080, void, FillName, (AssemblyName * __this, MonoAssemblyName * native, String * codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef));
IL2CPP_REGISTER_METHOD(0x02285530, AssemblyName *, Create, (Assembly * assembly, bool fillCodebase));
}
