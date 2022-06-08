using namespace app;

namespace app::methods::DoubleDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x00BDB720, void, __ctor, (DoubleDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00BDB7A0, void, __ctor, (DoubleDebugMenuItem * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x00BDB880, void, __ctor, (DoubleDebugMenuItem * __this, String * path, String * text, Func_1_Double_ * getter, Action_1_Double_ * setter, double min, double max, double speed, String * help));
IL2CPP_REGISTER_METHOD(0x00BDB9A0, void, IncrementValue, (DoubleDebugMenuItem * __this, int32_t delta));
}
