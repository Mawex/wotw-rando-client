#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PlayerInventory {
IL2CPP_REGISTER_METHOD(0x01DE9940, PlayerInventory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01DE99C0, void, set_Instance, (PlayerInventory * value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_NumCoins, (PlayerInventory * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_NumCoins, (PlayerInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01DE9A50, void, add_coinCollected, (PlayerInventory * __this, Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x01DE9B40, void, remove_coinCollected, (PlayerInventory * __this, Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x01DE99C0, void, Awake, (PlayerInventory * __this));
IL2CPP_REGISTER_METHOD(0x01DE9C30, void, AddCoin, (PlayerInventory * __this));
IL2CPP_REGISTER_METHOD(0x01DE9CD0, void, __ctor, (PlayerInventory * __this));
}
