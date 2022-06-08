#include <interception_macros.h>

namespace app::methods::Moon::Timeline::EventDescriptorSet {
IL2CPP_REGISTER_METHOD(0x002FA280, HashSet_1_System_Int32_ *, get_m_ids, (EventDescriptorSet * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_Moon_Timeline_IEventDescriptor_ *, get_Descriptors, (EventDescriptorSet * __this));
IL2CPP_REGISTER_METHOD(0x01BBC5F0, bool, get_HasEvents, (EventDescriptorSet * __this));
IL2CPP_REGISTER_METHOD(0x01BBC680, EventDescriptorSet *, Add, (EventDescriptorSet * __this, IEventDescriptor * descriptor));
IL2CPP_REGISTER_METHOD(0x01BBC780, EventDescriptorSet *, Add, (EventDescriptorSet * __this, int32_t eventId, float time, String * name));
IL2CPP_REGISTER_METHOD(0x01BBC9B0, bool, GetStaticTime, (EventDescriptorSet * __this, int32_t id, float * time));
IL2CPP_REGISTER_METHOD(0x01BBCAC0, IEventDescriptor *, Get, (EventDescriptorSet * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01BBCC70, void, __ctor, (EventDescriptorSet * __this));
IL2CPP_REGISTER_METHOD(0x018F0040, EventDescriptorSet *, Add, (EventDescriptorSet * __this, GennadiysDice_DiceEvents__Enum evt, float time));
IL2CPP_REGISTER_METHODINFO(0x04715390, EventDescriptorSet_Add_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018F0040, EventDescriptorSet *, Add, (EventDescriptorSet * __this, Int32Enum__Enum evt, float time));
}
