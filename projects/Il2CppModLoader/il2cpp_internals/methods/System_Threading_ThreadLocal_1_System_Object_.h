#include <interception_macros.h>

namespace app::methods::System::Threading::ThreadLocal_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02A60590, Object *, get_Value, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A606F0, void, set_Value, (ThreadLocal_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02A61570, int32_t, get_ValuesCountForDebugDisplay, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A615C0, bool, get_IsValueCreated, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04741640, ThreadLocal_1_System_Object__get_IsValueCreated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A617A0, Object *, get_ValueForDebugDisplay, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A618F0, List_1_System_Object_ *, get_ValuesForDebugDisplay, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5FDF0, void, __ctor, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5FF20, void, Initialize, (ThreadLocal_1_System_Object_ * __this, Func_1_Object_ * valueFactory, bool trackAllValues));
IL2CPP_REGISTER_METHOD(0x02A60040, void, Finalize, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A600F0, void, Dispose, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A601B0, void, Dispose, (ThreadLocal_1_System_Object_ * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02A60540, String *, ToString, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A60860, Object *, GetValueSlow, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D430, ThreadLocal_1_System_Object__GetValueSlow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A609F0, void, SetValueSlow, (ThreadLocal_1_System_Object_ * __this, Object * value, ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array * slotArray));
IL2CPP_REGISTER_METHODINFO(0x047131B0, ThreadLocal_1_System_Object__SetValueSlow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A61000, void, CreateLinkedSlot, (ThreadLocal_1_System_Object_ * __this, ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array * slotArray, int32_t id, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0477D438, ThreadLocal_1_System_Object__CreateLinkedSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A613F0, List_1_System_Object_ *, GetValuesAsList, (ThreadLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A61920, void, GrowTable, (ThreadLocal_1_System_Object_ * __this, ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array * * table, int32_t minLength));
IL2CPP_REGISTER_METHOD(0x02A61BE0, int32_t, GetNewTableSize, (int32_t minSize));
IL2CPP_REGISTER_METHOD(0x02A61C20, void, __cctor, ());
}
