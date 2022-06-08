using namespace app;

namespace app::methods::Moon::BehaviourSystem::PositionInBoxColliderCondition {
IL2CPP_REGISTER_METHOD(0x00CBAB10, String *, get_Info, (PositionInBoxColliderCondition * __this));
IL2CPP_REGISTER_METHOD(0x00CBAC10, bool, IsPositionInside, (PositionInBoxColliderCondition * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CBAC40, bool, PointInOABB, (PositionInBoxColliderCondition * __this, Vector3 point, BoxCollider * box));
IL2CPP_REGISTER_METHOD(0x00CBAFE0, bool, OnCheck, (PositionInBoxColliderCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB75E0, void, __ctor, (PositionInBoxColliderCondition * __this));
}
