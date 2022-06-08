#include <interception_macros.h>

namespace app::methods::System::Resources::RuntimeResourceSet {
IL2CPP_REGISTER_METHOD(0x01A8E5F0, void, __ctor, (RuntimeResourceSet * __this, String * fileName));
IL2CPP_REGISTER_METHOD(0x01A8E980, void, __ctor, (RuntimeResourceSet * __this, Stream * stream));
IL2CPP_REGISTER_METHOD(0x01A8EC10, void, Dispose, (RuntimeResourceSet * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A8ED70, IDictionaryEnumerator *, GetEnumerator, (RuntimeResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8ED70, IEnumerator *, IEnumerable_GetEnumerator, (RuntimeResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8ED80, IDictionaryEnumerator *, GetEnumeratorHelper, (RuntimeResourceSet * __this));
IL2CPP_REGISTER_METHODINFO(0x047873F8, RuntimeResourceSet_GetEnumeratorHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8EE60, String *, GetString, (RuntimeResourceSet * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01A8EF20, String *, GetString, (RuntimeResourceSet * __this, String * key, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01A8EFF0, Object *, GetObject, (RuntimeResourceSet * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01A8F010, Object *, GetObject, (RuntimeResourceSet * __this, String * key, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01A8F030, Object *, GetObject, (RuntimeResourceSet * __this, String * key, bool ignoreCase, bool isString));
IL2CPP_REGISTER_METHODINFO(0x04765E90, RuntimeResourceSet_GetObject_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8FAA0, Object *, ResolveResourceLocator, (RuntimeResourceSet * __this, ResourceLocator resLocation, String * key, Dictionary_2_System_String_System_Resources_ResourceLocator_ * copyOfCache, bool keyInWrongCase));
}
