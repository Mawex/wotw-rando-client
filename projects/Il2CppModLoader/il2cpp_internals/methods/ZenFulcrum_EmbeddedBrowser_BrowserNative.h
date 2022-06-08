using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative {
IL2CPP_REGISTER_METHOD(0x01C74AB0, String *, get_LocalUrlPrefix, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C74B30, bool, get_NativeLoaded, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C74BD0, void, set_NativeLoaded, (bool value));
IL2CPP_REGISTER_METHOD(0x01C74C80, bool, get_SymbolsLoaded, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C74D20, void, set_SymbolsLoaded, (bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LogCallback, (String * message));
IL2CPP_REGISTER_METHODINFO(0x04763008, BrowserNative_LogCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C74DD0, String *, get_ProfilePath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C74E70, void, set_ProfilePath, (String * value));
IL2CPP_REGISTER_METHODINFO(0x0476F208, BrowserNative_set_ProfilePath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C74F70, void, LoadSymbols, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x047423E8, BrowserNative_LoadSymbols__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C750B0, void, LoadNative, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0475CFB8, BrowserNative_LoadNative__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C75BE0, void, FixProcessPermissions, (FileLocations_CEFDirs * dirs));
IL2CPP_REGISTER_METHOD(0x01C75C20, void, HandLoadSymbols, (String * binariesPath));
IL2CPP_REGISTER_METHOD(0x01C75F00, void, ClearSymbols, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C760C0, String *, GetLibError, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C76280, void *, OpenLib, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04727B30, BrowserNative_OpenLib__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C764A0, void, CloseLib, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x047645D8, BrowserNative_CloseLib__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C76700, void *, GetFunc, (void * libHandle, String * fnName));
IL2CPP_REGISTER_METHODINFO(0x0478A9B8, BrowserNative_GetFunc__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C76970, void *, LoadLibraryW, (String * lpFileName));
IL2CPP_REGISTER_METHOD(0x01C76A60, void *, GetProcAddress, (void * hModule, String * procName));
IL2CPP_REGISTER_METHOD(0x01C76C30, bool, FreeLibrary, (void * hModule));
IL2CPP_REGISTER_METHOD(0x01C76D30, void, NewRequestCallback, (int32_t requestId, String * url));
IL2CPP_REGISTER_METHODINFO(0x04748C20, BrowserNative_NewRequestCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C76E10, void, UnloadNative, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C77050, void, __cctor, (MethodInfo * method));
}
