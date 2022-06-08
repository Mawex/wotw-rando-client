using namespace app;

namespace app::methods::RootMotion::FinalIK::FullBodyBipedIK {
IL2CPP_REGISTER_METHOD(0x02063330, void, OpenUserManual, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020633F0, void, OpenScriptReference, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020634B0, void, OpenSetupTutorial, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02063570, void, OpenInspectorTutorial, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02063630, void, SupportGroup, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020636F0, void, ASThread, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020637B0, void, SetReferences, (FullBodyBipedIK * __this, BipedReferences * references, Transform * rootNode));
IL2CPP_REGISTER_METHOD(0x002FBB80, IKSolver *, GetIKSolver, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x020637E0, bool, ReferencesError, (FullBodyBipedIK * __this, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x02063A80, bool, ReferencesWarning, (FullBodyBipedIK * __this, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x020640E0, void, Reinitiate, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02064110, void, AutoDetectReferences, (FullBodyBipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02064310, void, __ctor, (FullBodyBipedIK * __this));
}
