#include <interception_macros.h>

namespace app::methods::UberPoolTimeslicedPrewarmer {
IL2CPP_REGISTER_METHOD(0x002FB990, UberPoolGroupWarmer__Array *, get_Warmers, (UberPoolTimeslicedPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Warmers, (UberPoolTimeslicedPrewarmer * __this, UberPoolGroupWarmer__Array * value));
IL2CPP_REGISTER_METHOD(0x00FED1C0, void, Update, (UberPoolTimeslicedPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FED960, void, BeginPrewarm, (UberPoolTimeslicedPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FEDA70, void, FinishPrewarm, (UberPoolTimeslicedPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FEDBA0, void, __ctor, (UberPoolTimeslicedPrewarmer * __this));
}
