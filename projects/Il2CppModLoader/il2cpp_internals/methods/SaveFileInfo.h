#include <interception_macros.h>

namespace app::methods::SaveFileInfo {
    IL2CPP_REGISTER_METHOD(0x00C2B030, void, __ctor, (app::SaveFileInfo * this_ptr, app::String* folder_path, app::String* file_name, int32_t slot_index, int32_t backup_slot_index));
    IL2CPP_REGISTER_METHOD(0x00C2B260, String*, get_GetCurrentSaveFilePath, (app::SaveFileInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, String*, get_FolderPath, (app::SaveFileInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, String*, get_FullSaveFilePath, (app::SaveFileInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, String*, get_FullBackupSaveFilePath, (app::SaveFileInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C2B270, String*, get_SaveFileExtention, ());
} // namespace app::methods::SaveFileInfo
