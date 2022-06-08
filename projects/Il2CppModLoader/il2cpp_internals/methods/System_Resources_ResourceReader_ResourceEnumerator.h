#include <interception_macros.h>

namespace app::methods::System::Resources::ResourceReader_ResourceEnumerator {
IL2CPP_REGISTER_METHOD(0x01A8D130, void, __ctor, (ResourceReader_ResourceEnumerator * __this, ResourceReader * reader));
IL2CPP_REGISTER_METHOD(0x01A8D150, bool, MoveNext, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01A8D1A0, Object *, get_Key, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04773AD8, ResourceReader_ResourceEnumerator_get_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8D320, Object *, get_Current, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_DataPosition, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01A8D3C0, DictionaryEntry, get_Entry, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E728, ResourceReader_ResourceEnumerator_get_Entry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8D7D0, Object *, get_Value, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04707538, ResourceReader_ResourceEnumerator_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8D950, void, Reset, (ResourceReader_ResourceEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04704C60, ResourceReader_ResourceEnumerator_Reset__MethodInfo);
}
