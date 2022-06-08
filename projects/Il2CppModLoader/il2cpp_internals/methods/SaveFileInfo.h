#include <interception_macros.h>

namespace app::methods::SaveFileInfo {
IL2CPP_REGISTER_METHOD(0x00C2B030, void, __ctor, (SaveFileInfo * __this, String * folderPath, String * fileName, int32_t slotIndex, int32_t backupSlotIndex));
IL2CPP_REGISTER_METHOD(0x00C2B260, String *, get_GetCurrentSaveFilePath, (SaveFileInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_FolderPath, (SaveFileInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_FullSaveFilePath, (SaveFileInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_FullBackupSaveFilePath, (SaveFileInfo * __this));
IL2CPP_REGISTER_METHOD(0x00C2B270, String *, get_SaveFileExtention, ());
}
