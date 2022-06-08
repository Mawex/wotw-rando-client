#include <interception_macros.h>

namespace app::methods::System::ComponentModel::EventHandlerList {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EventHandlerList * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (EventHandlerList * __this, Component * parent));
IL2CPP_REGISTER_METHOD(0x01FEC3F0, Delegate *, get_Item, (EventHandlerList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x01FEC460, void, set_Item, (EventHandlerList * __this, Object * key, Delegate * value));
IL2CPP_REGISTER_METHOD(0x01FEC5F0, void, AddHandler, (EventHandlerList * __this, Object * key, Delegate * value));
IL2CPP_REGISTER_METHOD(0x01FEC790, void, AddHandlers, (EventHandlerList * __this, EventHandlerList * listToAddFrom));
IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose, (EventHandlerList * __this));
IL2CPP_REGISTER_METHOD(0x01FEC9D0, EventHandlerList_ListEntry *, Find, (EventHandlerList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x01FECA00, void, RemoveHandler, (EventHandlerList * __this, Object * key, Delegate * value));
}
