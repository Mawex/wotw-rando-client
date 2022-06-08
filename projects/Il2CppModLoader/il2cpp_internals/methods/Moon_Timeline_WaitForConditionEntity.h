using namespace app;

namespace app::methods::Moon::Timeline::WaitForConditionEntity {
IL2CPP_REGISTER_METHOD(0x00D1E020, void, OnStartPlayback, (WaitForConditionEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1E100, void, OnUpdateEntity, (WaitForConditionEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (WaitForConditionEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E2F0, bool, EvaluateCondition, (WaitForConditionEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, HasFinished, (WaitForConditionEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, get_ParsingGroup, (WaitForConditionEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E410, void, __ctor, (WaitForConditionEntity * __this));
}
