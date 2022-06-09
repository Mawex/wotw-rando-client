#include <interception_macros.h>

namespace app::methods::ShardTraderEntity {
IL2CPP_REGISTER_METHOD(0x005AC370, String *, get_DialogActorName, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC3F0, String *, get_InteractionActorName, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00416EB0, MoonAnimation *, get_OpenShopAnimation, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC470, MoonAnimation *, get_OpenShopLoopAnimation, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC4E0, void, OnEnable, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC590, void, OnDisable, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC640, void, OnUpdate, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AC740, void, OnInteractionStart, (app::ShardTraderEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x005AC820, void, UpdateConditionalStock, (app::ShardTraderEntity * this_ptr, app::ShardTraderEntity * trader_n_p_c));
IL2CPP_REGISTER_METHOD(0x005ACE80, void, Apply, (app::ShardTraderEntity * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005ACE90, IUberState__Array *, get_AffectingUberStates, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005ACEA0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AD060, bool, get_CanEffectivelyStartInteraction, (app::ShardTraderEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005AD180, void, __ctor, (app::ShardTraderEntity * this_ptr));
}
