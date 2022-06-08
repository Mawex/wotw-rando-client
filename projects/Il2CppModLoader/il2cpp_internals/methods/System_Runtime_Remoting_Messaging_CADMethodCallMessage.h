using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::CADMethodCallMessage {
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Uri, (CADMethodCallMessage * __this));
IL2CPP_REGISTER_METHOD(0x0230C790, CADMethodCallMessage *, Create, (IMessage * callMsg));
IL2CPP_REGISTER_METHOD(0x0230CA20, void, __ctor, (CADMethodCallMessage * __this, IMethodCallMessage * callMsg));
IL2CPP_REGISTER_METHOD(0x0230CB90, ArrayList *, GetArguments, (CADMethodCallMessage * __this));
IL2CPP_REGISTER_METHOD(0x0230CE00, Object__Array *, GetArgs, (CADMethodCallMessage * __this, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PropertiesCount, (CADMethodCallMessage * __this));
}
