#include <interception_macros.h>

namespace app::methods::SeinInventory {
IL2CPP_REGISTER_METHOD(0x01014320, int32_t, get_Keystones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x010143E0, void, set_Keystones, (SeinInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x010144B0, int32_t, get_AvailableKeystones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x010144E0, int32_t, get_MapStones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x010145A0, void, set_MapStones, (SeinInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01014670, PlayerUberStateInventory *, get_PlayerUberInventory, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x01014720, int32_t, GetTotalAllocatedKeystones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x01014890, int32_t, GetAllocatedKeystones, (SeinInventory * __this, Object * requester));
IL2CPP_REGISTER_METHOD(0x01014990, bool, AllocateKeystones, (SeinInventory * __this, Object * requester, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01014AF0, void, DeallocateKeystones, (SeinInventory * __this, Object * requester, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01014C70, bool, SetAllocatedKeystones, (SeinInventory * __this, Object * requester, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01014FD0, void, DeallocateAllKeystones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x01015060, bool, get_HasKeystones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x01015090, bool, get_HasMapstones, (SeinInventory * __this));
IL2CPP_REGISTER_METHOD(0x010150B0, void, SpendKeystones, (SeinInventory * __this, int32_t cost));
IL2CPP_REGISTER_METHOD(0x01015100, void, SpendMapstone, (SeinInventory * __this, int32_t cost));
IL2CPP_REGISTER_METHOD(0x01015150, void, CollectKeystones, (SeinInventory * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01015180, void, CollectMapstone, (SeinInventory * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x010151B0, void, SetReferenceToSein, (SeinInventory * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x010151D0, void, __ctor, (SeinInventory * __this));
}
