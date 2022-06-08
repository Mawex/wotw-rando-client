using namespace app;

namespace app::methods::Moon::Driver::UpdateManager_GenericEntry {
IL2CPP_REGISTER_METHOD(0x002FB9F0, IUpdateHandlerBase *, get_Handler, (UpdateManager_GenericEntry * __this));
IL2CPP_REGISTER_METHOD(0x0313AC20, void, set_Handler, (UpdateManager_GenericEntry * __this, IUpdateHandlerBase * value));
IL2CPP_REGISTER_METHOD(0x0313ACD0, void, OnUpdate, (UpdateManager_GenericEntry * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0313AD70, void, Reset, (UpdateManager_GenericEntry * __this));
IL2CPP_REGISTER_METHOD(0x0313AC10, void, __ctor, (UpdateManager_GenericEntry * __this));
}
