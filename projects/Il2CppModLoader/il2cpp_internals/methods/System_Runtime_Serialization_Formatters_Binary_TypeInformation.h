#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::TypeInformation {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_FullTypeName, (TypeInformation * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_AssemblyString, (TypeInformation * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_HasTypeForwardedFrom, (TypeInformation * __this));
IL2CPP_REGISTER_METHOD(0x010415E0, void, __ctor, (TypeInformation * __this, String * fullTypeName, String * assemblyString, bool hasTypeForwardedFrom));
}
