#include <interception_macros.h>

namespace app::methods::BaseSpline {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_BuildNum, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_Length, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, BaseSpline_SplineWrapMode__Enum, get_WrapMode, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_WrapMode, (app::BaseSpline * this_ptr, app::BaseSpline_SplineWrapMode__Enum value));
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_StepCount, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F87B70, void, set_StepCount, (app::BaseSpline * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x0052A010, BaseSpline_SplineReparamType__Enum, get_ReparamType, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ReparamType, (app::BaseSpline * this_ptr, app::BaseSpline_SplineReparamType__Enum value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, (app::BaseSpline * this_ptr, bool calculate_length));
    IL2CPP_REGISTER_METHOD(0x00F87B80, Color, GetColor, (app::BaseSpline * this_ptr, int32_t segidx, float segpos));
    IL2CPP_REGISTER_METHOD(0x00F87B90, Color, GetHighlight, (app::BaseSpline * this_ptr, int32_t segidx, float segpos));
    IL2CPP_REGISTER_METHOD(0x00420EE0, String*, GetAction, (app::BaseSpline * this_ptr, int32_t segidx, float segpos));
    IL2CPP_REGISTER_METHOD(0x00420EE0, String*, PopAction, (app::BaseSpline * this_ptr, int32_t segidx, float segpos));
    IL2CPP_REGISTER_METHOD(0x00F87BA0, BaseSpline_SplineIterator*, CreateIterator_1, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F87D20, BaseSpline_SplineIterator*, CreateIterator_2, (app::BaseSpline * this_ptr, app::Matrix4x4 matrix));
    IL2CPP_REGISTER_METHOD(0x00F87ED0, BaseSpline_SplineIterator*, CreateIterator_3, (app::BaseSpline * this_ptr, app::Transform* transform));
    IL2CPP_REGISTER_METHOD(0x00F88060, BaseSpline_SplineIterator*, GetReverseIterator, (app::BaseSpline * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F881E0, BaseSpline_SplineIterator*, GetPartialIterator, (app::BaseSpline * this_ptr, int32_t startidx, int32_t endidx));
    IL2CPP_REGISTER_METHOD(0x00F88350, BaseSpline_SplineIterator*, GetPartialReverseIterator, (app::BaseSpline * this_ptr, int32_t startidx, int32_t endidx));
    IL2CPP_REGISTER_METHOD(0x00F884C0, Vector3__Array*, GenerateDrawPoints, (app::BaseSpline * this_ptr, int32_t divs));
    IL2CPP_REGISTER_METHOD(0x00F88700, void, NearestSegmentOffs, (app::BaseSpline * this_ptr, app::Vector2 pos, app::int32_t* segment, app::float* seg_offs));
    IL2CPP_REGISTER_METHOD(0x00F88BF0, Vector3, NearestPos_1, (app::BaseSpline * this_ptr, app::Vector2 pos));
    IL2CPP_REGISTER_METHOD(0x00F88DC0, Vector3, NearestPos_2, (app::BaseSpline * this_ptr, app::Vector2 pos, app::int32_t* segment, app::float* seg_offs));
    IL2CPP_REGISTER_METHOD(0x00F88F80, Vector3, NearestPreviewPos, (app::BaseSpline * this_ptr, app::Vector2 pos, app::int32_t* segment, app::float* offset, float k));
    IL2CPP_REGISTER_METHOD(0x00F892B0, float, NearestOffs, (app::BaseSpline * this_ptr, app::Vector2 pos));
    IL2CPP_REGISTER_METHOD(0x00F89430, void, __ctor, (app::BaseSpline * this_ptr));
} // namespace app::methods::BaseSpline
