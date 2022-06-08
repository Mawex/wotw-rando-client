using namespace app;

namespace app::methods::Moon::UberStateCollection {
IL2CPP_REGISTER_METHOD(0x01B674A0, UberStateCollection *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B67640, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B67700, void, InitializeCollectionSynchronous, (bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x01B677F0, void, InitializeCollection, (Action * onCollectionLoaded));
IL2CPP_REGISTER_METHOD(0x01B67960, ReadOnlyCollection_1_UnityEngine_ScriptableObject_ *, get_Descriptors, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B67A20, void, Init, (UberStateCollection * __this));
IL2CPP_REGISTER_METHOD(0x01B67BD0, void, PrepareRuntimeDataType, (UberStateCollection * __this));
IL2CPP_REGISTER_METHOD(0x01B68090, bool, IsUberStateAssetPath, (String * assetPath));
IL2CPP_REGISTER_METHOD(0x01B68170, IUberState *, GetState, (UberID * groupID, UberID * stateID));
IL2CPP_REGISTER_METHOD(0x01B683B0, void, Add, (UberID * id, UberStateCollectionGroup * uberStateCollectionGroup));
IL2CPP_REGISTER_METHOD(0x01B684B0, IUberState__Array *, BuildDescriptorsArray, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B68800, ReadOnlyCollection_1_Moon_INonSerializedUberState_ *, GetNonSerializedUberStates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B68950, void, InitializeNonSerializedUberStates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B68B30, ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ *, GetExternallyModifiableUberStates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B68D70, void, __ctor, (UberStateCollection * __this));
IL2CPP_REGISTER_METHOD(0x01B69150, void, __cctor, (MethodInfo * method));
}
