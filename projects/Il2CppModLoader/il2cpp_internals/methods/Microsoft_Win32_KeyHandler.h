using namespace app;

namespace app::methods::Microsoft::Win32::KeyHandler {
IL2CPP_REGISTER_METHOD(0x023AE8E0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023AEEE0, void, __ctor, (KeyHandler * __this, RegistryKey * rkey, String * basedir));
IL2CPP_REGISTER_METHOD(0x023AEF00, void, __ctor, (KeyHandler * __this, RegistryKey * rkey, String * basedir, bool is_volatile));
IL2CPP_REGISTER_METHODINFO(0x0474ACC8, KeyHandler__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023AF0A0, void, Load, (KeyHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DCE0, KeyHandler_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023AF680, void, LoadKey, (KeyHandler * __this, SecurityElement * se));
IL2CPP_REGISTER_METHOD(0x023AFDA0, RegistryKey *, Ensure, (KeyHandler * __this, RegistryKey * rkey, String * extra, bool writable, bool is_volatile));
IL2CPP_REGISTER_METHOD(0x023B0260, RegistryKey *, Probe, (KeyHandler * __this, RegistryKey * rkey, String * extra, bool writable));
IL2CPP_REGISTER_METHOD(0x023B0890, String *, CombineName, (RegistryKey * rkey, String * extra));
IL2CPP_REGISTER_METHOD(0x023B0980, int64_t, GetSystemBootTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023B0CC0, int64_t, GetRegisteredBootTime, (String * path));
IL2CPP_REGISTER_METHOD(0x023B0FA0, void, SaveRegisteredBootTime, (String * path, int64_t btime));
IL2CPP_REGISTER_METHOD(0x023B11E0, void, CleanVolatileKeys, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023B1480, bool, VolatileKeyExists, (String * dir));
IL2CPP_REGISTER_METHOD(0x023B1730, String *, GetVolatileDir, (String * dir));
IL2CPP_REGISTER_METHOD(0x023B1830, KeyHandler *, Lookup, (RegistryKey * rkey, bool createNonExisting));
IL2CPP_REGISTER_METHODINFO(0x04732860, KeyHandler_Lookup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B1F70, String *, GetRootFromDir, (String * dir));
IL2CPP_REGISTER_METHODINFO(0x04728698, KeyHandler_GetRootFromDir__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B2120, void, Drop, (RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B25E0, Object *, GetValue, (KeyHandler * __this, String * name, RegistryValueOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x023B2820, String__Array *, GetSubKeyNames, (KeyHandler * __this));
IL2CPP_REGISTER_METHOD(0x023B2F70, void, Flush, (KeyHandler * __this));
IL2CPP_REGISTER_METHOD(0x023B30F0, bool, ValueExists, (KeyHandler * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023B3280, bool, get_IsMarkedForDeletion, (KeyHandler * __this));
IL2CPP_REGISTER_METHOD(0x023B3350, void, Finalize, (KeyHandler * __this));
IL2CPP_REGISTER_METHOD(0x023B33E0, void, Save, (KeyHandler * __this));
IL2CPP_REGISTER_METHOD(0x023B3E60, String *, get_UserStore, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023B3FC0, String *, get_MachineStore, (MethodInfo * method));
}
