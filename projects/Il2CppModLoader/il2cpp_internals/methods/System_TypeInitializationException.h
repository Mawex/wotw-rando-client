using namespace app;

namespace app::methods::System::TypeInitializationException {
IL2CPP_REGISTER_METHOD(0x027C0B30, void, __ctor, (TypeInitializationException * __this));
IL2CPP_REGISTER_METHOD(0x027C0BC0, void, __ctor, (TypeInitializationException * __this, String * fullTypeName, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x027C0CF0, void, __ctor, (TypeInitializationException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x027C0DC0, String *, get_TypeName, (TypeInitializationException * __this));
IL2CPP_REGISTER_METHOD(0x027C0E50, void, GetObjectData, (TypeInitializationException * __this, SerializationInfo * info, StreamingContext context));
}
