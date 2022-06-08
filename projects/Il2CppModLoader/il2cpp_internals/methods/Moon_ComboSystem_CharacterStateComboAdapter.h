using namespace app;

namespace app::methods::Moon::ComboSystem::CharacterStateComboAdapter {
IL2CPP_REGISTER_METHOD(0x00CC50C0, void, OnInitialize, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC5250, void, EnterMove, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC5280, void, UpdateMove, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x0097FDC0, void, ExitMove, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC53A0, bool, get_IsAttackButtonDown, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC5530, bool, get_OnAttackButtonPressed, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC56C0, bool, get_OnAttackButtonReleased, (CharacterStateComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (CharacterStateComboAdapter * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (CharacterStateComboAdapter * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (CharacterStateComboAdapter * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x00CC5850, void, __ctor, (CharacterStateComboAdapter * __this));
}
