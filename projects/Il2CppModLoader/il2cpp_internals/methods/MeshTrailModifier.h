#include <interception_macros.h>

namespace app::methods::MeshTrailModifier {
IL2CPP_REGISTER_METHOD(0x0158C530, void, DrawDebugInfo, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsProcedural, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158CAE0, void, UberShaderEditorUpdate, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158CB20, void, OnDrawGizmos, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158CEB0, void, SanityCheck, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D1A0, void, Simulate, (MeshTrailModifier * __this, MoonRenderContext * ctx, Vector3 cameraPosition, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0158D270, void, DebugRender, (MeshTrailModifier * __this, MoonRenderContext * ctx));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, ICullingCategoryItem_get_IsValid, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D2A0, void, OnEnable, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D3B0, void, OnDisable, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D4A0, void, SimulateAll, (MoonRenderContext * ctx, Vector3 cameraPosition));
IL2CPP_REGISTER_METHOD(0x0158D730, void, DebugRenderAll, (MoonRenderContext * ctx));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (MeshTrailModifier * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0158D8E0, bool, get_IsSuspended, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D900, void, set_IsSuspended, (MeshTrailModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (MeshTrailModifier * __this));
IL2CPP_REGISTER_METHOD(0x0158D920, void, __cctor, ());
}
