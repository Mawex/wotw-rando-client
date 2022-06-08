#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::GroupEnumerator {
IL2CPP_REGISTER_METHOD(0x01DC2A00, void, __ctor, (GroupEnumerator * __this, GroupCollection * rgc));
IL2CPP_REGISTER_METHOD(0x02582230, bool, MoveNext, (GroupEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x02582290, Object *, get_Current, (GroupEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x02582290, Capture *, get_Capture, (GroupEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04757B28, GroupEnumerator_get_Capture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (GroupEnumerator * __this));
}
