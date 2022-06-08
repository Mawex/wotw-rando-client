using namespace app;

namespace app::methods::SaveSlotInfo {
IL2CPP_REGISTER_METHOD(0x00922B60, void, __ctor, (SaveSlotInfo * __this, SaveSlotInfo * clone));
IL2CPP_REGISTER_METHOD(0x00922CC0, void, __ctor, (SaveSlotInfo * __this));
IL2CPP_REGISTER_METHOD(0x00922E80, bool, LoadFromValueStore, (SaveSlotInfo * __this, PlayerUberStateDescriptor * playerDescriptor, UberStateValueStore * uberStateValueStore));
IL2CPP_REGISTER_METHOD(0x00923360, int32_t, get_TotalSeconds, (SaveSlotInfo * __this));
IL2CPP_REGISTER_METHOD(0x00923370, void, FillData, (SaveSlotInfo * __this));
IL2CPP_REGISTER_METHOD(0x00923850, void, __cctor, (MethodInfo * method));
}
