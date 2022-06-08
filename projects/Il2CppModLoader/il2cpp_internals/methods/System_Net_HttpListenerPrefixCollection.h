#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerPrefixCollection {
IL2CPP_REGISTER_METHOD(0x01D45B30, void, __ctor, (HttpListenerPrefixCollection * __this, HttpListener * listener));
IL2CPP_REGISTER_METHOD(0x01D45C90, int32_t, get_Count, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x01D45D20, void, Add, (HttpListenerPrefixCollection * __this, String * uriPrefix));
IL2CPP_REGISTER_METHOD(0x01D45E50, void, Clear, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x01D45F50, bool, Contains, (HttpListenerPrefixCollection * __this, String * uriPrefix));
IL2CPP_REGISTER_METHOD(0x01D46010, void, CopyTo, (HttpListenerPrefixCollection * __this, String__Array * array, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01D460F0, void, CopyTo, (HttpListenerPrefixCollection * __this, Array * array, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01D461B0, IEnumerator_1_System_String_ *, GetEnumerator, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x01D46280, IEnumerator *, IEnumerable_GetEnumerator, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHOD(0x01D46350, bool, Remove, (HttpListenerPrefixCollection * __this, String * uriPrefix));
IL2CPP_REGISTER_METHODINFO(0x04755BF0, HttpListenerPrefixCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D464B0, void, __ctor, (HttpListenerPrefixCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04705EE8, HttpListenerPrefixCollection__ctor_1__MethodInfo);
}
