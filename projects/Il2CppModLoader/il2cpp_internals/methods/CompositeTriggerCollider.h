using namespace app;

namespace app::methods::CompositeTriggerCollider {
IL2CPP_REGISTER_METHOD(0x011DF060, void, Start, (CompositeTriggerCollider * __this));
IL2CPP_REGISTER_METHOD(0x011DFF40, void, FixedUpdate, (CompositeTriggerCollider * __this));
IL2CPP_REGISTER_METHOD(0x011E0090, IEnumerator *, PropagateCollisionsToSiblings, (CompositeTriggerCollider * __this));
IL2CPP_REGISTER_METHOD(0x011E01E0, void, PropagateTrigger, (CompositeTriggerCollider * __this, String * message, IEnumerable_1_UnityEngine_Collider_ * collidersToProcess, Func_2_UnityEngine_Collider_Boolean_ * shouldPropagate));
IL2CPP_REGISTER_METHOD(0x011E0530, void, OnDestroy, (CompositeTriggerCollider * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CompositeTriggerCollider * __this));
IL2CPP_REGISTER_METHOD(0x011E0A40, void, _Start_b__7_0, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04732C18, CompositeTriggerCollider__Start_b__7_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0AF0, void, _Start_b__7_1, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04721BA8, CompositeTriggerCollider__Start_b__7_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0BA0, void, _Start_b__7_2, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x047337C0, CompositeTriggerCollider__Start_b__7_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0C50, bool, _PropagateCollisionsToSiblings_b__9_0, (CompositeTriggerCollider * __this, Collider * other));
IL2CPP_REGISTER_METHODINFO(0x04771F38, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0D20, bool, _PropagateCollisionsToSiblings_b__9_1, (CompositeTriggerCollider * __this, Collider * other));
IL2CPP_REGISTER_METHODINFO(0x04739F40, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0DF0, bool, _PropagateCollisionsToSiblings_b__9_2, (CompositeTriggerCollider * __this, Collider * other));
IL2CPP_REGISTER_METHODINFO(0x047981A8, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0ED0, bool, _PropagateCollisionsToSiblings_b__9_3, (CompositeTriggerCollider * __this, Collider * other));
IL2CPP_REGISTER_METHODINFO(0x047608D8, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0F80, void, _OnDestroy_b__11_0, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04700DF8, CompositeTriggerCollider__OnDestroy_b__11_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E1030, void, _OnDestroy_b__11_1, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x0470C3A8, CompositeTriggerCollider__OnDestroy_b__11_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E10E0, void, _OnDestroy_b__11_2, (CompositeTriggerCollider * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x0473E668, CompositeTriggerCollider__OnDestroy_b__11_2__MethodInfo);
}
