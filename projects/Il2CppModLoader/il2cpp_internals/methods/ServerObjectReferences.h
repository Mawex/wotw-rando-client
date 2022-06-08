using namespace app;

namespace app::methods::ServerObjectReferences {
IL2CPP_REGISTER_METHOD(0x00AC06E0, void, AddReferenceToObject, (int32_t id, GameObject * obj, ServerObject * serverObj));
IL2CPP_REGISTER_METHOD(0x00AC0820, void, AddReferenceToObject, (int32_t id, GameObject * obj));
IL2CPP_REGISTER_METHOD(0x00AC0910, void, AddReferenceToComponent, (int32_t id, Object_1 * component));
IL2CPP_REGISTER_METHOD(0x00AC0A00, void, RemoveObjectReference, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00AC0AC0, void, Clear, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AC0BA0, Object_1 *, GetObjectByID, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00AC0C60, ServerObject *, GetServerObjByGameojb, (GameObject * gameObj));
IL2CPP_REGISTER_METHOD(0x00AC0D20, Object_1 *, GetComponentByID, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00AC0DE0, void, RebuildAllReferences, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ServerObjectReferences * __this));
IL2CPP_REGISTER_METHOD(0x00AC1060, void, __cctor, (MethodInfo * method));
}
