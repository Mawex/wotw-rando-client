#include <interception_macros.h>

namespace app::methods::ListOfCollidedObjects {
IL2CPP_REGISTER_METHOD(0x00FA87C0, void, OnCollisionEnter, (ListOfCollidedObjects * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00FA88C0, void, OnCollisionExit, (ListOfCollidedObjects * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00FA89C0, void, OnTriggerEnter, (ListOfCollidedObjects * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00FA8AC0, void, OnTriggerExit, (ListOfCollidedObjects * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00FA8BE0, void, OnEnable, (ListOfCollidedObjects * __this));
IL2CPP_REGISTER_METHOD(0x00FA8C90, void, FixedUpdate, (ListOfCollidedObjects * __this));
IL2CPP_REGISTER_METHOD(0x00FA8E80, void, __ctor, (ListOfCollidedObjects * __this));
}
