using namespace app;

namespace app::methods::Microsoft::Win32::UnixRegistryApi {
IL2CPP_REGISTER_METHOD(0x023B6600, String *, ToUnix, (String * keyname));
IL2CPP_REGISTER_METHOD(0x023B6670, bool, IsWellKnownKey, (String * parentKeyName, String * keyname));
IL2CPP_REGISTER_METHOD(0x023B6820, RegistryKey *, OpenSubKey, (UnixRegistryApi * __this, RegistryKey * rkey, String * keyname, bool writable));
IL2CPP_REGISTER_METHOD(0x023B6A90, void, Flush, (UnixRegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B6B40, void, Close, (UnixRegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B6BE0, Object *, GetValue, (UnixRegistryApi * __this, RegistryKey * rkey, String * name, Object * default_value, RegistryValueOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x023B6CD0, String__Array *, GetSubKeyNames, (UnixRegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x00529D50, String *, ToString, (UnixRegistryApi * __this, RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B6D80, RegistryKey *, CreateSubKey, (UnixRegistryApi * __this, RegistryKey * rkey, String * keyname, bool writable));
IL2CPP_REGISTER_METHOD(0x023B6F00, RegistryKey *, CreateSubKey, (UnixRegistryApi * __this, RegistryKey * rkey, String * keyname, bool writable, bool is_volatile));
IL2CPP_REGISTER_METHODINFO(0x04784678, UnixRegistryApi_CreateSubKey_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B70A0, void *, GetHandle, (UnixRegistryApi * __this, RegistryKey * key));
IL2CPP_REGISTER_METHODINFO(0x0477E490, UnixRegistryApi_GetHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UnixRegistryApi * __this));
}
