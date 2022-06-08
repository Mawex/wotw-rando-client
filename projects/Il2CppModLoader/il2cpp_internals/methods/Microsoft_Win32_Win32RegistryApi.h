#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::Win32RegistryApi {
IL2CPP_REGISTER_METHOD(0x023B7F60, int32_t, RegCloseKey, (void * keyHandle));
IL2CPP_REGISTER_METHOD(0x023B8000, int32_t, RegFlushKey, (void * keyHandle));
IL2CPP_REGISTER_METHOD(0x023B80A0, int32_t, RegOpenKeyEx, (void * keyBase, String * keyName, void * reserved, int32_t access, void * * keyHandle));
IL2CPP_REGISTER_METHOD(0x023B8180, int32_t, RegEnumKeyEx, (void * keyHandle, int32_t dwIndex, uint16_t * lpName, int32_t * lpcbName, Int32__Array * lpReserved, StringBuilder * lpClass, Int32__Array * lpcbClass, Int64__Array * lpftLastWriteTime));
IL2CPP_REGISTER_METHOD(0x023B82B0, int32_t, RegQueryValueEx, (void * keyBase, String * valueName, void * reserved, RegistryValueKind__Enum * type, void * zero, int32_t * dataSize));
IL2CPP_REGISTER_METHOD(0x023B8390, int32_t, RegQueryValueEx, (void * keyBase, String * valueName, void * reserved, RegistryValueKind__Enum * type, Byte__Array * data, int32_t * dataSize));
IL2CPP_REGISTER_METHOD(0x023B8510, int32_t, RegQueryValueEx, (void * keyBase, String * valueName, void * reserved, RegistryValueKind__Enum * type, int32_t * data, int32_t * dataSize));
IL2CPP_REGISTER_METHOD(0x023B85F0, int32_t, RegQueryValueEx, (void * keyBase, String * valueName, void * reserved, RegistryValueKind__Enum * type, int64_t * data, int32_t * dataSize));
IL2CPP_REGISTER_METHOD(0x023B86D0, int32_t, RegQueryInfoKey, (void * hKey, StringBuilder * lpClass, Int32__Array * lpcbClass, void * lpReserved_MustBeZero, int32_t * lpcSubKeys, Int32__Array * lpcbMaxSubKeyLen, Int32__Array * lpcbMaxClassLen, int32_t * lpcValues, Int32__Array * lpcbMaxValueNameLen, Int32__Array * lpcbMaxValueLen, Int32__Array * lpcbSecurityDescriptor, Int32__Array * lpftLastWriteTime));
IL2CPP_REGISTER_METHOD(0x023B8860, void *, GetHandle, (Win32RegistryApi * __this, RegistryKey * key));
IL2CPP_REGISTER_METHOD(0x023B8910, bool, IsHandleValid, (RegistryKey * key));
IL2CPP_REGISTER_METHOD(0x023B8930, Object *, GetValue, (Win32RegistryApi * __this, RegistryKey * rkey, String * name, Object * defaultValue, RegistryValueOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x04725768, Win32RegistryApi_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B8E70, int32_t, GetBinaryValue, (Win32RegistryApi * __this, RegistryKey * rkey, String * name, RegistryValueKind__Enum type, Byte__Array * * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x023B9060, int32_t, SubKeyCount, (Win32RegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9200, RegistryKey *, OpenSubKey, (Win32RegistryApi * __this, RegistryKey * rkey, String * keyName, bool writable));
IL2CPP_REGISTER_METHOD(0x023B94F0, void, Flush, (Win32RegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B95B0, void, Close, (Win32RegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B96B0, String__Array *, GetSubKeyNames, (Win32RegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9A30, void, GenerateException, (Win32RegistryApi * __this, int32_t errorCode));
IL2CPP_REGISTER_METHODINFO(0x0475B000, Win32RegistryApi_GenerateException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529D50, String *, ToString, (Win32RegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9C20, String *, CombineName, (RegistryKey * rkey, String * localName));
IL2CPP_REGISTER_METHOD(0x023B9CC0, void, __ctor, (Win32RegistryApi * __this));
}
