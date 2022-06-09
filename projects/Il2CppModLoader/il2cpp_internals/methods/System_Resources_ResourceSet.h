#include <interception_macros.h>

namespace app::methods::System_Resources::ResourceSet {
IL2CPP_REGISTER_METHOD(0x01A8DA30, void, __ctor_1, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_2, (app::ResourceSet * this_ptr, bool junk));
IL2CPP_REGISTER_METHOD(0x01A8DA30, void, CommonInit, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A8DB90, void, Dispose_1, (app::ResourceSet * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose_2, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A8DC60, IDictionaryEnumerator *, GetEnumerator, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A8DC60, IEnumerator *, IEnumerable_GetEnumerator, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A8DC70, IDictionaryEnumerator *, GetEnumeratorHelper, (app::ResourceSet * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473EF18, ResourceSet_GetEnumeratorHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8DD50, String *, GetString_1, (app::ResourceSet * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x0471CA80, ResourceSet_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8DEA0, String *, GetString_2, (app::ResourceSet * this_ptr, app::String * name, bool ignore_case));
IL2CPP_REGISTER_METHODINFO(0x047079A0, ResourceSet_GetString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8E0B0, Object *, GetObject_1, (app::ResourceSet * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01A8E0C0, Object *, GetObject_2, (app::ResourceSet * this_ptr, app::String * name, bool ignore_case));
IL2CPP_REGISTER_METHOD(0x01A8E110, Object *, GetObjectInternal, (app::ResourceSet * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04739998, ResourceSet_GetObjectInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8E230, Object *, GetCaseInsensitiveObjectInternal, (app::ResourceSet * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04703290, ResourceSet_GetCaseInsensitiveObjectInternal__MethodInfo);
}
