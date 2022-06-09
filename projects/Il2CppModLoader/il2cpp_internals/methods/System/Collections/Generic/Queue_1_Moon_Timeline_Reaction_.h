#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x02CA44B0, void, Enqueue, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, app::Reaction item));
    IL2CPP_REGISTER_METHODINFO(0x047699F8, Queue_1_Moon_Timeline_Reaction__Enqueue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA4590, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction_, GetEnumerator, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04771F10, Queue_1_Moon_Timeline_Reaction__GetEnumerator__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474DC28, Queue_1_Moon_Timeline_Reaction__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA4690, app::Reaction, Dequeue, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04789320, Queue_1_Moon_Timeline_Reaction__Dequeue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04790500, Queue_1_Moon_Timeline_Reaction__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor_1, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472A5A0, Queue_1_Moon_Timeline_Reaction___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA3F20, void, __ctor_2, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x04751F18, Queue_1_Moon_Timeline_Reaction___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA4050, app::Object *, ICollection_get_SyncRoot, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA41B0, void, ICollection_CopyTo, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0476D3D8, Queue_1_Moon_Timeline_Reaction__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA45E0, app::IEnumerator_1_Moon_Timeline_Reaction_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA45E0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA4790, app::Reaction, Peek, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA4810, bool, Contains, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, app::Reaction item));
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::Reaction__Array *, ToArray, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr, int32_t * index));
    IL2CPP_REGISTER_METHOD(0x02CA4950, void, ThrowForEmptyQueue, (app::Queue_1_Moon_Timeline_Reaction_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471AB28, Queue_1_Moon_Timeline_Reaction__ThrowForEmptyQueue__MethodInfo);
}
