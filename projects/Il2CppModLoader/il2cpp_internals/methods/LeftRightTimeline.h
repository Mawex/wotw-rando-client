#include <interception_macros.h>

namespace app::methods::LeftRightTimeline {
IL2CPP_REGISTER_METHOD(0x0012E3E0, void, Play, (LeftRightTimeline__Boxed * __this, LeftRightTimeline_Side__Enum side));
IL2CPP_REGISTER_METHOD(0x0012E410, void, Stop, (LeftRightTimeline__Boxed * __this, LeftRightTimeline_Side__Enum side));
IL2CPP_REGISTER_METHOD(0x0012E480, void, StopAll, (LeftRightTimeline__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012E4C0, MoonTimeline *, GetTimeline, (LeftRightTimeline__Boxed * __this, LeftRightTimeline_Side__Enum side));
}
