#include <interception_macros.h>

namespace app::methods::ShardTraderEntity {
IL2CPP_REGISTER_METHOD(0x005AC370, String *, get_DialogActorName, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC3F0, String *, get_InteractionActorName, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x00416EB0, MoonAnimation *, get_OpenShopAnimation, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC470, MoonAnimation *, get_OpenShopLoopAnimation, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC4E0, void, OnEnable, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC590, void, OnDisable, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC640, void, OnUpdate, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AC740, void, OnInteractionStart, (ShardTraderEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x005AC820, void, UpdateConditionalStock, (ShardTraderEntity * __this, ShardTraderEntity * traderNPC));
IL2CPP_REGISTER_METHOD(0x005ACE80, void, Apply, (ShardTraderEntity * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005ACE90, IUberState__Array *, get_AffectingUberStates, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005ACEA0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AD060, bool, get_CanEffectivelyStartInteraction, (ShardTraderEntity * __this));
IL2CPP_REGISTER_METHOD(0x005AD180, void, __ctor, (ShardTraderEntity * __this));
}
