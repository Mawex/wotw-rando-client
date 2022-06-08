using namespace app;

namespace app::methods::IntDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x006371F0, void, __ctor, (IntDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00637270, void, __ctor, (IntDebugMenuItem * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x00637350, void, __ctor, (IntDebugMenuItem * __this, String * path, String * text, Func_1_Int32_ * getter, Action_1_Int32_ * setter, int32_t min, int32_t max, int32_t speed, String * help, Func_1_String_ * textGetter, bool singleIncrement, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHOD(0x00637470, void, IncrementValue, (IntDebugMenuItem * __this, int32_t delta));
}
