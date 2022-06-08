using namespace app;

namespace app::methods::UberInteractionManager {
IL2CPP_REGISTER_METHOD(0x013F7820, UberInteractionManager_PropertyIDCache *, GetCachedPropertyID, (UberInteractionManager_PropertyIDCache * * staticCache, String * propertyInteractionName));
IL2CPP_REGISTER_METHOD(0x013F7980, String *, GetInteractionCurveString, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013F7D00, float, get_InteractionTime, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013F7E40, void, OnEnable, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013F7FC0, void, OnDisable, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013F8190, void, UpdateCurves, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013F85D0, void, Explode, (UberInteractionManager * __this, Vector3 position, float outwardSpeed, Vector4 strength, float radius, float startTime, bool forcePlay));
IL2CPP_REGISTER_METHOD(0x013F8730, void, Explode, (UberInteractionManager * __this, Vector3 position, float outwardSpeed, Vector4 strength, float radius, float angle, Vector3 forwardDirection, float startTime, bool forcePlay));
IL2CPP_REGISTER_METHOD(0x013F87D0, void, Explode, (UberInteractionManager * __this, Vector3 position, float outwardSpeed, Vector4 strength, float radius, float startTime, bool forcePlay, float angle, Vector3 forwardDirection));
IL2CPP_REGISTER_METHOD(0x013F94E0, void, TestInteractionForExplosionApplication, (UberInteractionManager * __this, int32_t interactionIndex, Vector3 * position, float outwardSpeed, Vector4 * strength, float radius, float startTime, bool forcePlay, float angle, Vector3 * forwardDirection, bool processAngle));
IL2CPP_REGISTER_METHOD(0x013F9BD0, void, RemoveInteractions, (UberInteractionManager * __this, List_1_IInteractable_ * affected));
IL2CPP_REGISTER_METHOD(0x013F9D10, void, RemoveAllInteractions, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013F9DF0, void, Interact, (UberInteractionManager * __this, UberInteractionActor * actor, Vector3 velocity, Vector3 prevPos, int32_t priority));
IL2CPP_REGISTER_METHOD(0x013FA170, void, ResolveActorQueue, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FB020, void, ResolveActorVsInteraction, (UberInteractionManager * __this, int32_t interactionIndex, UberInteractionActor * actor, Vector3 * actorPosition, Vector3 * prevActorPosition, Vector4 * strength, Vector3 * velocity, float radius, float zRadius, float zScale, bool * hadOverlap));
IL2CPP_REGISTER_METHOD(0x013FB4C0, void, FixedUpdate, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FC060, bool, ApplyExplosion, (UberInteractionManager * __this, UberInteractionManager_ExplosionApplication * application));
IL2CPP_REGISTER_METHOD(0x013FC310, void, UpdateTexture, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FC400, void, RegisterActor, (UberInteractionManager * __this, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x013FC4C0, void, RegisterInteractor, (UberInteractionManager * __this, IInteractable * interactor));
IL2CPP_REGISTER_METHOD(0x013FC5B0, void, DoRegisterInteractor, (UberInteractionManager * __this, IInteractable * interactor));
IL2CPP_REGISTER_METHOD(0x013FD0A0, void, UpdateArrays, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FD160, void, RemoveInteractor, (UberInteractionManager * __this, IInteractable * interactor));
IL2CPP_REGISTER_METHOD(0x013FD4C0, void, RemoveActor, (UberInteractionManager * __this, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x013FD5D0, void, OnDrawGizmos, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FDA10, void, InitializeAccelerationStructure, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FDB70, void, __ctor, (UberInteractionManager * __this));
IL2CPP_REGISTER_METHOD(0x013FE710, void, __cctor, (MethodInfo * method));
}
