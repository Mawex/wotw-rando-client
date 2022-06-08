using namespace app;

namespace app::methods::System::ComponentModel::Container {
IL2CPP_REGISTER_METHOD(0x024AB110, void, Finalize, (Container * __this));
IL2CPP_REGISTER_METHOD(0x0234BFD0, void, Add, (Container * __this, IComponent * component));
IL2CPP_REGISTER_METHOD(0x024AB190, void, Add, (Container * __this, IComponent * component, String * name));
IL2CPP_REGISTER_METHOD(0x024AB4B0, ISite *, CreateSite, (Container * __this, IComponent * component, String * name));
IL2CPP_REGISTER_METHOD(0x024AB610, void, Dispose, (Container * __this));
IL2CPP_REGISTER_METHOD(0x024AB6C0, void, Dispose, (Container * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x024ABA60, Object *, GetService, (Container * __this, Type * service));
IL2CPP_REGISTER_METHOD(0x024ABB30, ComponentCollection *, get_Components, (Container * __this));
IL2CPP_REGISTER_METHOD(0x024ABFF0, void, Remove, (Container * __this, IComponent * component));
IL2CPP_REGISTER_METHOD(0x024AC000, void, Remove, (Container * __this, IComponent * component, bool preserveSite));
IL2CPP_REGISTER_METHOD(0x024AC290, void, RemoveWithoutUnsiting, (Container * __this, IComponent * component));
IL2CPP_REGISTER_METHOD(0x024AC2A0, void, ValidateName, (Container * __this, IComponent * component, String * name));
IL2CPP_REGISTER_METHODINFO(0x0473C738, Container_ValidateName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024AC6C0, void, __ctor, (Container * __this));
}
