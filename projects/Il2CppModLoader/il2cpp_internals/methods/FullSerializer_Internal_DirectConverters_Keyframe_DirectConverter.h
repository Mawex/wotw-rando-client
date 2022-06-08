using namespace app;

namespace app::methods::FullSerializer::Internal::DirectConverters::Keyframe_DirectConverter {
IL2CPP_REGISTER_METHOD(0x0164F4E0, fsResult, DoSerialize, (Keyframe_DirectConverter * __this, Keyframe model, Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
IL2CPP_REGISTER_METHOD(0x0164F730, fsResult, DoDeserialize, (Keyframe_DirectConverter * __this, Dictionary_2_System_String_FullSerializer_fsData_ * data, Keyframe * model));
IL2CPP_REGISTER_METHOD(0x0164FA10, Object *, CreateInstance, (Keyframe_DirectConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164FAC0, void, __ctor, (Keyframe_DirectConverter * __this));
}
