using namespace app;

namespace app::methods::FloatDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x01270930, void, __ctor, (FloatDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012709B0, void, __ctor, (FloatDebugMenuItem * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x01270A90, void, __ctor, (FloatDebugMenuItem * __this, String * path, String * text, Func_1_Single_ * getter, Action_1_Single_ * setter, float min, float max, float speed, String * help, Func_1_String_ * textGetter, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHOD(0x01270B60, void, IncrementValue, (FloatDebugMenuItem * __this, int32_t delta));
}
