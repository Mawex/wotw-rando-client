#include <interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::DllImportAttribute {
IL2CPP_REGISTER_METHOD(0x01A93F90, Attribute *, GetCustomAttribute, (RuntimeMethodInfo * method_1));
IL2CPP_REGISTER_METHOD(0x01A941F0, bool, IsDefined, (RuntimeMethodInfo * method_1));
IL2CPP_REGISTER_METHOD(0x01A94220, void, __ctor, (DllImportAttribute * __this, String * dllName, String * entryPoint, CharSet__Enum charSet, bool exactSpelling, bool setLastError, bool preserveSig, CallingConvention__Enum callingConvention, bool bestFitMapping, bool throwOnUnmappableChar));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DllImportAttribute * __this, String * dllName));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Value, (DllImportAttribute * __this));
}
