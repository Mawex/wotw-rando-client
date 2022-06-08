using namespace app;

namespace app::methods::System::Data::InternalDataCollectionBase {
IL2CPP_REGISTER_METHOD(0x01E3FA80, int32_t, get_Count, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x01E3FAC0, void, CopyTo, (InternalDataCollectionBase * __this, Array * ar, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E3FB10, IEnumerator *, GetEnumerator, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x01E3FB50, int32_t, NamesEqual, (InternalDataCollectionBase * __this, String * s1, String * s2, bool fCaseSensitive, CultureInfo * locale));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ArrayList *, get_List, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InternalDataCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x01E3FC50, void, __cctor, (MethodInfo * method));
}
