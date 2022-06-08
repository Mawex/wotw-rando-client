using namespace app;

namespace app::methods::Moon::Timeline::WaitForTriggerEntity {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (WaitForTriggerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E5F0, Rect, get_Bounds, (WaitForTriggerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E7C0, bool, IsInside, (WaitForTriggerEntity * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, UsingTimeout, (WaitForTriggerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E990, void, OnStartPlayback, (WaitForTriggerEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1E9A0, void, OnUpdateEntity, (WaitForTriggerEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (WaitForTriggerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1EB50, bool, HasFinished, (WaitForTriggerEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, get_ParsingGroup, (WaitForTriggerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1ECC0, void, __ctor, (WaitForTriggerEntity * __this));
}
