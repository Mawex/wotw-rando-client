#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoEventInfo {
IL2CPP_REGISTER_METHOD(0x02690470, void, get_event_info, (MonoEvent * ev, MonoEventInfo * info));
IL2CPP_REGISTER_METHOD(0x02690580, MonoEventInfo, GetEventInfo, (MonoEvent * ev));
}
