using namespace app;

namespace app::methods::Moon::VisualDebug::LineEntity {
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Mode, (LineEntity * __this));
IL2CPP_REGISTER_METHOD(0x011929E0, void, __ctor, (LineEntity * __this, Vector3 start, Vector3 end, Color color));
IL2CPP_REGISTER_METHOD(0x01192A10, void, Set, (LineEntity * __this, Vector3 start, Vector3 end, Color color));
IL2CPP_REGISTER_METHOD(0x01192A40, void, Render, (LineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01192B80, int32_t, GetHashCode, (LineEntity * __this));
}
