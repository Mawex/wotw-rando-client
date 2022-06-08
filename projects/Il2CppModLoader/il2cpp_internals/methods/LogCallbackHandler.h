using namespace app;

namespace app::methods::LogCallbackHandler {
IL2CPP_REGISTER_METHOD(0x0318F920, void, __ctor, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x0318FB90, void, RemoveHandler, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x0318FC30, void, FlushEntriesToFile, (LogCallbackHandler * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x03190230, void, HandleException, (LogCallbackHandler * __this, String * condition, String * stackTrace, LogType__Enum type));
IL2CPP_REGISTER_METHOD(0x03190430, void, MoveTempEntries, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x03190570, int32_t, GetEditorEntriesCount, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x03190580, void, ClearLogEntries, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x00447ED0, void, Show, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x00CE0760, void, Hide, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsVisible, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x03190640, bool, ShouldFilterOut, (LogCallbackHandler * __this, String * msg));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldShowWarnings, (LogCallbackHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
