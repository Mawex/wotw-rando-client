#include <interception_macros.h>

namespace app::methods::AkSourceSettingsArray {
IL2CPP_REGISTER_METHOD(0x026FAA50, void, __ctor, (AkSourceSettingsArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x026FAAE0, int32_t, get_StructureSize, (AkSourceSettingsArray * __this));
IL2CPP_REGISTER_METHOD(0x026FAB70, void, DefaultConstructAtIntPtr, (AkSourceSettingsArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026FAC10, AkSourceSettings *, CreateNewReferenceFromIntPtr, (AkSourceSettingsArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026FAD60, void, CloneIntoReferenceFromIntPtr, (AkSourceSettingsArray * __this, void * address, AkSourceSettings * other));
}
