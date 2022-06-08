#include <interception_macros.h>

namespace app::methods::System::Threading::NativeEventCalls {
IL2CPP_REGISTER_METHOD(0x027E1250, void *, CreateEvent_internal, (bool manual, bool initial, String * name, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x027E12E0, bool, SetEvent, (SafeWaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027E13E0, bool, SetEvent_internal, (void * handle));
IL2CPP_REGISTER_METHOD(0x027E1410, bool, ResetEvent, (SafeWaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027E1510, bool, ResetEvent_internal, (void * handle));
IL2CPP_REGISTER_METHOD(0x027E1540, void, CloseEvent_internal, (void * handle));
}
