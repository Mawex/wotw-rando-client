using namespace app;

namespace app::methods::Mono::Net::CFObject {
IL2CPP_REGISTER_METHOD(0x02177F70, void *, dlopen, (String * path, int32_t mode));
IL2CPP_REGISTER_METHOD(0x021780F0, void *, dlsym, (void * handle, String * symbol));
IL2CPP_REGISTER_METHOD(0x02178270, void, dlclose, (void * handle));
IL2CPP_REGISTER_METHOD(0x02178310, void *, GetIndirect, (void * handle, String * symbol));
IL2CPP_REGISTER_METHOD(0x02178320, void *, GetCFObjectHandle, (void * handle, String * symbol));
IL2CPP_REGISTER_METHOD(0x021784A0, void, __ctor, (CFObject * __this, void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x02178550, void, Finalize, (CFObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, void *, get_Handle, (CFObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Handle, (CFObject * __this, void * value));
IL2CPP_REGISTER_METHOD(0x021785D0, void *, CFRetain, (void * handle));
IL2CPP_REGISTER_METHOD(0x02178670, void, Retain, (CFObject * __this));
IL2CPP_REGISTER_METHOD(0x02178710, void, CFRelease, (void * handle));
IL2CPP_REGISTER_METHOD(0x021787B0, void, Release, (CFObject * __this));
IL2CPP_REGISTER_METHOD(0x02178850, void, Dispose, (CFObject * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02178960, void, Dispose, (CFObject * __this));
}
