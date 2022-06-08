#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoAssembly {
IL2CPP_REGISTER_METHOD(0x0268ED90, Type *, GetType, (MonoAssembly * __this, String * name, bool throwOnError, bool ignoreCase));
IL2CPP_REGISTER_METHODINFO(0x047033C0, MonoAssembly_GetType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268EEB0, Module *, GetModule, (MonoAssembly * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047936E8, MonoAssembly_GetModule__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268F060, Module__Array *, GetModules, (MonoAssembly * __this, bool getResourceModules));
IL2CPP_REGISTER_METHOD(0x02280FB0, void, __ctor, (MonoAssembly * __this));
}
