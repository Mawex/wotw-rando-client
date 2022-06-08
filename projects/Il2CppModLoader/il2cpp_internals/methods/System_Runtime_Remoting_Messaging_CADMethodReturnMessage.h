using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::CADMethodReturnMessage {
IL2CPP_REGISTER_METHOD(0x0230D870, CADMethodReturnMessage *, Create, (IMessage * callMsg));
IL2CPP_REGISTER_METHOD(0x0230D9F0, void, __ctor, (CADMethodReturnMessage * __this, IMethodReturnMessage * retMsg));
IL2CPP_REGISTER_METHOD(0x0230DDB0, ArrayList *, GetArguments, (CADMethodReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x0230CE00, Object__Array *, GetArgs, (CADMethodReturnMessage * __this, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230E020, Object *, GetReturnValue, (CADMethodReturnMessage * __this, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230E030, Exception *, GetException, (CADMethodReturnMessage * __this, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PropertiesCount, (CADMethodReturnMessage * __this));
}
