using namespace app;

namespace app::methods::Moon::PointGizmoSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Label, (PointGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD30, Color, get_Color, (PointGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_Color, (PointGizmoSettings * __this, Color value));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Size, (PointGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Size, (PointGizmoSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x005C3FF0, GizmoHandleType__Enum, get_Handle, (PointGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x005C4000, void, set_Handle, (PointGizmoSettings * __this, GizmoHandleType__Enum value));
IL2CPP_REGISTER_METHOD(0x00C3DD70, void, __ctor, (PointGizmoSettings * __this, String * label));
}
