#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::GUIStyleState_DirectConverter {
IL2CPP_REGISTER_METHOD(0x0164BB60, fsResult, DoSerialize, (GUIStyleState_DirectConverter * __this, GUIStyleState * model, Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
IL2CPP_REGISTER_METHOD(0x0164BEC0, fsResult, DoDeserialize, (GUIStyleState_DirectConverter * __this, Dictionary_2_System_String_FullSerializer_fsData_ * data, GUIStyleState * * model));
IL2CPP_REGISTER_METHOD(0x0164C1E0, Object *, CreateInstance, (GUIStyleState_DirectConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164C360, void, __ctor, (GUIStyleState_DirectConverter * __this));
}
