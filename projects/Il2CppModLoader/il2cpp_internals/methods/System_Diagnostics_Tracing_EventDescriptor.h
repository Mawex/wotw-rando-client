#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventDescriptor {
IL2CPP_REGISTER_METHOD(0x0013DFE0, void, __ctor, (EventDescriptor__Boxed * __this, int32_t traceloggingId, uint8_t level, uint8_t opcode, int64_t keywords));
IL2CPP_REGISTER_METHOD(0x0013E010, void, __ctor, (EventDescriptor__Boxed * __this, int32_t id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int32_t task, int64_t keywords));
IL2CPP_REGISTER_METHODINFO(0x047815C8, EventDescriptor__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00113CC0, int32_t, get_EventId, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011BD50, uint8_t, get_Version, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F130, uint8_t, get_Channel, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011DC50, uint8_t, get_Level, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013E030, uint8_t, get_Opcode, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013E040, int32_t, get_Task, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C10, int64_t, get_Keywords, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013E050, bool, Equals, (EventDescriptor__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0013E180, int32_t, GetHashCode, (EventDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013E1B0, bool, Equals, (EventDescriptor__Boxed * __this, EventDescriptor other));
}
