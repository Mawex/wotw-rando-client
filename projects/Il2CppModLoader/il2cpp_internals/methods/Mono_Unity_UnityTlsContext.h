using namespace app;

namespace app::methods::Mono::Unity::UnityTlsContext {
IL2CPP_REGISTER_METHOD(0x0248D710, void, __ctor, (UnityTlsContext * __this, MobileAuthenticatedStream * parent, bool serverMode, String * targetHost, SslProtocols__Enum enabledProtocols, X509Certificate_1 * serverCertificate, X509CertificateCollection_1 * clientCertificates, bool askForClientCert));
IL2CPP_REGISTER_METHOD(0x0248E570, void, ExtractNativeKeyAndChainFromManagedCertificate, (X509Certificate_1 * cert, UnityTls_unitytls_errorstate * errorState, UnityTls_unitytls_x509list * * nativeCertChain, UnityTls_unitytls_key * * nativeKey));
IL2CPP_REGISTER_METHODINFO(0x0470CB40, UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsAuthenticated, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, X509Certificate_1 *, get_LocalClientCertificate, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x0248E900, ValueTuple_2_Int32_Boolean_, Read, (UnityTlsContext * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477D870, UnityTlsContext_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0248EB30, ValueTuple_2_Int32_Boolean_, Write, (UnityTlsContext * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047385F0, UnityTlsContext_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0248ED50, void, Shutdown, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x0248EF70, void, Dispose, (UnityTlsContext * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0248F020, void, StartHandshake, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x0248F2A0, bool, ProcessHandshake, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHODINFO(0x04746F90, UnityTlsContext_ProcessHandshake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0248F6B0, void, FinishHandshake, (UnityTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x0248F930, void *, WriteCallback, (Void * userData, uint8_t * data, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHODINFO(0x047934C0, UnityTlsContext_WriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0248FA90, void *, WriteCallback, (UnityTlsContext * __this, uint8_t * data, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x0248FCB0, void *, ReadCallback, (Void * userData, uint8_t * buffer, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHODINFO(0x04706EA0, UnityTlsContext_ReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0248FE10, void *, ReadCallback, (UnityTlsContext * __this, uint8_t * buffer, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02490100, UnityTls_unitytls_x509verify_result__Enum, VerifyCallback, (Void * userData, UnityTls_unitytls_x509list_ref chain, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHODINFO(0x04768BD8, UnityTlsContext_VerifyCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02490240, UnityTls_unitytls_x509verify_result__Enum, VerifyCallback, (UnityTlsContext * __this, UnityTls_unitytls_x509list_ref chain, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02490510, void, CertificateCallback, (Void * userData, UnityTls_unitytls_tlsctx * ctx, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509name * caList, void * caListLen, UnityTls_unitytls_x509list_ref * chain, UnityTls_unitytls_key_ref * key, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHODINFO(0x04741C38, UnityTlsContext_CertificateCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02490670, void, CertificateCallback, (UnityTlsContext * __this, UnityTls_unitytls_tlsctx * ctx, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509name * caList, void * caListLen, UnityTls_unitytls_x509list_ref * chain, UnityTls_unitytls_key_ref * key, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHODINFO(0x0474C660, UnityTlsContext_CertificateCallback_1__MethodInfo);
}
