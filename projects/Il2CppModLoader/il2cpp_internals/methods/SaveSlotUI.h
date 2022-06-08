using namespace app;

namespace app::methods::SaveSlotUI {
IL2CPP_REGISTER_METHOD(0x009238D0, void, OnDrawGizmos, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00923B20, Rect, get_Bounds, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00923D50, bool, get_CanBeCopied, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00923D70, bool, get_HasSave, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00923EE0, void, OnEnable, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00924200, void, Awake, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x009242A0, void, OnDestroy, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00924340, void, Start, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00924490, void, Highlight, (SaveSlotUI * __this, bool turnOn));
IL2CPP_REGISTER_METHOD(0x00924640, void, RefreshBackupsIfTheyNeedIt, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00924700, void, ClearBackupSaveSlots, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFinishedReadingBackups, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x009248C0, void, FixedUpdate, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00924D50, void, ChangeSelectionIndex, (SaveSlotUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00925160, void, SetCopying, (SaveSlotUI * __this, bool turnOn));
IL2CPP_REGISTER_METHOD(0x009251F0, void, SetDeleting, (SaveSlotUI * __this, bool turnOn));
IL2CPP_REGISTER_METHOD(0x00925290, void, SetBusy, (SaveSlotUI * __this, bool turnOn));
IL2CPP_REGISTER_METHOD(0x009253B0, SaveSlotInfo *, get_SaveSlot, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x009253C0, bool, get_IsReady, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00925400, bool, get_IsCompleted, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00925450, int32_t, get_BackupIndex, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00925620, MessageDescriptor, DifficultyModeToMessage, (SaveSlotUI * __this, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x00925730, void, Apply, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00926B00, bool, get_IsSuspended, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00926B10, void, set_IsSuspended, (SaveSlotUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0068A510, SuspendableMask__Enum, get_Mask, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00926B20, void, set_Mask, (SaveSlotUI * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00926BE0, void, RefreshBackups, (SaveSlotUI * __this));
IL2CPP_REGISTER_METHOD(0x00926CB0, void, __ctor, (SaveSlotUI * __this));
}
