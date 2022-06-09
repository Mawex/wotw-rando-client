#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoModule {
IL2CPP_REGISTER_METHOD(0x002FB930, Assembly *, get_Assembly, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ScopeName, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x02692540, Guid, get_ModuleVersionId, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_FullyQualifiedName, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsResource, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x02692570, Object__Array *, GetCustomAttributes_1, (app::MonoModule * this_ptr, bool inherit));
IL2CPP_REGISTER_METHOD(0x02692620, Object__Array *, GetCustomAttributes_2, (app::MonoModule * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHOD(0x026926E0, bool, IsDefined, (app::MonoModule * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHOD(0x026927A0, void, GetObjectData, (app::MonoModule * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047313E0, MonoModule_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02692950, RuntimeAssembly *, GetRuntimeAssembly, (app::MonoModule * this_ptr));
IL2CPP_REGISTER_METHOD(0x02692A20, void, __ctor, (app::MonoModule * this_ptr));
}
