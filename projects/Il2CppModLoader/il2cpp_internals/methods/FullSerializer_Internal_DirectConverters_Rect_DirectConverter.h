#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::Rect_DirectConverter {
IL2CPP_REGISTER_METHOD(0x016508F0, fsResult, DoSerialize, (Rect_DirectConverter * __this, Rect model, Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
IL2CPP_REGISTER_METHOD(0x01650B10, fsResult, DoDeserialize, (Rect_DirectConverter * __this, Dictionary_2_System_String_FullSerializer_fsData_ * data, Rect * model));
IL2CPP_REGISTER_METHOD(0x01650DC0, Object *, CreateInstance, (Rect_DirectConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01650E60, void, __ctor, (Rect_DirectConverter * __this));
}
