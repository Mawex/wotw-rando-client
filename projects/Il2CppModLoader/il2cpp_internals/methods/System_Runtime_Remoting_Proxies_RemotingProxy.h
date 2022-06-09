#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Proxies::RemotingProxy {
IL2CPP_REGISTER_METHOD(0x0231ECB0, void, __ctor_1, (app::RemotingProxy * this_ptr, app::Type * type, app::ClientIdentity * identity));
IL2CPP_REGISTER_METHOD(0x0231EDA0, void, __ctor_2, (app::RemotingProxy * this_ptr, app::Type * type, app::String * activation_url, app::Object__Array * activation_attributes));
IL2CPP_REGISTER_METHOD(0x0231EE70, IMessage *, Invoke, (app::RemotingProxy * this_ptr, app::IMessage * request));
IL2CPP_REGISTER_METHOD(0x0231F430, void, AttachIdentity, (app::RemotingProxy * this_ptr, app::Identity * identity));
IL2CPP_REGISTER_METHOD(0x0231F830, IMessage *, ActivateRemoteObject, (app::RemotingProxy * this_ptr, app::IMethodMessage * request));
IL2CPP_REGISTER_METHOD(0x0231FB20, String *, get_TypeName, (app::RemotingProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x0231FC90, bool, CanCastTo, (app::RemotingProxy * this_ptr, app::Type * from_type, app::Object * o));
IL2CPP_REGISTER_METHOD(0x0231FEA0, void, Finalize, (app::RemotingProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x0231FFE0, void, __cctor, ());
}
