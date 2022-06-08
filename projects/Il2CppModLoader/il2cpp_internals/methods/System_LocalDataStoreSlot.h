using namespace app;

namespace app::methods::System::LocalDataStoreSlot {
IL2CPP_REGISTER_METHOD(0x0199E410, void, __ctor, (LocalDataStoreSlot * __this, LocalDataStoreMgr * mgr, int32_t slot, int64_t cookie));
IL2CPP_REGISTER_METHOD(0x002FA280, LocalDataStoreMgr *, get_Manager, (LocalDataStoreSlot * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Slot, (LocalDataStoreSlot * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_Cookie, (LocalDataStoreSlot * __this));
IL2CPP_REGISTER_METHOD(0x02267E50, void, Finalize, (LocalDataStoreSlot * __this));
}
