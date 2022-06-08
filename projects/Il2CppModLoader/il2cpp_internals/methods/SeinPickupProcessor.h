#include <interception_macros.h>

namespace app::methods::SeinPickupProcessor {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AreFirstTimeHintsEnabled, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B0730, bool, get_IsPerformingSequence, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B0740, void, OnEnable, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B0CD0, void, OnDisable, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B1260, void, Update, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B14D0, void, ChangeState, (SeinPickupProcessor * __this, SeinPickupProcessor_PickupProcessorState__Enum state));
IL2CPP_REGISTER_METHOD(0x008B1530, void, OnRestoreCheckpoint, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x04734508, SeinPickupProcessor_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B1530, void, OnTimelineFinished, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C260, SeinPickupProcessor_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B1550, void, OnShowItem, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x04751C58, SeinPickupProcessor_OnShowItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B17F0, void, PerformPickupSequence, (SeinPickupProcessor * __this, SeinPickupProcessor_CollectableInfo * collectableInfo));
IL2CPP_REGISTER_METHOD(0x008B1BF0, void, SetHasBeenCollectedBefore, (SeinPickupProcessor * __this, SeinPickupProcessor_CollectableInfo * collectableInfo));
IL2CPP_REGISTER_METHOD(0x008B1E80, bool, GetHasBeenCollectedBefore, (SeinPickupProcessor * __this, SeinPickupProcessor_CollectableInfo * collectableInfo));
IL2CPP_REGISTER_METHOD(0x008B20D0, void, OnFinishedReading, (SeinPickupProcessor * __this, MessageBox_HideAction__Enum hideAction));
IL2CPP_REGISTER_METHODINFO(0x0478C530, SeinPickupProcessor_OnFinishedReading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B2320, void, OnCollectSkillPointPickup, (SeinPickupProcessor * __this, SkillPointPickup * skillPointPickup));
IL2CPP_REGISTER_METHOD(0x008B2600, void, OnCollectQuestItemPickup, (SeinPickupProcessor * __this, QuestItemPickup * questItemPickup));
IL2CPP_REGISTER_METHOD(0x008B2A00, void, OnCollectedShardSlotUpgrade, (SeinPickupProcessor * __this, ShardSlotUpgradePickup * shardSlotPickup));
IL2CPP_REGISTER_METHOD(0x008B2C80, void, OnCollectEnergyOrbPickup, (SeinPickupProcessor * __this, EnergyOrbPickup * energyOrbPickup));
IL2CPP_REGISTER_METHOD(0x008B2F90, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x008B3030, void, OnCollectMaxEnergyContainerPickup, (SeinPickupProcessor * __this, MaxEnergyContainerPickup * energyContainerPickup));
IL2CPP_REGISTER_METHOD(0x008B3410, void, OnCollectMaxEnergyHalfContainerPickup, (SeinPickupProcessor * __this, MaxEnergyHalfContainerPickup * energyContainerPickup));
IL2CPP_REGISTER_METHOD(0x008B3AB0, void, OnCollectOrePickup, (SeinPickupProcessor * __this, OrePickup * orePickup));
IL2CPP_REGISTER_METHOD(0x008B3D80, void, OnCollectPickup, (SeinPickupProcessor * __this, PickupBase * pickup));
IL2CPP_REGISTER_METHOD(0x008B4560, void, OnCollectExpOrbPickup, (SeinPickupProcessor * __this, ExpOrbPickup * expOrbPickup));
IL2CPP_REGISTER_METHOD(0x008B49B0, void, OnCollectKeystonePickup, (SeinPickupProcessor * __this, KeystonePickup * keystonePickup));
IL2CPP_REGISTER_METHOD(0x008B4CB0, void, OnCollectMaxHealthContainerPickup, (SeinPickupProcessor * __this, MaxHealthContainerPickup * maxHealthContainerPickup));
IL2CPP_REGISTER_METHOD(0x008B4FF0, void, OnCollectMaxHealthHalfContainerPickup, (SeinPickupProcessor * __this, MaxHealthHalfContainerPickup * maxHealthContainerPickup));
IL2CPP_REGISTER_METHOD(0x008B5630, void, OnCollectRestoreHealthPickup, (SeinPickupProcessor * __this, RestoreHealthPickup * restoreHealthPickup));
IL2CPP_REGISTER_METHOD(0x008B5830, void, OnCollectMapStonePickup, (SeinPickupProcessor * __this, MapStonePickup * mapStonePickup));
IL2CPP_REGISTER_METHOD(0x008B5AE0, void, OnCollectSpiritShardPickup, (SeinPickupProcessor * __this, SpiritShardPickup * spiritShardPickup));
IL2CPP_REGISTER_METHOD(0x008B5DA0, void, SetReferenceToSein, (SeinPickupProcessor * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (SeinPickupProcessor * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x008B5DD0, void, __ctor, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHOD(0x008B6E60, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x008B6FF0, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_0, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x04719440, SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup_b__56_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B72E0, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_1, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x047481D8, SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup_b__56_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B75D0, void, _OnCollectMaxHealthHalfContainerPickup_b__62_0, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x04790BE0, SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup_b__62_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008B78C0, void, _OnCollectMaxHealthHalfContainerPickup_b__62_1, (SeinPickupProcessor * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F218, SeinPickupProcessor__OnCollectMaxHealthHalfContainerPickup_b__62_1__MethodInfo);
}
