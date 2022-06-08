#include <interception_macros.h>

namespace app::methods::SeinMineSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ACBB0, void, OnSetReferenceToSein, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ACBE0, void, OnDestroy, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ACC20, void, UpdateCharacterState, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ACD00, bool, CanDropMine, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ACF30, void, DropMine, (SeinMineSpell * __this));
IL2CPP_REGISTER_METHOD(0x008ADAC0, void, __ctor, (SeinMineSpell * __this));
}
