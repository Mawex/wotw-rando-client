using namespace app;

namespace app::methods::BaseSpline {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_BuildNum, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_Length, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, BaseSpline_SplineWrapMode__Enum, get_WrapMode, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_WrapMode, (BaseSpline * __this, BaseSpline_SplineWrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_StepCount, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F87B70, void, set_StepCount, (BaseSpline * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A010, BaseSpline_SplineReparamType__Enum, get_ReparamType, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ReparamType, (BaseSpline * __this, BaseSpline_SplineReparamType__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, (BaseSpline * __this, bool calculate_length));
IL2CPP_REGISTER_METHOD(0x00F87B80, Color, GetColor, (BaseSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00F87B90, Color, GetHighlight, (BaseSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetAction, (BaseSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, PopAction, (BaseSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00F87BA0, BaseSpline_SplineIterator *, CreateIterator, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F87D20, BaseSpline_SplineIterator *, CreateIterator, (BaseSpline * __this, Matrix4x4 matrix));
IL2CPP_REGISTER_METHOD(0x00F87ED0, BaseSpline_SplineIterator *, CreateIterator, (BaseSpline * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x00F88060, BaseSpline_SplineIterator *, GetReverseIterator, (BaseSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F881E0, BaseSpline_SplineIterator *, GetPartialIterator, (BaseSpline * __this, int32_t startidx, int32_t endidx));
IL2CPP_REGISTER_METHOD(0x00F88350, BaseSpline_SplineIterator *, GetPartialReverseIterator, (BaseSpline * __this, int32_t startidx, int32_t endidx));
IL2CPP_REGISTER_METHOD(0x00F884C0, Vector3__Array *, GenerateDrawPoints, (BaseSpline * __this, int32_t divs));
IL2CPP_REGISTER_METHOD(0x00F88700, void, NearestSegmentOffs, (BaseSpline * __this, Vector2 pos, int32_t * segment, float * seg_offs));
IL2CPP_REGISTER_METHOD(0x00F88BF0, Vector3, NearestPos, (BaseSpline * __this, Vector2 pos));
IL2CPP_REGISTER_METHOD(0x00F88DC0, Vector3, NearestPos, (BaseSpline * __this, Vector2 pos, int32_t * segment, float * seg_offs));
IL2CPP_REGISTER_METHOD(0x00F88F80, Vector3, NearestPreviewPos, (BaseSpline * __this, Vector2 pos, int32_t * segment, float * offset, float k));
IL2CPP_REGISTER_METHOD(0x00F892B0, float, NearestOffs, (BaseSpline * __this, Vector2 pos));
IL2CPP_REGISTER_METHOD(0x00F89430, void, __ctor, (BaseSpline * __this));
}
