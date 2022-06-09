#include <interception_macros.h>

namespace app::methods::Game::Events {
    IL2CPP_REGISTER_METHOD(0x01525B70, GameScheduler*, get_Scheduler, ());
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::Events_1 * this_ptr));
} // namespace app::methods::Game::Events
