using namespace app;

namespace app::methods::UberInteractionActor {
IL2CPP_REGISTER_METHOD(0x002FBBA0, UberWaterControl *, get_Water, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Water, (UberInteractionActor * __this, UberWaterControl * value));
IL2CPP_REGISTER_METHOD(0x013F5F10, bool, get_CanProduceSplashes, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F5F30, int32_t, get_ActorId, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, GetPrewarmAmount, (UberInteractionActor * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x013F5F70, void, Awake, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F6210, void, OnEnable, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F64F0, void, Start, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F65D0, void, UpdateRadiusFromSphere, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F6990, void, OnDisable, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F6AD0, void, OnWaterEnter, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F6E00, void, OnWaterExit, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x00C8D820, void, Teleport, (UberInteractionActor * __this, Vector3 actorPos));
IL2CPP_REGISTER_METHOD(0x013F6F20, void, InteractionUpdate, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F7260, void, OnPoolSpawned, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F7320, void, SetCooldown, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F7330, void, CacheSphereCollider, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F73C0, bool, ValidForStripping, (UberInteractionActor * __this, StrippableBuildContex context));
IL2CPP_REGISTER_METHOD(0x00615270, bool, DoStrip, (UberInteractionActor * __this));
IL2CPP_REGISTER_METHOD(0x013F73D0, void, __ctor, (UberInteractionActor * __this));
}
