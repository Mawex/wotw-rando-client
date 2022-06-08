using namespace app;

namespace app::methods::Mono::Security::Cryptography::KeyPairPersistence {
IL2CPP_REGISTER_METHOD(0x025CC460, void, __ctor, (KeyPairPersistence * __this, CspParameters * parameters));
IL2CPP_REGISTER_METHOD(0x025CC530, void, __ctor, (KeyPairPersistence * __this, CspParameters * parameters, String * keyPair));
IL2CPP_REGISTER_METHODINFO(0x0471A2C8, KeyPairPersistence__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CC610, String *, get_Filename, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_KeyValue, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CC7F0, void, set_KeyValue, (KeyPairPersistence * __this, String * value));
IL2CPP_REGISTER_METHOD(0x025CC800, CspParameters *, get_Parameters, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CC810, bool, Load, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CC990, void, Save, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CCC80, void, Remove, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CCCA0, String *, get_UserPath, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04706530, KeyPairPersistence_get_UserPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CD210, String *, get_MachinePath, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04795E38, KeyPairPersistence_get_MachinePath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, _CanSecure, (String * root));
IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProtectUser, (String * path));
IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProtectMachine, (String * path));
IL2CPP_REGISTER_METHOD(0x00417870, bool, _IsUserProtected, (String * path));
IL2CPP_REGISTER_METHOD(0x00417870, bool, _IsMachineProtected, (String * path));
IL2CPP_REGISTER_METHOD(0x025CD790, bool, CanSecure, (String * path));
IL2CPP_REGISTER_METHOD(0x025CD880, bool, ProtectUser, (String * path));
IL2CPP_REGISTER_METHOD(0x025CD950, bool, ProtectMachine, (String * path));
IL2CPP_REGISTER_METHOD(0x025CDA20, bool, IsUserProtected, (String * path));
IL2CPP_REGISTER_METHOD(0x025CDAF0, bool, IsMachineProtected, (String * path));
IL2CPP_REGISTER_METHOD(0x01854CD0, bool, get_CanChange, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CDBC0, bool, get_UseDefaultKeyContainer, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CDBE0, bool, get_UseMachineKeyStore, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CDC00, String *, get_ContainerName, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CDE30, CspParameters *, Copy, (KeyPairPersistence * __this, CspParameters * p));
IL2CPP_REGISTER_METHOD(0x025CDFD0, void, FromXml, (KeyPairPersistence * __this, String * xml));
IL2CPP_REGISTER_METHOD(0x025CE210, String *, ToXml, (KeyPairPersistence * __this));
IL2CPP_REGISTER_METHOD(0x025CE4E0, void, __cctor, (MethodInfo * method));
}
