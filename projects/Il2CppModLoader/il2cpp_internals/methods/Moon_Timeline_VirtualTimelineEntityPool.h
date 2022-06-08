#include <interception_macros.h>

namespace app::methods::Moon::Timeline::VirtualTimelineEntityPool {
IL2CPP_REGISTER_METHOD(0x01E92C90, void, ReturnToPool, (VirtualTimelineEntityPool * __this, IPoolableTimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E92EE0, void, __ctor, (VirtualTimelineEntityPool * __this));
IL2CPP_REGISTER_METHOD(0x01B34C30, bool, TryToGetEntity, (VirtualTimelineEntityPool * __this, IContext * resetContext, Object * * entity));
}
