#include <interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerStateMap_Mapping {
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, (PlayerStateMap_Mapping__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, (PlayerStateMap_Mapping__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_MatchType, (PlayerStateMap_Mapping__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00121070, bool, Matches, (PlayerStateMap_Mapping__Boxed * __this, IUberState * state));
}
