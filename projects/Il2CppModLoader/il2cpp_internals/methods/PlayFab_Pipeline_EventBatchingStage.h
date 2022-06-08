using namespace app;

namespace app::methods::PlayFab::Pipeline::EventBatchingStage {
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_BatchSize, (EventBatchingStage * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_BatchSize, (EventBatchingStage * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB990, TimeSpan, get_BatchFillTimeout, (EventBatchingStage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_BatchFillTimeout, (EventBatchingStage * __this, TimeSpan value));
IL2CPP_REGISTER_METHOD(0x017AE930, void, __ctor, (EventBatchingStage * __this, ILogger_1 * logger));
IL2CPP_REGISTER_METHOD(0x017AEA00, void, __ctor, (EventBatchingStage * __this, int32_t batchSize, TimeSpan batchFillTimeout, ILogger_1 * logger));
IL2CPP_REGISTER_METHOD(0x017AEC60, void, OnNextInputItem, (EventBatchingStage * __this, IPlayFabEmitEventRequest * request));
IL2CPP_REGISTER_METHOD(0x017AEFA0, IEnumerable_1_PlayFab_IPlayFabEmitEventRequest_ *, GetInputConsumingEnumerable, (EventBatchingStage * __this));
IL2CPP_REGISTER_METHOD(0x017AF130, void, StoreBatch, (EventBatchingStage * __this, String * titleId));
IL2CPP_REGISTER_METHOD(0x017AF300, void, StoreAllBatches, (EventBatchingStage * __this));
IL2CPP_REGISTER_METHOD(0x017AF4A0, void, CreateNewBatch, (EventBatchingStage * __this, String * titleId));
IL2CPP_REGISTER_METHOD(0x017AF640, void, InitNewBatch, (EventBatchingStage * __this, String * titleId));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ValidationCheck, (IPlayFabEmitEventRequest * request));
IL2CPP_REGISTER_METHOD(0x017AF710, void, __cctor, (MethodInfo * method));
}
