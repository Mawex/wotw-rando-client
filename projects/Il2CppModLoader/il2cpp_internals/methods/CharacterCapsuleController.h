using namespace app;

namespace app::methods::CharacterCapsuleController {
IL2CPP_REGISTER_METHOD(0x0104A2C0, void, EnableCollider, (CharacterCapsuleController * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x0104A3F0, void, DisableColliderForDuration, (CharacterCapsuleController * __this, float duration));
IL2CPP_REGISTER_METHOD(0x0104A400, void, Awake, (CharacterCapsuleController * __this));
IL2CPP_REGISTER_METHOD(0x0104A550, void, Update, (CharacterCapsuleController * __this));
IL2CPP_REGISTER_METHOD(0x0104A640, void, Restore, (CharacterCapsuleController * __this));
IL2CPP_REGISTER_METHOD(0x0104A800, void, Shrink, (CharacterCapsuleController * __this));
IL2CPP_REGISTER_METHOD(0x0104A980, bool, get_IsSphere, (CharacterCapsuleController * __this));
IL2CPP_REGISTER_METHOD(0x0104AA30, void, Serialize, (CharacterCapsuleController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (CharacterCapsuleController * __this));
}
