#include <interception_macros.h>

namespace app::methods::System::Collections::Stack {
IL2CPP_REGISTER_METHOD(0x02031C10, void, __ctor, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x02031CB0, void, __ctor, (Stack * __this, int32_t initialCapacity));
IL2CPP_REGISTER_METHODINFO(0x0471EB98, Stack__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x02031DA0, Object *, get_SyncRoot, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x02031F30, Object *, Clone, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x020320C0, void, CopyTo, (Stack * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474E9E0, Stack_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020323B0, IEnumerator *, GetEnumerator, (Stack * __this));
IL2CPP_REGISTER_METHOD(0x02032510, Object *, Peek, (Stack * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A358, Stack_Peek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02032600, Object *, Pop, (Stack * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FE00, Stack_Pop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02032730, void, Push, (Stack * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02032890, Object__Array *, ToArray, (Stack * __this));
}
