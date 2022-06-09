#include <interception_macros.h>

namespace app::methods::Mono_Net::CFRunLoop {
IL2CPP_REGISTER_METHOD(0x021799A0, void, CFRunLoopAddSource, (app::void * rl, app::void * source, app::void * mode));
IL2CPP_REGISTER_METHOD(0x02179A50, void, CFRunLoopRemoveSource, (app::void * rl, app::void * source, app::void * mode));
IL2CPP_REGISTER_METHOD(0x02179B00, int32_t, CFRunLoopRunInMode, (app::void * mode, double seconds, bool return_after_source_handled));
IL2CPP_REGISTER_METHOD(0x02179BC0, void *, CFRunLoopGetCurrent, ());
IL2CPP_REGISTER_METHOD(0x02179C50, void, CFRunLoopStop, (app::void * rl));
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFRunLoop * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x02179CF0, CFRunLoop *, get_CurrentRunLoop, ());
IL2CPP_REGISTER_METHOD(0x02179EC0, void, AddSource, (app::CFRunLoop * this_ptr, app::void * source, app::CFString * mode));
IL2CPP_REGISTER_METHOD(0x02179F90, void, RemoveSource, (app::CFRunLoop * this_ptr, app::void * source, app::CFString * mode));
IL2CPP_REGISTER_METHOD(0x0217A060, int32_t, RunInMode, (app::CFRunLoop * this_ptr, app::CFString * mode, double seconds, bool return_after_source_handled));
IL2CPP_REGISTER_METHOD(0x0217A130, void, Stop, (app::CFRunLoop * this_ptr));
}
