using namespace app;

namespace app::methods::Moon::AxisAlignedBoxGizmoSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Label, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD30, Color, get_FillColor, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_FillColor, (AxisAlignedBoxGizmoSettings * __this, Color value));
IL2CPP_REGISTER_METHOD(0x00CB5CB0, Color, get_OutlineColor, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_OutlineColor, (AxisAlignedBoxGizmoSettings * __this, Color value));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Color, get_HandleColor, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_HandleColor, (AxisAlignedBoxGizmoSettings * __this, Color value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_HandleSize, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_HandleSize, (AxisAlignedBoxGizmoSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, GizmoHandleType__Enum, get_ResizeHandle, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_ResizeHandle, (AxisAlignedBoxGizmoSettings * __this, GizmoHandleType__Enum value));
IL2CPP_REGISTER_METHOD(0x002FD490, GizmoHandleType__Enum, get_MoveHandle, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_MoveHandle, (AxisAlignedBoxGizmoSettings * __this, GizmoHandleType__Enum value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, AxisAlignedBoxGizmoSettings_ModeType__Enum, get_Mode, (AxisAlignedBoxGizmoSettings * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mode, (AxisAlignedBoxGizmoSettings * __this, AxisAlignedBoxGizmoSettings_ModeType__Enum value));
IL2CPP_REGISTER_METHOD(0x00CB5CF0, void, __ctor, (AxisAlignedBoxGizmoSettings * __this, String * label));
}
