#include <interception_macros.h>

namespace app::methods::SaveSystemDebuger {
IL2CPP_REGISTER_METHOD(0x00931840, bool, get_SaveSystemDebugEnabled, ());
IL2CPP_REGISTER_METHOD(0x009318E0, void, set_SaveSystemDebugEnabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00931990, void, Log, (String * log));
IL2CPP_REGISTER_METHOD(0x00931B80, void, DrawDebugData, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SaveSystemDebuger * __this));
IL2CPP_REGISTER_METHOD(0x00932740, void, __cctor, ());
}
