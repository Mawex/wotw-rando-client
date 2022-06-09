#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::DeviceInfo {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_DeviceType, (app::DeviceInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DeviceType, (app::DeviceInfo * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_OsVersion, (app::DeviceInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_OsVersion, (app::DeviceInfo * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_DeviceId, (app::DeviceInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DeviceId, (app::DeviceInfo * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DeviceInfo * this_ptr));
}
