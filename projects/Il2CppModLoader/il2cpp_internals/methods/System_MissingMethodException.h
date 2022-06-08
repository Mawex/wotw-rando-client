using namespace app;

namespace app::methods::System::MissingMethodException {
IL2CPP_REGISTER_METHOD(0x0226A870, void, __ctor, (MissingMethodException * __this));
IL2CPP_REGISTER_METHOD(0x0226A900, void, __ctor, (MissingMethodException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0226A170, void, __ctor, (MissingMethodException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226A920, String *, get_Message, (MissingMethodException * __this));
IL2CPP_REGISTER_METHOD(0x0226A300, void, __ctor, (MissingMethodException * __this, String * className, String * methodName));
IL2CPP_REGISTER_METHOD(0x0226AA50, void, __ctor, (MissingMethodException * __this, String * className, String * methodName, String * signature, String * message));
}
