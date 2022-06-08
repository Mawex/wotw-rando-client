#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsMetaProperty {
IL2CPP_REGISTER_METHOD(0x01658810, void, __ctor, (fsMetaProperty * __this, fsConfig * config, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x016588D0, void, __ctor, (fsMetaProperty * __this, fsConfig * config, PropertyInfo_1 * property));
IL2CPP_REGISTER_METHOD(0x01658A50, void, CommonInitialize, (fsMetaProperty * __this, fsConfig * config));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_StorageType, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StorageType, (fsMetaProperty * __this, Type * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_OverrideConverterType, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_OverrideConverterType, (fsMetaProperty * __this, Type * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanRead, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CanRead, (fsMetaProperty * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_CanWrite, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_CanWrite, (fsMetaProperty * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_JsonName, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_JsonName, (fsMetaProperty * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_MemberName, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_MemberName, (fsMetaProperty * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPublic, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsPublic, (fsMetaProperty * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsReadOnly, (fsMetaProperty * __this));
IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsReadOnly, (fsMetaProperty * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01658B60, void, Write, (fsMetaProperty * __this, Object * context, Object * value));
IL2CPP_REGISTER_METHOD(0x01658DA0, Object *, Read, (fsMetaProperty * __this, Object * context));
}
