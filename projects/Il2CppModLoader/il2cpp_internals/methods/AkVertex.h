#include <interception_macros.h>

namespace app::methods::AkVertex {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkVertex * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x027019D0, void *, getCPtr, (AkVertex * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkVertex * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x02701A60, void, Finalize, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02701AE0, void, Dispose, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02701CF0, void, __ctor, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02701E10, void, __ctor, (AkVertex * __this, float in_X, float in_Y, float in_Z));
IL2CPP_REGISTER_METHOD(0x02701F70, void, set_X, (AkVertex * __this, float value));
IL2CPP_REGISTER_METHOD(0x027020A0, float, get_X, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x027021C0, void, set_Y, (AkVertex * __this, float value));
IL2CPP_REGISTER_METHOD(0x027022F0, float, get_Y, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02702410, void, set_Z, (AkVertex * __this, float value));
IL2CPP_REGISTER_METHOD(0x02702540, float, get_Z, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02702660, void, Clear, (AkVertex * __this));
IL2CPP_REGISTER_METHOD(0x02702700, int32_t, GetSizeOf, ());
IL2CPP_REGISTER_METHOD(0x02702790, void, Clone, (AkVertex * __this, AkVertex * other));
}
