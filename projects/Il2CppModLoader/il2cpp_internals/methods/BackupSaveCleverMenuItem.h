#include <interception_macros.h>

namespace app::methods::BackupSaveCleverMenuItem {
IL2CPP_REGISTER_METHOD(0x00F814B0, void, OnDisable, (BackupSaveCleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00F81610, void, SetData, (BackupSaveCleverMenuItem * __this, SaveSlotInfo * saveSlot, int32_t saveSlotIndex, int32_t displayIndex));
IL2CPP_REGISTER_METHOD(0x00F81D50, void, OnPress, (BackupSaveCleverMenuItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04753760, BackupSaveCleverMenuItem_OnPress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F81D90, void, __ctor, (BackupSaveCleverMenuItem * __this));
}
