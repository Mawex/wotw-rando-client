using namespace app;

namespace app::methods::System::Resources::ResourceSet {
IL2CPP_REGISTER_METHOD(0x01A8DA30, void, __ctor, (ResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ResourceSet * __this, bool junk));
IL2CPP_REGISTER_METHOD(0x01A8DA30, void, CommonInit, (ResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8DB90, void, Dispose, (ResourceSet * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Dispose, (ResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8DC60, IDictionaryEnumerator *, GetEnumerator, (ResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8DC60, IEnumerator *, IEnumerable_GetEnumerator, (ResourceSet * __this));
IL2CPP_REGISTER_METHOD(0x01A8DC70, IDictionaryEnumerator *, GetEnumeratorHelper, (ResourceSet * __this));
IL2CPP_REGISTER_METHODINFO(0x0473EF18, ResourceSet_GetEnumeratorHelper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8DD50, String *, GetString, (ResourceSet * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0471CA80, ResourceSet_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8DEA0, String *, GetString, (ResourceSet * __this, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHODINFO(0x047079A0, ResourceSet_GetString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8E0B0, Object *, GetObject, (ResourceSet * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01A8E0C0, Object *, GetObject, (ResourceSet * __this, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01A8E110, Object *, GetObjectInternal, (ResourceSet * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04739998, ResourceSet_GetObjectInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8E230, Object *, GetCaseInsensitiveObjectInternal, (ResourceSet * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04703290, ResourceSet_GetCaseInsensitiveObjectInternal__MethodInfo);
}
