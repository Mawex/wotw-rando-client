using namespace app;

namespace app::methods::XboxOneSave {
IL2CPP_REGISTER_METHOD(0x01C598B0, XboxOneSave *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSlotsAllQueried, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04704520, XboxOneSave_OnSlotsAllQueried__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, SaveGameAvailableInSlot, (int32_t index));
IL2CPP_REGISTER_METHOD(0x01C59950, bool, DeleteSaveGame, (int32_t index, int32_t backupIndex));
IL2CPP_REGISTER_METHOD(0x01C59A90, Task *, Delete, (String * file));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SaveGameAvailable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SaveGameQueried, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, Byte__Array *, SaveGameData, (int32_t slot, int32_t backup));
IL2CPP_REGISTER_METHOD(0x00420EE0, Byte__Array *, SaveGameData, (String * bufferName));
IL2CPP_REGISTER_METHOD(0x01C59B20, bool, get_EnableSave, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C59BC0, void, set_EnableSave, (bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearSaveGameCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequireStorage, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, SaveGameName, (int32_t slotIndex, int32_t backupIndex));
IL2CPP_REGISTER_METHOD(0x01C59C70, void, CopySaveGame, (int32_t sourceSlot, int32_t destSlot));
IL2CPP_REGISTER_METHOD(0x01C59D90, bool, UpdateSaveGame, (int32_t slotIndex, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA280, Queue_1_System_Action_ *, get_QueuedStorageOperations, (XboxOneSave * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Queue_1_System_String_ *, get_QueuedStorageOperationNames, (XboxOneSave * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStorageBusy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StorageHasOperationsInProgress, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, UpdateSaveGame, (String * bufferName, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (String * s));
IL2CPP_REGISTER_METHOD(0x00417870, bool, WriteSaveGame, (Byte__Array * data, int32_t saveSlot, String * saveGameName, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x00417870, bool, WriteSaveGame, (Byte__Array * data, String * bufferName, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x01C5A0D0, Task_1_System_Collections_Generic_IEnumerable_1_ *, LoadAndCacheDataFor, (String__Array * buffers));
IL2CPP_REGISTER_METHOD(0x01C5A350, Task_1_System_Byte_ *, GetAsync, (String * bufferName));
IL2CPP_REGISTER_METHOD(0x01C5A4C0, Task_1_System_Boolean_ *, Write, (Tuple_2_String_Byte___Array * dataPairs));
IL2CPP_REGISTER_METHOD(0x01C5A810, void, __ctor, (XboxOneSave * __this));
IL2CPP_REGISTER_METHOD(0x01C5AA60, void, __cctor, (MethodInfo * method));
}
