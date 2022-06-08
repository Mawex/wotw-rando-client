using namespace app;

namespace app::methods::Game::PullablePole {
IL2CPP_REGISTER_METHOD(0x015273C0, void, OnGrabbed, (PullablePole * __this));
IL2CPP_REGISTER_METHOD(0x015275E0, void, OnReleased, (PullablePole * __this));
IL2CPP_REGISTER_METHOD(0x01527800, IDesiredUberState *, GetRequirementsForTimeline, (PullablePole * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x015278A0, void, __ctor, (PullablePole * __this));
}
