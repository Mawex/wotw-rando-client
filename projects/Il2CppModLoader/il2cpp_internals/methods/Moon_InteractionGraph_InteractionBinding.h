#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionBinding {
IL2CPP_REGISTER_METHOD(0x0198D3F0, IMessageProvider *, get_ResolvedMessageProvider, (InteractionBinding * __this));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Active, (InteractionBinding * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Active, (InteractionBinding * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0198D480, void, __ctor, (InteractionBinding * __this, Action * action, IMessageProvider * messageProvider, float cost));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_ShouldUse, (InteractionBinding * __this));
}
