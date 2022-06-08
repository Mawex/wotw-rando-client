using namespace app;

namespace app::methods::System::Net::BaseLoggingObject {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BaseLoggingObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterFunc, (BaseLoggingObject * __this, String * funcname));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LeaveFunc, (BaseLoggingObject * __this, String * funcname));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArrayToConsole, (BaseLoggingObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintLine, (BaseLoggingObject * __this, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArray, (BaseLoggingObject * __this, bool shouldClose));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArrayToFile, (BaseLoggingObject * __this, bool shouldClose));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (BaseLoggingObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (BaseLoggingObject * __this, bool close));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LoggingMonitorTick, (BaseLoggingObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BaseLoggingObject * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BaseLoggingObject * __this, Byte__Array * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BaseLoggingObject * __this, Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BaseLoggingObject * __this, void * pBuffer, int32_t offset, int32_t length));
}
