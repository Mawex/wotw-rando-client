using namespace app;

namespace app::methods::RootMotion::FinalIK::RagdollUtility {
IL2CPP_REGISTER_METHOD(0x02A198F0, void, EnableRagdoll, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A19950, void, DisableRagdoll, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A19B00, void, Start, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1A430, IEnumerator *, DisableRagdollSmooth, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1A580, void, Update, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1A9A0, void, FixedUpdate, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1A9E0, void, LateUpdate, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1AB10, void, AfterLastIK, (RagdollUtility * __this));
IL2CPP_REGISTER_METHODINFO(0x04711410, RagdollUtility_AfterLastIK__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A1AB40, void, AfterAnimation, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1AB80, void, OnFinalPose, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1AC20, void, RagdollEnabler, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B0C0, bool, get_isRagdoll, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B1E0, void, RecordVelocities, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B250, bool, get_ikUsed, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B440, void, StoreLocalState, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B5B0, void, FixTransforms, (RagdollUtility * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02A1B630, void, OnDestroy, (RagdollUtility * __this));
IL2CPP_REGISTER_METHOD(0x02A1B830, void, __ctor, (RagdollUtility * __this));
}
