using namespace app;

namespace app::methods::RaceGetReadyState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceGetReadyState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00E98DA0, void, OnEnter, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x00E98ED0, void, UpdateState, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x00E99030, void, UpdateRegular, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceGetReadyState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (RaceGetReadyState * __this));
IL2CPP_REGISTER_METHOD(0x00715190, void, SkipRequested, (RaceGetReadyState * __this));
}
