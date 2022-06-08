using namespace app;

namespace app::methods::OutputFolder {
IL2CPP_REGISTER_METHOD(0x00441710, String *, get_AppData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00441A50, String *, get_PlayerDataFolderPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00441CE0, String *, get_PlayerTrialDataFolderPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00441EE0, String *, get_OutputPathNonHost, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00441FF0, String *, get_BuildOutputPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00442250, void, ResetBuildOutputPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004422F0, void, __cctor, (MethodInfo * method));
}
