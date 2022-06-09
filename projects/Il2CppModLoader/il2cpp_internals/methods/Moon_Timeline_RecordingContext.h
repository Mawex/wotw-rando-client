#include <interception_macros.h>

namespace app::methods::Moon_Timeline::RecordingContext {
IL2CPP_REGISTER_METHOD(0x0010E100, RecordableType__Enum, get_RecordableType, (app::RecordingContext__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0010E9A0, bool, get_ShouldRecord, (app::RecordingContext__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00107C10, Component_1 *, get_Puppet, (app::RecordingContext__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D7760, void, __ctor_1, (app::RecordingContext__Boxed * this_ptr, app::RecordableType__Enum recordable_type, bool should_record));
IL2CPP_REGISTER_METHOD(0x001D7770, void, __ctor_2, (app::RecordingContext__Boxed * this_ptr, bool should_record, app::Component_1 * puppet));
}
