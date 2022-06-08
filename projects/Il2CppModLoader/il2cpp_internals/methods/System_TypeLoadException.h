using namespace app;

namespace app::methods::System::TypeLoadException {
IL2CPP_REGISTER_METHOD(0x027C0FD0, void, __ctor, (TypeLoadException * __this));
IL2CPP_REGISTER_METHOD(0x027C1060, void, __ctor, (TypeLoadException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x027C1080, String *, get_Message, (TypeLoadException * __this));
IL2CPP_REGISTER_METHOD(0x027C10A0, void, SetMessageField, (TypeLoadException * __this));
IL2CPP_REGISTER_METHOD(0x027C11E0, void, __ctor, (TypeLoadException * __this, String * className, String * assemblyName));
IL2CPP_REGISTER_METHOD(0x027C1240, void, __ctor, (TypeLoadException * __this, String * className, String * assemblyName, String * messageArg, int32_t resourceId));
IL2CPP_REGISTER_METHOD(0x027C12B0, void, __ctor, (TypeLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04774E08, TypeLoadException__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C13F0, void, GetObjectData, (TypeLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0476A368, TypeLoadException_GetObjectData__MethodInfo);
}
