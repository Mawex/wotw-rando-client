#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_String_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04750B00, Dictionary_2_System_String_System_Object___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHODINFO(0x04732C78, Dictionary_2_System_String_System_Object__ContainsKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0475A7F8, Dictionary_2_System_String_System_Object__set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHODINFO(0x0472C230, Dictionary_2_System_String_System_Object__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04726610, Dictionary_2_System_String_System_Object__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key, app::Object * * value));
    IL2CPP_REGISTER_METHODINFO(0x04745208, Dictionary_2_System_String_System_Object__TryGetValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Object_, GetEnumerator, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475D790, Dictionary_2_System_String_System_Object__GetEnumerator__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Object *, get_Item, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHODINFO(0x047368D0, Dictionary_2_System_String_System_Object__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_System_String_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x0473DC20, Dictionary_2_System_String_System_Object___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_System_String_System_Object_ * this_ptr, app::IEqualityComparer_1_System_String_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04762BD8, Dictionary_2_System_String_System_Object___ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object_ *, get_Keys, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470AB08, Dictionary_2_System_String_System_Object__get_Keys__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object_ *, get_Values, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047328B8, Dictionary_2_System_String_System_Object__get_Values__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04739438, Dictionary_2_System_String_System_Object__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04780A58, Dictionary_2_System_String_System_Object__get_Count__MethodInfo);
}
