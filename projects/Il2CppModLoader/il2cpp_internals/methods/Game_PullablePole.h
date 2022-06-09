#include <interception_macros.h>

namespace app::methods::Game::PullablePole {
IL2CPP_REGISTER_METHOD(0x015273C0, void, OnGrabbed, (app::PullablePole * this_ptr));
IL2CPP_REGISTER_METHOD(0x015275E0, void, OnReleased, (app::PullablePole * this_ptr));
IL2CPP_REGISTER_METHOD(0x01527800, IDesiredUberState *, GetRequirementsForTimeline, (app::PullablePole * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x015278A0, void, __ctor, (app::PullablePole * this_ptr));
}
