using namespace app;

namespace app::methods::SaveSlotsManager {
IL2CPP_REGISTER_METHOD(0x00927F30, UberStateValueStore *, get_SelectedSlotUberStateValueStore, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00928050, void, set_SelectedSlotUberStateValueStore, (UberStateValueStore * value));
IL2CPP_REGISTER_METHOD(0x009280F0, int32_t, get_CurrentSlotIndex, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00928180, void, set_CurrentSlotIndex, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00928210, int32_t, get_BackupIndex, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009282A0, void, set_BackupIndex, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00928370, int32_t, get_PreviousBackupIndex, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00928400, void, set_PreviousBackupIndex, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00928490, SaveSlotInfo *, get_CurrentSaveSlot, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009285D0, bool, SlotExists, (int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x009285F0, SaveSlotInfo *, FindOrCreateSaveSlot, (int32_t slotIndex));
IL2CPP_REGISTER_METHOD(0x009287C0, void, Awake, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x00928C50, void, OnDestroy, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x00928DD0, bool, get_AnySaveSlotsExist, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x00928FB0, int32_t, get_SaveSlotCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00929050, SaveSlotInfo *, SlotByIndex, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00929130, void, CopySlot, (int32_t from, int32_t to));
IL2CPP_REGISTER_METHOD(0x009294F0, bool, SaveFileExists, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00929640, void, DeleteSlot, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00929950, void, FixedUpdate, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x00929A30, void, PrepareSlots, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04703078, SaveSlotsManager_PrepareSlots__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00929A40, void, PrepareSlots, (bool initNotifications));
IL2CPP_REGISTER_METHOD(0x0092A350, void, add_SlotsPrepared, (Action * value));
IL2CPP_REGISTER_METHOD(0x0092A450, void, remove_SlotsPrepared, (Action * value));
IL2CPP_REGISTER_METHOD(0x0092A550, bool, SaveSlotCompleted, (SaveSlotsManager * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0092A620, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0092A6A0, bool, IsCurrentSaveSlotValid, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x0092A810, void, ResetBackupIndex, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x0092A8B0, void, RestorePreviousIndex, (SaveSlotsManager * __this));
IL2CPP_REGISTER_METHOD(0x0092A940, void, __ctor, (SaveSlotsManager * __this));
}
