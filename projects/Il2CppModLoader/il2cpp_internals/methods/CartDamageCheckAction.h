using namespace app;

namespace app::methods::CartDamageCheckAction {
IL2CPP_REGISTER_METHOD(0x00B35ED0, void, Perform, (CartDamageCheckAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B35FA0, void, Awake, (CartDamageCheckAction * __this));
IL2CPP_REGISTER_METHOD(0x00B36080, void, Update, (CartDamageCheckAction * __this));
IL2CPP_REGISTER_METHOD(0x00B360B0, void, HandleCollisions, (CartDamageCheckAction * __this));
IL2CPP_REGISTER_METHOD(0x00616460, bool, IsOnMask, (CartDamageCheckAction * __this, int32_t layer, LayerMask layerMask));
IL2CPP_REGISTER_METHOD(0x00B36590, bool, ColliderCanDealDamage, (CartDamageCheckAction * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00B36700, void, CheckCollision, (CartDamageCheckAction * __this, Collider * col));
IL2CPP_REGISTER_METHOD(0x00B36CC0, void, OnDrawGizmos, (CartDamageCheckAction * __this));
IL2CPP_REGISTER_METHOD(0x00B372D0, void, __ctor, (CartDamageCheckAction * __this));
}
