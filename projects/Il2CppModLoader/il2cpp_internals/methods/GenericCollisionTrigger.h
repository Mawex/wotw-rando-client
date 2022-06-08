#include <interception_macros.h>

namespace app::methods::GenericCollisionTrigger {
IL2CPP_REGISTER_METHOD(0x00E06170, void, OnCollisionEnter, (GenericCollisionTrigger * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00E06310, void, OnTriggerEnter, (GenericCollisionTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E063F0, void, Process, (GenericCollisionTrigger * __this, GameObject * gameObject, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00E06620, void, OnTriggerActivated, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06780, void, OnTriggerEnable, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06820, void, OnTriggerDisable, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_AllTargets, (GenericCollisionTrigger * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (GenericCollisionTrigger * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00E068C0, IUberState__Array *, get_AffectingUberStates, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06A00, void, StopTransitions, (GenericCollisionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06B20, void, __ctor, (GenericCollisionTrigger * __this));
}
