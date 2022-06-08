#include <interception_macros.h>

namespace app::methods::FoxArmor {
IL2CPP_REGISTER_METHOD(0x01281CC0, void, Start, (FoxArmor * __this));
IL2CPP_REGISTER_METHOD(0x01282170, void, Reset, (FoxArmor * __this));
IL2CPP_REGISTER_METHOD(0x01282710, void, BreakArmor, (FoxArmor * __this));
IL2CPP_REGISTER_METHOD(0x01282C70, IEnumerator *, HidePiecesTemp, (FoxArmor * __this, float seconds));
IL2CPP_REGISTER_METHOD(0x01282DD0, void, HidePieces, (FoxArmor * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FoxArmor * __this));
}
