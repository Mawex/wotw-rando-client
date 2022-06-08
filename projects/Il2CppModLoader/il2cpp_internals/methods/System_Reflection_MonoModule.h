#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoModule {
IL2CPP_REGISTER_METHOD(0x002FB930, Assembly *, get_Assembly, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ScopeName, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x02692540, Guid, get_ModuleVersionId, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_FullyQualifiedName, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsResource, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x02692570, Object__Array *, GetCustomAttributes, (MonoModule * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x02692620, Object__Array *, GetCustomAttributes, (MonoModule * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x026926E0, bool, IsDefined, (MonoModule * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x026927A0, void, GetObjectData, (MonoModule * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047313E0, MonoModule_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02692950, RuntimeAssembly *, GetRuntimeAssembly, (MonoModule * __this));
IL2CPP_REGISTER_METHOD(0x02692A20, void, __ctor, (MonoModule * __this));
}
