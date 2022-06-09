#include <interception_macros.h>

namespace app::methods::Microsoft_Win32::KeyHandler {
IL2CPP_REGISTER_METHOD(0x023AE8E0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x023AEEE0, void, __ctor_1, (app::KeyHandler * this_ptr, app::RegistryKey * rkey, app::String * basedir));
IL2CPP_REGISTER_METHOD(0x023AEF00, void, __ctor_2, (app::KeyHandler * this_ptr, app::RegistryKey * rkey, app::String * basedir, bool is_volatile));
IL2CPP_REGISTER_METHODINFO(0x0474ACC8, KeyHandler__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023AF0A0, void, Load, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471DCE0, KeyHandler_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023AF680, void, LoadKey, (app::KeyHandler * this_ptr, app::SecurityElement * se));
IL2CPP_REGISTER_METHOD(0x023AFDA0, RegistryKey *, Ensure, (app::KeyHandler * this_ptr, app::RegistryKey * rkey, app::String * extra, bool writable, bool is_volatile));
IL2CPP_REGISTER_METHOD(0x023B0260, RegistryKey *, Probe, (app::KeyHandler * this_ptr, app::RegistryKey * rkey, app::String * extra, bool writable));
IL2CPP_REGISTER_METHOD(0x023B0890, String *, CombineName, (app::RegistryKey * rkey, app::String * extra));
IL2CPP_REGISTER_METHOD(0x023B0980, int64_t, GetSystemBootTime, ());
IL2CPP_REGISTER_METHOD(0x023B0CC0, int64_t, GetRegisteredBootTime, (app::String * path));
IL2CPP_REGISTER_METHOD(0x023B0FA0, void, SaveRegisteredBootTime, (app::String * path, int64_t btime));
IL2CPP_REGISTER_METHOD(0x023B11E0, void, CleanVolatileKeys, ());
IL2CPP_REGISTER_METHOD(0x023B1480, bool, VolatileKeyExists, (app::String * dir));
IL2CPP_REGISTER_METHOD(0x023B1730, String *, GetVolatileDir, (app::String * dir));
IL2CPP_REGISTER_METHOD(0x023B1830, KeyHandler *, Lookup, (app::RegistryKey * rkey, bool create_non_existing));
IL2CPP_REGISTER_METHODINFO(0x04732860, KeyHandler_Lookup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B1F70, String *, GetRootFromDir, (app::String * dir));
IL2CPP_REGISTER_METHODINFO(0x04728698, KeyHandler_GetRootFromDir__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B2120, void, Drop, (app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B25E0, Object *, GetValue, (app::KeyHandler * this_ptr, app::String * name, app::RegistryValueOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x023B2820, String__Array *, GetSubKeyNames, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x023B2F70, void, Flush, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x023B30F0, bool, ValueExists, (app::KeyHandler * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x023B3280, bool, get_IsMarkedForDeletion, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x023B3350, void, Finalize, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x023B33E0, void, Save, (app::KeyHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x023B3E60, String *, get_UserStore, ());
IL2CPP_REGISTER_METHOD(0x023B3FC0, String *, get_MachineStore, ());
}
