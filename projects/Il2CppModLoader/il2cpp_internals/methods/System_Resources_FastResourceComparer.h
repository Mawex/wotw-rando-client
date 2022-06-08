using namespace app;

namespace app::methods::System::Resources::FastResourceComparer {
IL2CPP_REGISTER_METHOD(0x02699220, int32_t, GetHashCode, (FastResourceComparer * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x026992F0, int32_t, GetHashCode, (FastResourceComparer * __this, String * key));
IL2CPP_REGISTER_METHOD(0x02699390, int32_t, HashFunction, (String * key));
IL2CPP_REGISTER_METHOD(0x026994B0, int32_t, Compare, (FastResourceComparer * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHOD(0x026995F0, int32_t, Compare, (FastResourceComparer * __this, String * a, String * b));
IL2CPP_REGISTER_METHOD(0x02022840, bool, Equals, (FastResourceComparer * __this, String * a, String * b));
IL2CPP_REGISTER_METHOD(0x02699640, bool, Equals, (FastResourceComparer * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHOD(0x02699750, int32_t, CompareOrdinal, (String * a, Byte__Array * bytes, int32_t bCharLength));
IL2CPP_REGISTER_METHOD(0x02699830, int32_t, CompareOrdinal, (Byte__Array * bytes, int32_t aCharLength, String * b));
IL2CPP_REGISTER_METHOD(0x02699980, int32_t, CompareOrdinal, (uint8_t * a, int32_t byteLen, String * b));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FastResourceComparer * __this));
IL2CPP_REGISTER_METHOD(0x02699A30, void, __cctor, (MethodInfo * method));
}
