using namespace app;

namespace app::methods::System::Net::Logging {
IL2CPP_REGISTER_METHOD(0x00420EE0, TraceSource *, get_Web, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, TraceSource *, get_HttpListener, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, TraceSource *, get_Sockets, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter, (TraceSource * traceSource, Object * obj, String * method_1, Object * paramObject));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter, (TraceSource * traceSource, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter, (TraceSource * traceSource, String * msg, String * parameters));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exception, (TraceSource * traceSource, Object * obj, String * method_1, Exception * e));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (TraceSource * traceSource, Object * obj, String * method_1, Object * retObject));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (TraceSource * traceSource, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (TraceSource * traceSource, String * msg, String * parameters));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo, (TraceSource * traceSource, Object * obj, String * method_1, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo, (TraceSource * traceSource, Object * obj, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo, (TraceSource * traceSource, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintWarning, (TraceSource * traceSource, Object * obj, String * method_1, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintWarning, (TraceSource * traceSource, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintError, (TraceSource * traceSource, String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
