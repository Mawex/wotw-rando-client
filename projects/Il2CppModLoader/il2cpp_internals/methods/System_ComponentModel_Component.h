#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Component {
IL2CPP_REGISTER_METHOD(0x024A8C90, void, Finalize, (Component * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRaiseEvents, (Component * __this));
IL2CPP_REGISTER_METHOD(0x008009A0, bool, get_CanRaiseEventsInternal, (Component * __this));
IL2CPP_REGISTER_METHOD(0x024A8D10, void, add_Disposed, (Component * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A8DF0, void, remove_Disposed, (Component * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x024A8F00, EventHandlerList *, get_Events, (Component * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ISite *, get_Site, (Component * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Site, (Component * __this, ISite * value));
IL2CPP_REGISTER_METHOD(0x024A9050, void, Dispose, (Component * __this));
IL2CPP_REGISTER_METHOD(0x024A9100, void, Dispose, (Component * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x024A9360, IContainer *, get_Container, (Component * __this));
IL2CPP_REGISTER_METHOD(0x024A9400, Object *, GetService, (Component * __this, Type * service));
IL2CPP_REGISTER_METHOD(0x024A94B0, bool, get_DesignMode, (Component * __this));
IL2CPP_REGISTER_METHOD(0x024A9550, String *, ToString, (Component * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Component * __this));
IL2CPP_REGISTER_METHOD(0x024A9680, void, __cctor, ());
}
