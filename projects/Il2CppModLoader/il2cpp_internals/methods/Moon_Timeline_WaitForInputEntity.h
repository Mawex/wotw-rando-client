using namespace app;

namespace app::methods::Moon::Timeline::WaitForInputEntity {
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, get_ParsingGroup, (WaitForInputEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E4C0, void, OnStartPlayback, (WaitForInputEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1E4D0, void, OnUpdateEntity, (WaitForInputEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D1E510, void, OnStopPlayback, (WaitForInputEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D1E520, bool, HasFinished, (WaitForInputEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D1E540, void, __ctor, (WaitForInputEntity * __this));
}
