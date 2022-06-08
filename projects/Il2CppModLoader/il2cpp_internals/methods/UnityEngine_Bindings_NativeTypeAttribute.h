#include <interception_macros.h>

namespace app::methods::UnityEngine::Bindings::NativeTypeAttribute {
IL2CPP_REGISTER_METHOD(0x004C4CE0, void, __ctor, (NativeTypeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, __ctor, (NativeTypeAttribute * __this, CodegenOptions__Enum codegenOptions));
IL2CPP_REGISTER_METHOD(0x031BB650, void, __ctor, (NativeTypeAttribute * __this, String * header));
IL2CPP_REGISTER_METHODINFO(0x04773188, NativeTypeAttribute__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB780, void, __ctor, (NativeTypeAttribute * __this, CodegenOptions__Enum codegenOptions, String * intermediateStructName));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Header, (NativeTypeAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_IntermediateScriptingStructName, (NativeTypeAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_CodegenOptions, (NativeTypeAttribute * __this, CodegenOptions__Enum value));
}
