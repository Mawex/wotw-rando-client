#include <interception_macros.h>

namespace app::methods::Moon::UberStateController {
IL2CPP_REGISTER_METHOD(0x01B69690, List_1_Moon_IUberStateApplier_ *, get_AppliersEditorCache, ());
IL2CPP_REGISTER_METHOD(0x01B699A0, void, InvalidateAppliersCache, ());
IL2CPP_REGISTER_METHOD(0x01B69AB0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01B69CB0, UberStateController *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01B69EB0, void, Register, (IUberStateApplierWithCallbacks * applier));
IL2CPP_REGISTER_METHOD(0x01B69F80, void, Unregister, (IUberStateApplierWithCallbacks * applier));
IL2CPP_REGISTER_METHOD(0x01B6A050, void, Register, (IUberStateApplier * applier));
IL2CPP_REGISTER_METHOD(0x01B6A1E0, void, Unregister, (IUberStateApplier * applier));
IL2CPP_REGISTER_METHOD(0x01B6A3B0, UberStateValueStore *, get_CurrentStateValueStore, ());
IL2CPP_REGISTER_METHOD(0x01B6A590, bool, get_HavePendingAppliers, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B6A620, void, Initialize, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B6A970, void, OnUpdate, (UberStateController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01B6AA10, void, LookForExternalModifications, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B6ABB0, void, NotifyPresaveObservers, (UberStateValueStore * valueStore));
IL2CPP_REGISTER_METHOD(0x01B6AE60, void, SetState, (UberStateValueStore * uberStateValueStore));
IL2CPP_REGISTER_METHOD(0x01B6AF30, void, NotifySerializationChanged, (ISerializedUberState * uberState));
IL2CPP_REGISTER_METHOD(0x01B6B010, SceneUberStateGroup *, GetSceneGroup, (String * scene));
IL2CPP_REGISTER_METHOD(0x01B6B390, void, ApplyPendingChanges, ());
IL2CPP_REGISTER_METHOD(0x01B6B440, void, ApplyChanges, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B6B6F0, void, RemoveApplier, (UberStateController * __this, IUberStateApplier * applier));
IL2CPP_REGISTER_METHOD(0x01B6B850, bool, IsWaitingToApplyApplier, (UberStateController * __this, IUberStateApplier * applier, int32_t * index));
IL2CPP_REGISTER_METHOD(0x01B6B930, bool, IsWaitingToApplyApplier, (UberStateController * __this, IUberStateApplier * applier));
IL2CPP_REGISTER_METHOD(0x01B6BB30, void, SetWaitingApplierContext, (UberStateController * __this, int32_t index, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B6BC30, void, Apply, (List_1_Moon_IUberState_ * descriptors, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B6BD60, void, Apply, (IUberState * descriptor, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B6C010, bool, ApplierIsAffectedByUberState, (IUberStateApplier * applier, IUberState * descriptor));
IL2CPP_REGISTER_METHOD(0x01B6C160, void, ApplyAll, (UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B6C3D0, void, OnPostRestoreCheckpoint, ());
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateEditorAppliersCache, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPlaying, ());
IL2CPP_REGISTER_METHOD(0x01B6C550, void, __ctor, (UberStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B6C850, void, __cctor, ());
}
