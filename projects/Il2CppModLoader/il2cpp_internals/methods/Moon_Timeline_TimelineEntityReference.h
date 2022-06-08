#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineEntityReference {
IL2CPP_REGISTER_METHOD(0x01E87760, ITimelineEntity *, ResolveReference, (TimelineEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, MonoBehaviour *, GetBackingField, (TimelineEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetBackingField, (TimelineEntityReference * __this, MonoBehaviour * obj));
IL2CPP_REGISTER_METHOD(0x01E877E0, bool, CanResolve, (TimelineEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimelineEntityReference * __this));
}
