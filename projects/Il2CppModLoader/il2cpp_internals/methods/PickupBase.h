#include <interception_macros.h>

namespace app::methods::PickupBase {
IL2CPP_REGISTER_METHOD(0x01157510, bool, get_ShouldUseLegacySerialization, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x011575B0, bool, get_IsCollected, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x011575F0, bool, get_IsCollectedCached, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, GameObject *, get_EffectiveCollectedEffect, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, CollectablePlaceholder *, get_Placeholder, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Placeholder, (PickupBase * __this, CollectablePlaceholder * value));
IL2CPP_REGISTER_METHOD(0x01157600, void, OnValidate, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157760, void, OnPoolSpawned, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157960, void, OnEnable, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157A00, void, OnDisable, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157AA0, void, CacheUberState, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157B80, void, Awake, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157E20, void, AdvanceTime, (PickupBase * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x01157E40, bool, TimeCondition, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157E50, bool, FrustrumOptimizeCondition, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157E70, bool, IsCollectedCondition, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01157F60, void, SpawnCollectedEffect, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01158130, void, Collected, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01158570, void, Serialize, (PickupBase * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01158610, Bounds, get_Bounds, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x011586D0, void, OnFrustumEnter, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnFrustumExit, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_InsideFrustum, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PickupStateChanged, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01158780, void, __ctor, (PickupBase * __this));
IL2CPP_REGISTER_METHOD(0x01158970, void, __cctor, ());
}
