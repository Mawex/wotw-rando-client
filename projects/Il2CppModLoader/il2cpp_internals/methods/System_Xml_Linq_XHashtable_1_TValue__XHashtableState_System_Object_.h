using namespace app;

namespace app::methods::System::Xml::Linq::XHashtable_1_TValue__XHashtableState_System::Object_ {
IL2CPP_REGISTER_METHOD(0x0225A250, void, __ctor, (XHashtable_1_TValue_XHashtableState_System_Object_ * __this, XHashtable_1_TValue_ExtractKeyDelegate_System_Object_ * extractKey, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0225A340, XHashtable_1_TValue_XHashtableState_System_Object_ *, Resize, (XHashtable_1_TValue_XHashtableState_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B748, XHashtable_1_TValue_XHashtableState_System_Object__Resize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0225A7D0, bool, TryGetValue, (XHashtable_1_TValue_XHashtableState_System_Object_ * __this, String * key, int32_t index, int32_t count, Object * * value));
IL2CPP_REGISTER_METHOD(0x0225A8D0, bool, TryAdd, (XHashtable_1_TValue_XHashtableState_System_Object_ * __this, Object * value, Object * * newValue));
IL2CPP_REGISTER_METHOD(0x0225AB50, bool, FindEntry, (XHashtable_1_TValue_XHashtableState_System_Object_ * __this, int32_t hashCode, String * key, int32_t index, int32_t count, int32_t * entryIndex));
IL2CPP_REGISTER_METHOD(0x0225AE00, int32_t, ComputeHashCode, (String * key, int32_t index, int32_t count));
}
