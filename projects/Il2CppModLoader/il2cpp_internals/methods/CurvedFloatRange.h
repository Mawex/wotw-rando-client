using namespace app;

namespace app::methods::CurvedFloatRange {
IL2CPP_REGISTER_METHOD(0x006D39E0, void, __ctor, (CurvedFloatRange * __this, float min, float max));
IL2CPP_REGISTER_METHOD(0x00DBAE10, float, PickRandom, (CurvedFloatRange * __this));
IL2CPP_REGISTER_METHOD(0x00DBAED0, float, Lerp, (CurvedFloatRange * __this, float t));
IL2CPP_REGISTER_METHOD(0x00DBAFA0, float, Evaluate, (CurvedFloatRange * __this, float t));
}
