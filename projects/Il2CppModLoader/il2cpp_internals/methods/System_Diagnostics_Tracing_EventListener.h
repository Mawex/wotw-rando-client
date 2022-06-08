#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventListener {
IL2CPP_REGISTER_METHOD(0x0174AE50, void, Dispose, (EventListener * __this));
IL2CPP_REGISTER_METHOD(0x0174B120, void, OnEventSourceCreated, (EventListener * __this, EventSource * eventSource));
IL2CPP_REGISTER_METHOD(0x0174B310, void, OnEventWritten, (EventListener * __this, EventWrittenEventArgs * eventData));
IL2CPP_REGISTER_METHOD(0x0174B3B0, void, AddEventSource, (EventSource * newEventSource));
IL2CPP_REGISTER_METHOD(0x0174BE30, void, DisposeOnShutdown, (Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04747488, EventListener_DisposeOnShutdown__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174C0C0, void, RemoveReferencesToListenerInEventSources, (EventListener * listenerToRemove));
IL2CPP_REGISTER_METHOD(0x0174C320, Object *, get_EventListenersLock, ());
IL2CPP_REGISTER_METHOD(0x0174C530, void, __cctor, ());
}
