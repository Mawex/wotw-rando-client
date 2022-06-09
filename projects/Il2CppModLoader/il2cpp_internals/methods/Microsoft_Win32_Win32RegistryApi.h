#include <interception_macros.h>

namespace app::methods::Microsoft_Win32::Win32RegistryApi {
IL2CPP_REGISTER_METHOD(0x023B7F60, int32_t, RegCloseKey, (app::void * key_handle));
IL2CPP_REGISTER_METHOD(0x023B8000, int32_t, RegFlushKey, (app::void * key_handle));
IL2CPP_REGISTER_METHOD(0x023B80A0, int32_t, RegOpenKeyEx, (app::void * key_base, app::String * key_name, app::void * reserved, int32_t access, app::void * * key_handle));
IL2CPP_REGISTER_METHOD(0x023B8180, int32_t, RegEnumKeyEx, (app::void * key_handle, int32_t dw_index, app::uint16_t * lp_name, app::int32_t * lpcb_name, app::Int32__Array * lp_reserved, app::StringBuilder * lp_class, app::Int32__Array * lpcb_class, app::Int64__Array * lpft_last_write_time));
IL2CPP_REGISTER_METHOD(0x023B82B0, int32_t, RegQueryValueEx_1, (app::void * key_base, app::String * value_name, app::void * reserved, app::RegistryValueKind__Enum * type, app::void * zero, app::int32_t * data_size));
IL2CPP_REGISTER_METHOD(0x023B8390, int32_t, RegQueryValueEx_2, (app::void * key_base, app::String * value_name, app::void * reserved, app::RegistryValueKind__Enum * type, app::Byte__Array * data, app::int32_t * data_size));
IL2CPP_REGISTER_METHOD(0x023B8510, int32_t, RegQueryValueEx_3, (app::void * key_base, app::String * value_name, app::void * reserved, app::RegistryValueKind__Enum * type, app::int32_t * data, app::int32_t * data_size));
IL2CPP_REGISTER_METHOD(0x023B85F0, int32_t, RegQueryValueEx_4, (app::void * key_base, app::String * value_name, app::void * reserved, app::RegistryValueKind__Enum * type, app::int64_t * data, app::int32_t * data_size));
IL2CPP_REGISTER_METHOD(0x023B86D0, int32_t, RegQueryInfoKey, (app::void * h_key, app::StringBuilder * lp_class, app::Int32__Array * lpcb_class, app::void * lp_reserved__must_be_zero, app::int32_t * lpc_sub_keys, app::Int32__Array * lpcb_max_sub_key_len, app::Int32__Array * lpcb_max_class_len, app::int32_t * lpc_values, app::Int32__Array * lpcb_max_value_name_len, app::Int32__Array * lpcb_max_value_len, app::Int32__Array * lpcb_security_descriptor, app::Int32__Array * lpft_last_write_time));
IL2CPP_REGISTER_METHOD(0x023B8860, void *, GetHandle, (app::Win32RegistryApi * this_ptr, app::RegistryKey * key));
IL2CPP_REGISTER_METHOD(0x023B8910, bool, IsHandleValid, (app::RegistryKey * key));
IL2CPP_REGISTER_METHOD(0x023B8930, Object *, GetValue, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey, app::String * name, app::Object * default_value, app::RegistryValueOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x04725768, Win32RegistryApi_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023B8E70, int32_t, GetBinaryValue, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey, app::String * name, app::RegistryValueKind__Enum type, app::Byte__Array * * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x023B9060, int32_t, SubKeyCount, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9200, RegistryKey *, OpenSubKey, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey, app::String * key_name, bool writable));
IL2CPP_REGISTER_METHOD(0x023B94F0, void, Flush, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B95B0, void, Close, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B96B0, String__Array *, GetSubKeyNames, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9A30, void, GenerateException, (app::Win32RegistryApi * this_ptr, int32_t error_code));
IL2CPP_REGISTER_METHODINFO(0x0475B000, Win32RegistryApi_GenerateException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529D50, String *, ToString, (app::Win32RegistryApi * this_ptr, app::RegistryKey * rkey));
IL2CPP_REGISTER_METHOD(0x023B9C20, String *, CombineName, (app::RegistryKey * rkey, app::String * local_name));
IL2CPP_REGISTER_METHOD(0x023B9CC0, void, __ctor, (app::Win32RegistryApi * this_ptr));
}
