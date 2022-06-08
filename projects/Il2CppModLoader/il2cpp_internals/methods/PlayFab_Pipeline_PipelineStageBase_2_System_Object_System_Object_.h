using namespace app;

namespace app::methods::PlayFab::Pipeline::PipelineStageBase_2_System::Object_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (PipelineStageBase_2_System_Object_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (PipelineStageBase_2_System_Object_System_Object_ * __this, BlockingCollection_1_System_Object_ * input, BlockingCollection_1_System_Object_ * output, CancellationTokenSource * cts));
IL2CPP_REGISTER_METHODINFO(0x0474EE40, PipelineStageBase_2_System_Object_System_Object__RunStage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D16470, IEnumerable_1_System_Object_ *, GetInputConsumingEnumerable, (PipelineStageBase_2_System_Object_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (PipelineStageBase_2_System_Object_System_Object_ * __this, Object * outputItem));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (PipelineStageBase_2_System_Object_System_Object_ * __this));
}
