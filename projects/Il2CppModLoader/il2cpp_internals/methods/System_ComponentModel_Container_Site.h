#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Container_Site {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (Container_Site * __this, IComponent * component, Container * container, String * name));
IL2CPP_REGISTER_METHOD(0x002FA280, IComponent *, get_Component, (Container_Site * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IContainer *, get_Container, (Container_Site * __this));
IL2CPP_REGISTER_METHOD(0x01FDA080, Object *, GetService, (Container_Site * __this, Type * service));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DesignMode, (Container_Site * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (Container_Site * __this));
IL2CPP_REGISTER_METHOD(0x01FDA170, void, set_Name, (Container_Site * __this, String * value));
}
