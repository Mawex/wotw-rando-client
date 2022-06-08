#include <interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::MessageAndStackTrace {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Message, (MessageAndStackTrace * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Message, (MessageAndStackTrace * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_StackTrace, (MessageAndStackTrace * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StackTrace, (MessageAndStackTrace * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0318B490, bool, Equals, (MessageAndStackTrace * __this, MessageAndStackTrace * other));
IL2CPP_REGISTER_METHOD(0x0318B530, bool, Equals, (MessageAndStackTrace * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0318B690, int32_t, GetHashCode, (MessageAndStackTrace * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MessageAndStackTrace * __this));
}
