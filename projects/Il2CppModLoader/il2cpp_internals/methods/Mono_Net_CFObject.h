#include <interception_macros.h>

namespace app::methods::Mono_Net::CFObject {
IL2CPP_REGISTER_METHOD(0x02177F70, void *, dlopen, (app::String * path, int32_t mode));
IL2CPP_REGISTER_METHOD(0x021780F0, void *, dlsym, (app::void * handle, app::String * symbol));
IL2CPP_REGISTER_METHOD(0x02178270, void, dlclose, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02178310, void *, GetIndirect, (app::void * handle, app::String * symbol));
IL2CPP_REGISTER_METHOD(0x02178320, void *, GetCFObjectHandle, (app::void * handle, app::String * symbol));
IL2CPP_REGISTER_METHOD(0x021784A0, void, __ctor, (app::CFObject * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x02178550, void, Finalize, (app::CFObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, void *, get_Handle, (app::CFObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Handle, (app::CFObject * this_ptr, app::void * value));
IL2CPP_REGISTER_METHOD(0x021785D0, void *, CFRetain, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02178670, void, Retain, (app::CFObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x02178710, void, CFRelease, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x021787B0, void, Release, (app::CFObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x02178850, void, Dispose_1, (app::CFObject * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x02178960, void, Dispose_2, (app::CFObject * this_ptr));
}
