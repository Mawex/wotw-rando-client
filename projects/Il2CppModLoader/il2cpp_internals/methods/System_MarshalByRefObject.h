using namespace app;

namespace app::methods::System::MarshalByRefObject {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MarshalByRefObject * __this));
IL2CPP_REGISTER_METHOD(0x02267EF0, ServerIdentity *, get_ObjectIdentity, (MarshalByRefObject * __this));
IL2CPP_REGISTER_METHODINFO(0x04708F98, MarshalByRefObject_get_ObjectIdentity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02267F40, void, set_ObjectIdentity, (MarshalByRefObject * __this, ServerIdentity * value));
IL2CPP_REGISTER_METHODINFO(0x04762C40, MarshalByRefObject_set_ObjectIdentity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02267F90, ObjRef *, CreateObjRef, (MarshalByRefObject * __this, Type * requestedType));
IL2CPP_REGISTER_METHODINFO(0x04734438, MarshalByRefObject_CreateObjRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02267FE0, Object *, InitializeLifetimeService, (MarshalByRefObject * __this));
IL2CPP_REGISTER_METHODINFO(0x04737550, MarshalByRefObject_InitializeLifetimeService__MethodInfo);
}
