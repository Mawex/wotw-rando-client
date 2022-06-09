#include <interception_macros.h>

namespace app::methods::System_Reflection::AssemblyName {
IL2CPP_REGISTER_METHOD(0x02283AA0, void, __ctor_1, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02283AB0, bool, ParseAssemblyName, (app::void * name, app::MonoAssemblyName * aname, app::bool * is_version_definited, app::bool * is_token_defined));
IL2CPP_REGISTER_METHOD(0x02283AC0, void, __ctor_2, (app::AssemblyName * this_ptr, app::String * assembly_name));
IL2CPP_REGISTER_METHODINFO(0x0473D3C0, AssemblyName__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02283DA0, void, __ctor_3, (app::AssemblyName * this_ptr, app::SerializationInfo * si, app::StreamingContext sc));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::AssemblyName * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, CultureInfo *, get_CultureInfo, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_CultureInfo, (app::AssemblyName * this_ptr, app::CultureInfo * value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, AssemblyNameFlags__Enum, get_Flags, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Flags, (app::AssemblyName * this_ptr, app::AssemblyNameFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x02284220, String *, get_FullName, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, Version *, get_Version, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02284720, void, set_Version, (app::AssemblyName * this_ptr, app::Version * value));
IL2CPP_REGISTER_METHOD(0x02284810, String *, ToString, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Byte__Array *, GetPublicKey, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02284860, Byte__Array *, GetPublicKeyToken, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472E750, AssemblyName_GetPublicKeyToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02284970, bool, get_IsPublicKeyValid, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02284A40, Byte__Array *, InternalGetPublicKeyToken, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047949A0, AssemblyName_InternalGetPublicKeyToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173D7D0, void, get_public_token, (app::uint8_t * token, app::uint8_t * pubkey, int32_t len));
IL2CPP_REGISTER_METHOD(0x02284B50, Byte__Array *, ComputePublicKeyToken, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02284C40, void, SetPublicKey, (app::AssemblyName * this_ptr, app::Byte__Array * public_key));
IL2CPP_REGISTER_METHOD(0x02284C60, void, GetObjectData, (app::AssemblyName * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04710598, AssemblyName_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02284EB0, Object *, Clone, (app::AssemblyName * this_ptr));
IL2CPP_REGISTER_METHOD(0x02285060, void, OnDeserialization, (app::AssemblyName * this_ptr, app::Object * sender));
IL2CPP_REGISTER_METHOD(0x02285070, MonoAssemblyName *, GetNativeName, (app::void * assembly_ptr));
IL2CPP_REGISTER_METHOD(0x02285080, void, FillName, (app::AssemblyName * this_ptr, app::MonoAssemblyName * native, app::String * code_base, bool add_version, bool add_publickey, bool default_token, bool assembly_ref));
IL2CPP_REGISTER_METHOD(0x02285530, AssemblyName *, Create, (app::Assembly * assembly, bool fill_codebase));
}
