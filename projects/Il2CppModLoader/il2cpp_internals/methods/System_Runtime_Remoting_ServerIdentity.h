#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ServerIdentity {
IL2CPP_REGISTER_METHOD(0x01D836D0, void, __ctor, (ServerIdentity * __this, String * objectUri, Context * context, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Type *, get_ObjectType, (ServerIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01D836E0, void, StartTrackingLifetime, (ServerIdentity * __this, ILease * lease));
IL2CPP_REGISTER_METHOD(0x01D839B0, void, OnLifetimeExpired, (ServerIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01D839C0, ObjRef *, CreateObjRef, (ServerIdentity * __this, Type * requestedType));
IL2CPP_REGISTER_METHOD(0x01D83DB0, void, AttachServerObject, (ServerIdentity * __this, MarshalByRefObject * serverObject, Context * context));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Lease *, get_Lease, (ServerIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Context *, get_Context, (ServerIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_Context, (ServerIdentity * __this, Context * value));
IL2CPP_REGISTER_METHOD(0x01D83E70, void, DisposeServerObject, (ServerIdentity * __this));
}
