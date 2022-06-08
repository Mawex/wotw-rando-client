using namespace app;

namespace app::methods::FullSerializer::Internal::DirectConverters::Gradient_DirectConverter {
IL2CPP_REGISTER_METHOD(0x0164ED90, fsResult, DoSerialize, (Gradient_DirectConverter * __this, Gradient * model, Dictionary_2_System_String_FullSerializer_fsData_ * serialized));
IL2CPP_REGISTER_METHOD(0x0164EFC0, fsResult, DoDeserialize, (Gradient_DirectConverter * __this, Dictionary_2_System_String_FullSerializer_fsData_ * data, Gradient * * model));
IL2CPP_REGISTER_METHOD(0x0164F2E0, Object *, CreateInstance, (Gradient_DirectConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164F460, void, __ctor, (Gradient_DirectConverter * __this));
}
