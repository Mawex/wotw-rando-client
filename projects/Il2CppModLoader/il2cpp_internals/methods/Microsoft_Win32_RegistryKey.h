using namespace app;

namespace app::methods::Microsoft::Win32::RegistryKey {
IL2CPP_REGISTER_METHOD(0x023B4890, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023B4B60, void, __ctor, (RegistryKey * __this, RegistryHive__Enum hiveId));
IL2CPP_REGISTER_METHOD(0x023B4B80, void, __ctor, (RegistryKey * __this, RegistryHive__Enum hiveId, void * keyHandle, bool remoteRoot));
IL2CPP_REGISTER_METHOD(0x023B4DC0, void, __ctor, (RegistryKey * __this, Object * data, String * keyName, bool writable));
IL2CPP_REGISTER_METHOD(0x023B4DD0, bool, IsEquals, (RegistryKey * a, RegistryKey * b));
IL2CPP_REGISTER_METHOD(0x023B4E60, void, Dispose, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B5060, void, Flush, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B5120, void, Close, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B52A0, SafeRegistryHandle *, get_Handle, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B54C0, RegistryKey *, OpenSubKey, (RegistryKey * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023B54D0, RegistryKey *, OpenSubKey, (RegistryKey * __this, String * name, bool writable));
IL2CPP_REGISTER_METHODINFO(0x047793F0, RegistryKey_OpenSubKey_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B5700, Object *, GetValue, (RegistryKey * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023B5860, Object *, GetValue, (RegistryKey * __this, String * name, Object * defaultValue));
IL2CPP_REGISTER_METHOD(0x023B59D0, String__Array *, GetSubKeyNames, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B5B10, String *, ToString, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_IsRoot, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B5C50, RegistryHive__Enum, get_Hive, (RegistryKey * __this));
IL2CPP_REGISTER_METHODINFO(0x0474EA28, RegistryKey_get_Hive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_InternalHandle, (RegistryKey * __this));
IL2CPP_REGISTER_METHOD(0x023B5D20, void, AssertKeyStillValid, (RegistryKey * __this));
IL2CPP_REGISTER_METHODINFO(0x0478E6E0, RegistryKey_AssertKeyStillValid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B5DD0, void, AssertKeyNameLength, (RegistryKey * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04712DF8, RegistryKey_AssertKeyNameLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B5E90, String *, DecodeString, (Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x023B5F90, IOException *, CreateMarkedForDeletionException, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0471EBC8, RegistryKey_CreateMarkedForDeletionException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B5FF0, String *, GetHiveName, (RegistryHive__Enum hive));
IL2CPP_REGISTER_METHODINFO(0x0477ADF8, RegistryKey_GetHiveName__MethodInfo);
}
