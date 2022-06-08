using namespace app;

namespace app::methods::SphereColliderAnimator {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (SphereColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00952C10, GameObject *, get_ExternalTarget, (SphereColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (SphereColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00952CC0, void, OnStartPlayback, (SphereColliderAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (SphereColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00952E10, void, OnUpdateEntity, (SphereColliderAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00952E90, void, __ctor, (SphereColliderAnimator * __this));
}
