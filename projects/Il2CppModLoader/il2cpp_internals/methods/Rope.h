#include <interception_macros.h>

namespace app::methods::Rope {
IL2CPP_REGISTER_METHOD(0x00A1FBC0, Vector3, get_OffsetBetweenLinks, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_OffsetBetweenLinks, (Rope * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FC020, float, get_EffectiveLinkDensity, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x003FC030, void, set_EffectiveLinkDensity, (Rope * __this, float value));
IL2CPP_REGISTER_METHOD(0x01367FA0, void, OverrideUpdateLineRenderer, (Rope * __this, bool on));
IL2CPP_REGISTER_METHOD(0x01367FB0, void, SetOriginalPosition, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368380, void, Initialize, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368750, void, RefreshVertexCount, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368880, void, ResetRopeToOriginalPosition, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368BA0, void, Awake, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368BB0, void, OnDestroy, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368C60, void, Start, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01368D50, void, SetPhysicsSettingsForAllLinks, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x013693D0, void, Update, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x013693F0, void, UpdateLineRendererPositions, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01369A50, void, OnEnable, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01369C70, void, Suspend, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x01369FF0, void, Resume, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x00CA2570, bool, get_IsSuspended, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x0136A260, void, set_IsSuspended, (Rope * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007007F0, SuspendableMask__Enum, get_Mask, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x0136A2B0, void, set_Mask, (Rope * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00443CC0, void, AttachedBodyEnabled, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x0136A2C0, bool, Attach, (Rope * __this, ConfigurableJoint * joint, Vector3 attachmentPoint, AttachJointSettings * jointSettings));
IL2CPP_REGISTER_METHOD(0x0136A4C0, Rigidbody *, GetRigidbody, (Rope * __this, Vector3 attachmentPoint));
IL2CPP_REGISTER_METHOD(0x0136A730, void, WasAttached, (Rope * __this, IPhysicsAttachable * attachable, ConfigurableJoint * joint));
IL2CPP_REGISTER_METHOD(0x0136A9E0, void, Rebuild, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x0136C500, void, ConnectRopeLinks, (Rope * __this, GameObject * previousLink, GameObject * nextLink));
IL2CPP_REGISTER_METHOD(0x0136C910, void, __ctor, (Rope * __this));
IL2CPP_REGISTER_METHOD(0x0136CA90, void, __cctor, ());
}
