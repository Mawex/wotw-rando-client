using namespace app;

namespace app::methods::System::GC {
IL2CPP_REGISTER_METHOD(0x01A1CB50, int32_t, GetCollectionCount, (int32_t generation));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetMaxGeneration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A1CB60, void, InternalCollect, (int32_t generation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, register_ephemeron_array, (Ephemeron__Array * array));
IL2CPP_REGISTER_METHOD(0x01A1CB80, Object *, get_ephemeron_tombstone, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A1CC50, void, Collect, (int32_t generation));
IL2CPP_REGISTER_METHOD(0x01A1CCF0, void, Collect, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A1CDA0, void, Collect, (int32_t generation, GCCollectionMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x01A1CE50, void, Collect, (int32_t generation, GCCollectionMode__Enum mode, bool blocking));
IL2CPP_REGISTER_METHOD(0x01A1D010, void, Collect, (int32_t generation, GCCollectionMode__Enum mode, bool blocking, bool compacting));
IL2CPP_REGISTER_METHODINFO(0x0478BD80, GC_1_Collect_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1D150, int32_t, CollectionCount, (int32_t generation));
IL2CPP_REGISTER_METHODINFO(0x04740458, GC_1_CollectionCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, KeepAlive, (Object * obj));
IL2CPP_REGISTER_METHOD(0x01A1D240, int32_t, get_MaxGeneration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A1D2D0, void, _SuppressFinalize, (Object * o));
IL2CPP_REGISTER_METHOD(0x01A1D3C0, void, SuppressFinalize, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047352D8, GC_1_SuppressFinalize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1D540, void, _ReRegisterForFinalize, (Object * o));
IL2CPP_REGISTER_METHOD(0x01A1D640, void, ReRegisterForFinalize, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04774E18, GC_1_ReRegisterForFinalize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1D7C0, int64_t, GetTotalMemory, (bool forceFullCollection));
IL2CPP_REGISTER_METHOD(0x01A1D7F0, void, __cctor, (MethodInfo * method));
}
