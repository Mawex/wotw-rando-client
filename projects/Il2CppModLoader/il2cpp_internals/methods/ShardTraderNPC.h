using namespace app;

namespace app::methods::ShardTraderNPC {
IL2CPP_REGISTER_METHOD(0x003FFBD0, int32_t, get_CurrentState, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AD390, bool, get_IsInInteractionRange, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AD5A0, bool, get_OriIsFacingUs, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AD740, void, Awake, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AD860, void, ChangeState, (ShardTraderNPC * __this, ShardTraderNPC_State__Enum state));
IL2CPP_REGISTER_METHOD(0x005AD880, void, FixedUpdate, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AE060, void, OnEnterIdle, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AE080, void, UpdateIdle, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AE490, void, OnEnterMoveOriToPosition, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMoveOriToPosition, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AE7D0, void, OnExitMoveOriToPosition, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AEA70, void, OnEnterInteraction, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInteraction, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitInteraction, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AEC50, void, OnInteractionMessageHide, (ShardTraderNPC * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x047770C8, ShardTraderNPC_OnInteractionMessageHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005AEEF0, void, OnEnterInShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF060, void, UpdateInShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitInShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF160, void, OnEnterAfterShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAfterShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF2F0, void, OnExitAfterShop, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF5E0, void, OnAfterShopMessageHide, (ShardTraderNPC * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04743940, ShardTraderNPC_OnAfterShopMessageHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005AF5F0, void, OnEnterDidNotBuy, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDidNotBuy, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF780, void, OnExitDidNotBuy, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF5E0, void, OnDidNotBuyMessageHide, (ShardTraderNPC * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x047225E0, ShardTraderNPC_OnDidNotBuyMessageHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005AF980, void, __ctor, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x005AF9B0, void, _OnInteractionMessageHide_b__43_0, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AC98, ShardTraderNPC__OnInteractionMessageHide_b__43_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005AF9C0, void, _OnInteractionMessageHide_b__43_1, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHODINFO(0x04704A50, ShardTraderNPC__OnInteractionMessageHide_b__43_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, IMoonTypeResolver *, GetResolverForType, (ShardTraderNPC * __this));
}
