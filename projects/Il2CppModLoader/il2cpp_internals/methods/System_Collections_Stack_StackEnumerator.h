#include <interception_macros.h>

namespace app::methods::System::Collections::Stack_StackEnumerator {
IL2CPP_REGISTER_METHOD(0x02032A90, void, __ctor, (Stack_StackEnumerator * __this, Stack * stack));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, Clone, (Stack_StackEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x02032AC0, bool, MoveNext, (Stack_StackEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B580, Stack_StackEnumerator_MoveNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02032C90, Object *, get_Current, (Stack_StackEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04720258, Stack_StackEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02032DA0, void, Reset, (Stack_StackEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04797AB0, Stack_StackEnumerator_Reset__MethodInfo);
}
