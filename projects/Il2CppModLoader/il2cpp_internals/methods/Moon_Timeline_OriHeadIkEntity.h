#include <interception_macros.h>

namespace app::methods::Moon::Timeline::OriHeadIkEntity {
IL2CPP_REGISTER_METHOD(0x00777870, Transform *, get_ResolvedLookTarget, (OriHeadIkEntity * __this));
IL2CPP_REGISTER_METHOD(0x00777970, OriHeadIk *, get_OriHeadIk, (OriHeadIkEntity * __this));
IL2CPP_REGISTER_METHOD(0x00777A20, void, OnStartPlayback, (OriHeadIkEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00777A30, void, OnUpdateEntity, (OriHeadIkEntity * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00777D50, void, __ctor, (OriHeadIkEntity * __this));
}
