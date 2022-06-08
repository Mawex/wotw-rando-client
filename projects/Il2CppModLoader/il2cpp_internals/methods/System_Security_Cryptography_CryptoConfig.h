#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::CryptoConfig {
IL2CPP_REGISTER_METHOD(0x020C91F0, Byte__Array *, EncodeOID, (String * str));
IL2CPP_REGISTER_METHODINFO(0x0477C5B0, CryptoConfig_EncodeOID__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C9690, Byte__Array *, EncodeLongNumber, (int64_t x));
IL2CPP_REGISTER_METHODINFO(0x04766D58, CryptoConfig_EncodeLongNumber__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowOnlyFipsAlgorithms, ());
IL2CPP_REGISTER_METHOD(0x020C9840, void, AddAlgorithm, (Type * algorithm, String__Array * names));
IL2CPP_REGISTER_METHODINFO(0x04726578, CryptoConfig_AddAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C9890, void, AddOID, (String * oid, String__Array * names));
IL2CPP_REGISTER_METHODINFO(0x04736F70, CryptoConfig_AddOID__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C98E0, Object *, CreateFromName, (String * name));
IL2CPP_REGISTER_METHOD(0x020C98F0, Object *, CreateFromName, (String * name, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0470EDC0, CryptoConfig_CreateFromName_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CC640, String *, MapNameToOID, (String * name, Object * arg));
IL2CPP_REGISTER_METHOD(0x020CC650, String *, MapNameToOID, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04730F38, CryptoConfig_MapNameToOID_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CryptoConfig * __this));
}
