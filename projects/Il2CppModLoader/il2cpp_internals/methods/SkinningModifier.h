#include <interception_macros.h>

namespace app::methods::SkinningModifier {
IL2CPP_REGISTER_METHOD(0x006BF180, void, OnEnable, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006BF410, void, OnDisable, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006BF480, void, ResizeLists, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006BF590, void, InitializeBonePostions, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006BFCB0, void, UpdateInitialBonePositions, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0230, void, UpdatePositions, (SkinningModifier * __this, bool editorMode));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0650, void, OnUpdatePhysics, (SkinningModifier * __this, float delta));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (SkinningModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006C0860, SuspendableMask__Enum, get_Mask, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0870, void, set_Mask, (SkinningModifier * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_TimelineSamplePriority, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0880, void, TimelineSample, (SkinningModifier * __this, float time));
IL2CPP_REGISTER_METHOD(0x006C0880, void, EnterTimelinePreview, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0880, void, ExitTimelinePreview, (SkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x006C0890, void, __ctor, (SkinningModifier * __this));
}
