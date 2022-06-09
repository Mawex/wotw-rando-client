#include <interception_macros.h>

namespace app::methods::UnityEngine_Networking::DownloadHandlerBuffer {
    IL2CPP_REGISTER_METHOD(0x0317E370, void, __ctor, (app::DownloadHandlerBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0317E3D0, void *, Create, (app::DownloadHandlerBuffer * obj));
    IL2CPP_REGISTER_METHOD(0x0317E370, void, InternalCreateBuffer, (app::DownloadHandlerBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0317E320, app::Byte__Array *, GetData, (app::DownloadHandlerBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0317E320, app::Byte__Array *, InternalGetData, (app::DownloadHandlerBuffer * this_ptr));
}
