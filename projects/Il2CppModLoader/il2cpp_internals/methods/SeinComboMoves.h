#include <interception_macros.h>

namespace app::methods::SeinComboMoves {
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_Moon_ComboSystem_ComboMove_ *, get_Moves, (SeinComboMoves * __this));
IL2CPP_REGISTER_METHOD(0x006DB0C0, void, RegisterMove, (SeinComboMoves * __this, ComboMove * move));
IL2CPP_REGISTER_METHOD(0x006DB3F0, ComboMove *, GetMoveByType, (SeinComboMoves * __this, Type * moveType));
IL2CPP_REGISTER_METHOD(0x006DB510, void, __ctor, (SeinComboMoves * __this));
}
