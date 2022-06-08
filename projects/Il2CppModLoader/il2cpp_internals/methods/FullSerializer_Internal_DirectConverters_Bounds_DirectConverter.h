#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::Bounds_DirectConverter {
IL2CPP_REGISTER_METHOD(0x0164B690, fsResult, DoSerialize, (Bounds_DirectConverter * __this, Bounds model, Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
IL2CPP_REGISTER_METHOD(0x0164B840, fsResult, DoDeserialize, (Bounds_DirectConverter * __this, Dictionary_2_System_String_FullSerializer_fsData_ * data, Bounds * model));
IL2CPP_REGISTER_METHOD(0x0164BA30, Object *, CreateInstance, (Bounds_DirectConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164BAE0, void, __ctor, (Bounds_DirectConverter * __this));
}
