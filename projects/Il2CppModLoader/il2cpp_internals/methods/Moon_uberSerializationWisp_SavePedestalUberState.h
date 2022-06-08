using namespace app;

namespace app::methods::Moon::uberSerializationWisp::SavePedestalUberState {
IL2CPP_REGISTER_METHOD(0x00F442B0, bool, get_HasGameBeenSaved, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F442D0, void, set_HasGameBeenSaved, (SavePedestalUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F44310, bool, get_IsTeleporterActive, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F44330, void, set_IsTeleporterActive, (SavePedestalUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F44370, void, SetIsDirty, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F44420, SavePedestalUberState_PedestalState *, ReadStateFromStore, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int64_t, get_Size, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F44500, void, Save, (SavePedestalUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x00F445F0, Object *, Load, (SavePedestalUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x005D89A0, UberStateHeader_UberStateType__Enum, get_Type, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F44760, Object *, CreateDefaultUberState, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F448C0, UberID *, get_GroupID, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (SavePedestalUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F449B0, void, __ctor, (SavePedestalUberState * __this));
}
