#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ClientIdentity {
IL2CPP_REGISTER_METHOD(0x01AA0200, void, __ctor, (ClientIdentity * __this, String * objectUri, ObjRef * objRef));
IL2CPP_REGISTER_METHOD(0x01AA0300, MarshalByRefObject *, get_ClientProxy, (ClientIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01AA03F0, void, set_ClientProxy, (ClientIdentity * __this, MarshalByRefObject * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, ObjRef *, CreateObjRef, (ClientIdentity * __this, Type * requestedType));
IL2CPP_REGISTER_METHOD(0x008C5A90, String *, get_TargetUri, (ClientIdentity * __this));
}
