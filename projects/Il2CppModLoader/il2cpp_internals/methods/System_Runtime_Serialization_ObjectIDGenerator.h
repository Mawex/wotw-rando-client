using namespace app;

namespace app::methods::System::Runtime::Serialization::ObjectIDGenerator {
IL2CPP_REGISTER_METHOD(0x01ED7280, void, __ctor, (ObjectIDGenerator * __this));
IL2CPP_REGISTER_METHOD(0x01ED7390, int32_t, FindElement, (ObjectIDGenerator * __this, Object * obj, bool * found));
IL2CPP_REGISTER_METHOD(0x01ED7460, int64_t, GetId, (ObjectIDGenerator * __this, Object * obj, bool * firstTime));
IL2CPP_REGISTER_METHODINFO(0x04742148, ObjectIDGenerator_GetId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED7690, int64_t, HasId, (ObjectIDGenerator * __this, Object * obj, bool * firstTime));
IL2CPP_REGISTER_METHODINFO(0x047951F0, ObjectIDGenerator_HasId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED77D0, void, Rehash, (ObjectIDGenerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04787908, ObjectIDGenerator_Rehash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01ED7B60, void, __cctor, (MethodInfo * method));
}
