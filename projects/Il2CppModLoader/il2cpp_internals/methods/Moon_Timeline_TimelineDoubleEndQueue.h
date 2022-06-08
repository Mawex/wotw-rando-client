#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineDoubleEndQueue {
IL2CPP_REGISTER_METHOD(0x01E84340, int32_t, get_Count, (TimelineDoubleEndQueue * __this));
IL2CPP_REGISTER_METHOD(0x01E843E0, Reaction, Dequeue, (TimelineDoubleEndQueue * __this));
IL2CPP_REGISTER_METHOD(0x01E84660, void, Enqueue, (TimelineDoubleEndQueue * __this, Reaction reaction));
IL2CPP_REGISTER_METHOD(0x01E848C0, void, Clear, (TimelineDoubleEndQueue * __this));
IL2CPP_REGISTER_METHOD(0x01E849A0, bool, IsPlannedToStop, (TimelineDoubleEndQueue * __this, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01E84BC0, bool, HasAnythingButStops, (TimelineDoubleEndQueue * __this));
IL2CPP_REGISTER_METHOD(0x01E84EF0, void, __ctor, (TimelineDoubleEndQueue * __this));
}
