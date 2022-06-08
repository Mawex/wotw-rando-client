using namespace app;

namespace app::methods::System::IO::Stream_ReadWriteTask {
IL2CPP_REGISTER_METHOD(0x0237EDF0, void, ClearBeginState, (Stream_ReadWriteTask * __this));
IL2CPP_REGISTER_METHOD(0x0237EE00, void, __ctor, (Stream_ReadWriteTask * __this, bool isRead, Func_2_Object_Int32_ * function, Object * state, Stream * stream, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback));
IL2CPP_REGISTER_METHOD(0x0237EF90, void, InvokeAsyncCallback, (Object * completedTask));
IL2CPP_REGISTER_METHODINFO(0x0471D050, Stream_ReadWriteTask_InvokeAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237F060, void, ITaskCompletionAction_Invoke, (Stream_ReadWriteTask * __this, Task * completingTask));
}
