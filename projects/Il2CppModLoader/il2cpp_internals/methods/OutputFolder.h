#include <interception_macros.h>

namespace app::methods::OutputFolder {
IL2CPP_REGISTER_METHOD(0x00441710, String *, get_AppData, ());
IL2CPP_REGISTER_METHOD(0x00441A50, String *, get_PlayerDataFolderPath, ());
IL2CPP_REGISTER_METHOD(0x00441CE0, String *, get_PlayerTrialDataFolderPath, ());
IL2CPP_REGISTER_METHOD(0x00441EE0, String *, get_OutputPathNonHost, ());
IL2CPP_REGISTER_METHOD(0x00441FF0, String *, get_BuildOutputPath, ());
IL2CPP_REGISTER_METHOD(0x00442250, void, ResetBuildOutputPath, ());
IL2CPP_REGISTER_METHOD(0x004422F0, void, __cctor, ());
}
