using namespace app;

namespace app::methods::Mono::Net::CFRunLoop {
IL2CPP_REGISTER_METHOD(0x021799A0, void, CFRunLoopAddSource, (void * rl, void * source, void * mode));
IL2CPP_REGISTER_METHOD(0x02179A50, void, CFRunLoopRemoveSource, (void * rl, void * source, void * mode));
IL2CPP_REGISTER_METHOD(0x02179B00, int32_t, CFRunLoopRunInMode, (void * mode, double seconds, bool returnAfterSourceHandled));
IL2CPP_REGISTER_METHOD(0x02179BC0, void *, CFRunLoopGetCurrent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02179C50, void, CFRunLoopStop, (void * rl));
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (CFRunLoop * __this, void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x02179CF0, CFRunLoop *, get_CurrentRunLoop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02179EC0, void, AddSource, (CFRunLoop * __this, void * source, CFString * mode));
IL2CPP_REGISTER_METHOD(0x02179F90, void, RemoveSource, (CFRunLoop * __this, void * source, CFString * mode));
IL2CPP_REGISTER_METHOD(0x0217A060, int32_t, RunInMode, (CFRunLoop * __this, CFString * mode, double seconds, bool returnAfterSourceHandled));
IL2CPP_REGISTER_METHOD(0x0217A130, void, Stop, (CFRunLoop * __this));
}
