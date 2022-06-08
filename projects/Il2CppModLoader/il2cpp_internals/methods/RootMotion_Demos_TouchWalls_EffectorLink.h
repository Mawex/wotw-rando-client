using namespace app;

namespace app::methods::RootMotion::Demos::TouchWalls_EffectorLink {
IL2CPP_REGISTER_METHOD(0x02047870, void, Initiate, (TouchWalls_EffectorLink * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02048190, bool, FindWalls, (TouchWalls_EffectorLink * __this, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x020482B0, void, Update, (TouchWalls_EffectorLink * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02049150, void, StopTouch, (TouchWalls_EffectorLink * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x020494B0, void, OnInteractionStart, (TouchWalls_EffectorLink * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x04720E78, TouchWalls_EffectorLink_OnInteractionStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02049580, void, OnInteractionResume, (TouchWalls_EffectorLink * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x0473C948, TouchWalls_EffectorLink_OnInteractionResume__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02049650, void, OnInteractionStop, (TouchWalls_EffectorLink * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x0477A2B0, TouchWalls_EffectorLink_OnInteractionStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02049720, void, Destroy, (TouchWalls_EffectorLink * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02049B10, void, __ctor, (TouchWalls_EffectorLink * __this));
}
