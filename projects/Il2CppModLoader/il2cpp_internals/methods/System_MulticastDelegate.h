using namespace app;

namespace app::methods::System::MulticastDelegate {
IL2CPP_REGISTER_METHOD(0x0173FA70, void, GetObjectData, (MulticastDelegate * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226E0B0, bool, Equals, (MulticastDelegate * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0173F8B0, int32_t, GetHashCode, (MulticastDelegate * __this));
IL2CPP_REGISTER_METHOD(0x0226E2A0, MethodInfo_1 *, GetMethodImpl, (MulticastDelegate * __this));
IL2CPP_REGISTER_METHOD(0x0226E430, Delegate__Array *, GetInvocationList, (MulticastDelegate * __this));
IL2CPP_REGISTER_METHOD(0x0226E5E0, Delegate *, CombineImpl, (MulticastDelegate * __this, Delegate * follow));
IL2CPP_REGISTER_METHOD(0x0226EA50, int32_t, LastIndexOf, (MulticastDelegate * __this, Delegate__Array * haystack, Delegate__Array * needle));
IL2CPP_REGISTER_METHOD(0x0226EBE0, Delegate *, RemoveImpl, (MulticastDelegate * __this, Delegate * value));
IL2CPP_REGISTER_METHODINFO(0x0473ED88, MulticastDelegate_RemoveImpl__MethodInfo);
}
