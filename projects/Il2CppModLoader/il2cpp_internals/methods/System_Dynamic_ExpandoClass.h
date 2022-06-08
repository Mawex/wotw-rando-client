using namespace app;

namespace app::methods::System::Dynamic::ExpandoClass {
IL2CPP_REGISTER_METHOD(0x01F8BAC0, void, __ctor, (ExpandoClass * __this));
IL2CPP_REGISTER_METHOD(0x01F8BB50, void, __ctor, (ExpandoClass * __this, String__Array * keys, int32_t hashCode));
IL2CPP_REGISTER_METHOD(0x01F8BB60, ExpandoClass *, FindNewClass, (ExpandoClass * __this, String * newKey));
IL2CPP_REGISTER_METHOD(0x01F8C110, List_1_System_WeakReference_ *, GetTransitionList, (ExpandoClass * __this, int32_t hashCode));
IL2CPP_REGISTER_METHOD(0x01F8C420, int32_t, GetValueIndex, (ExpandoClass * __this, String * name, bool caseInsensitive, ExpandoObject * obj));
IL2CPP_REGISTER_METHOD(0x01F8C440, int32_t, GetValueIndexCaseSensitive, (ExpandoClass * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F8C580, int32_t, GetValueIndexCaseInsensitive, (ExpandoClass * __this, String * name, ExpandoObject * obj));
IL2CPP_REGISTER_METHOD(0x002FA280, String__Array *, get_Keys, (ExpandoClass * __this));
IL2CPP_REGISTER_METHOD(0x01F8C860, void, __cctor, (MethodInfo * method));
}
