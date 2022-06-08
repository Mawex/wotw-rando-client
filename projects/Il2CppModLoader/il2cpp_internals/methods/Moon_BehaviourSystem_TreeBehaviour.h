#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::TreeBehaviour {
IL2CPP_REGISTER_METHOD(0x030120C0, void, OnValidate, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0217ACC0, String *, get_Info, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x03012130, bool, get_IsDisabled, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsDisabled, (TreeBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030121B0, bool, get_IsEnabled, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x030121C0, void, set_IsEnabled, (TreeBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PerformSanityCheck, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006771B0, void, __ctor, (TreeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0153EFF0, String *, EditorResolveToString, (IMoonType_1_System_Object_ * moonType));
IL2CPP_REGISTER_METHOD(0x0153EA00, String *, EditorResolveToString, (IMoonType_1_System_Boolean_ * moonType));
IL2CPP_REGISTER_METHODINFO(0x0478A918, TreeBehaviour_EditorResolveToString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0153F570, String *, EditorResolveToString, (IMoonType_1_UnityEngine_Vector3_ * moonType));
IL2CPP_REGISTER_METHODINFO(0x04754928, TreeBehaviour_EditorResolveToString_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0153F290, String *, EditorResolveToString, (IMoonType_1_System_Single_ * moonType));
IL2CPP_REGISTER_METHODINFO(0x0472AC90, TreeBehaviour_EditorResolveToString_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0153ECF0, String *, EditorResolveToString, (IMoonType_1_System_Int32_ * moonType));
IL2CPP_REGISTER_METHODINFO(0x04741AC8, TreeBehaviour_EditorResolveToString_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0153EFF0, String *, EditorResolveToString, (IMoonType_1_UnityEngine_GameObject_ * moonType));
IL2CPP_REGISTER_METHODINFO(0x0474F480, TreeBehaviour_EditorResolveToString_5__MethodInfo);
}
