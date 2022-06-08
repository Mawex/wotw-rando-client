#include <interception_macros.h>

namespace app::methods::System::Collections::Queue {
IL2CPP_REGISTER_METHOD(0x0202B250, void, __ctor, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202B270, void, __ctor, (Queue * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0202B280, void, __ctor, (Queue * __this, int32_t capacity, float growFactor));
IL2CPP_REGISTER_METHODINFO(0x04770508, Queue__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202B480, void, __ctor, (Queue * __this, ICollection * col));
IL2CPP_REGISTER_METHODINFO(0x047246B8, Queue__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202B6B0, Object *, Clone, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202B8A0, Object *, get_SyncRoot, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202BA00, void, Clear, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202BA60, void, CopyTo, (Queue * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047703C0, Queue_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202BCB0, void, Enqueue, (Queue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0202BEC0, IEnumerator *, GetEnumerator, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202C030, Object *, Dequeue, (Queue * __this));
IL2CPP_REGISTER_METHODINFO(0x047277C8, Queue_Dequeue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202C170, Object *, Peek, (Queue * __this));
IL2CPP_REGISTER_METHODINFO(0x04787418, Queue_Peek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202C270, Object *, GetElement, (Queue * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0202C2C0, Object__Array *, ToArray, (Queue * __this));
IL2CPP_REGISTER_METHOD(0x0202C3C0, void, SetCapacity, (Queue * __this, int32_t capacity));
}
