using namespace app;

namespace app::methods::ChargeShotCollider {
IL2CPP_REGISTER_METHOD(0x01319C80, GameObject *, get_Reflectable, (ChargeShotCollider * __this));
IL2CPP_REGISTER_METHOD(0x01319DA0, void, add_OnTriggerEnterEvent, (ChargeShotCollider * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01319E90, void, remove_OnTriggerEnterEvent, (ChargeShotCollider * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x01319F80, void, add_OnTriggerStayEvent, (ChargeShotCollider * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0131A070, void, remove_OnTriggerStayEvent, (ChargeShotCollider * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x0131A160, void, OnTriggerEnter, (ChargeShotCollider * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0131A200, void, OnTriggerStay, (ChargeShotCollider * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0131A2A0, void, __ctor, (ChargeShotCollider * __this));
}
