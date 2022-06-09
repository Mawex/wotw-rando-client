#include <interception_macros.h>

namespace app::methods::Moon_Timeline::TimelineEntityReference {
IL2CPP_REGISTER_METHOD(0x01E87760, ITimelineEntity *, ResolveReference, (app::TimelineEntityReference * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, MonoBehaviour *, GetBackingField, (app::TimelineEntityReference * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetBackingField, (app::TimelineEntityReference * this_ptr, app::MonoBehaviour * obj));
IL2CPP_REGISTER_METHOD(0x01E877E0, bool, CanResolve, (app::TimelineEntityReference * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TimelineEntityReference * this_ptr));
}
