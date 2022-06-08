using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::StackBuilderSink {
IL2CPP_REGISTER_METHOD(0x0231A770, void, __ctor, (StackBuilderSink * __this, MarshalByRefObject * obj, bool forceInternalExecute));
IL2CPP_REGISTER_METHOD(0x0231A830, IMessage *, SyncProcessMessage, (StackBuilderSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0231A950, IMessageCtrl *, AsyncProcessMessage, (StackBuilderSink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x0231AB80, void, ExecuteAsyncMessage, (StackBuilderSink * __this, Object * ob));
IL2CPP_REGISTER_METHOD(0x0231ADC0, void, CheckParameters, (StackBuilderSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHODINFO(0x04719318, StackBuilderSink_CheckParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231B190, void, _AsyncProcessMessage_b__4_0, (StackBuilderSink * __this, Object * data));
IL2CPP_REGISTER_METHODINFO(0x0477EA50, StackBuilderSink__AsyncProcessMessage_b__4_0__MethodInfo);
}
