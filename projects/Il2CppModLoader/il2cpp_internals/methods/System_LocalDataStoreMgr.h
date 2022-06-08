using namespace app;

namespace app::methods::System::LocalDataStoreMgr {
IL2CPP_REGISTER_METHOD(0x02266C80, LocalDataStoreHolder *, CreateLocalDataStore, (LocalDataStoreMgr * __this));
IL2CPP_REGISTER_METHOD(0x02266FC0, void, DeleteLocalDataStore, (LocalDataStoreMgr * __this, LocalDataStore * store));
IL2CPP_REGISTER_METHOD(0x02267110, LocalDataStoreSlot *, AllocateDataSlot, (LocalDataStoreMgr * __this));
IL2CPP_REGISTER_METHODINFO(0x04789918, LocalDataStoreMgr_AllocateDataSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02267450, LocalDataStoreSlot *, AllocateNamedDataSlot, (LocalDataStoreMgr * __this, String * name));
IL2CPP_REGISTER_METHOD(0x022675F0, LocalDataStoreSlot *, GetNamedDataSlot, (LocalDataStoreMgr * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02267780, void, FreeNamedDataSlot, (LocalDataStoreMgr * __this, String * name));
IL2CPP_REGISTER_METHOD(0x022678D0, void, FreeDataSlot, (LocalDataStoreMgr * __this, int32_t slot, int64_t cookie));
IL2CPP_REGISTER_METHOD(0x02267B30, void, ValidateSlot, (LocalDataStoreMgr * __this, LocalDataStoreSlot * slot));
IL2CPP_REGISTER_METHODINFO(0x04718518, LocalDataStoreMgr_ValidateSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, GetSlotTableLength, (LocalDataStoreMgr * __this));
IL2CPP_REGISTER_METHOD(0x02267C00, void, __ctor, (LocalDataStoreMgr * __this));
}
