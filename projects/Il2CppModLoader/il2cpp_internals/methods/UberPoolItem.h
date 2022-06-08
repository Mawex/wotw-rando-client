using namespace app;

namespace app::methods::UberPoolItem {
IL2CPP_REGISTER_METHOD(0x00FD5D20, bool, get_IsFree, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDestroyed, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD5D90, void, OnSpawned, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD6020, void, SetActive, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD6180, void, OnDespawn, (UberPoolItem * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x00FD64C0, void, ResetPosition, (UberPoolItem * __this, Transform * trans));
IL2CPP_REGISTER_METHOD(0x00FD6820, void, OnNewlyCreated, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD6BC0, void, OnDecease, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD6BF0, void, CheckNotDeceased, (UberPoolItem * __this));
IL2CPP_REGISTER_METHOD(0x00FD6C00, void, ReportAlreadyDeceased, (UberPoolItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04779570, UberPoolItem_ReportAlreadyDeceased__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FD6D00, void, AddStateRecurs, (UberPoolItem * __this, Transform * trans, List_1_UnityEngine_GameObject_ * activeAtStart, List_1_UnityEngine_Transform_ * children));
IL2CPP_REGISTER_METHOD(0x00FD7290, void, AddEntryRecurs, (UberPoolItem * __this, Dictionary_2_System_Int32_UberPoolItem_ * add, GameObject * go));
IL2CPP_REGISTER_METHOD(0x00FD7550, void, AddEntries, (UberPoolItem * __this, Dictionary_2_System_Int32_UberPoolItem_ * spawnedToItem));
IL2CPP_REGISTER_METHOD(0x004C6650, void, SetExplicitDestroy, (UberPoolItem * __this, bool destroyed));
IL2CPP_REGISTER_METHOD(0x00FD7560, void, __ctor, (UberPoolItem * __this));
}
