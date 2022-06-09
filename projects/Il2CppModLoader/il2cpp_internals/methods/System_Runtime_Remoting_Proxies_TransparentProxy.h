#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Proxies::TransparentProxy {
IL2CPP_REGISTER_METHOD(0x023200F0, RuntimeType *, GetProxyType, (app::TransparentProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02320200, bool, get_IsContextBoundObject, (app::TransparentProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173F0, Context *, get_TargetContext, (app::TransparentProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02320320, bool, InCurrentContext, (app::TransparentProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x023204A0, Object *, LoadRemoteFieldNew, (app::TransparentProxy * this_ptr, app::void * class_ptr, app::void * field_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478C860, TransparentProxy_LoadRemoteFieldNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02320900, void, StoreRemoteField, (app::TransparentProxy * this_ptr, app::void * class_ptr, app::void * field_ptr, app::Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04746198, TransparentProxy_StoreRemoteField__MethodInfo);
}
