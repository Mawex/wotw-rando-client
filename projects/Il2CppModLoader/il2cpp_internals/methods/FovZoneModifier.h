using namespace app;

namespace app::methods::FovZoneModifier {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VisibleOnInspector, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VisibleOnInspector, (FovZoneModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CFC770, bool, get_FOVInfluencerIsValid, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_FOVInfluencerWeight, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_FOVInfluencerWeight, (FovZoneModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_FOVInfluencerOffset, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x01281A00, float, get_FOVInfluencerTargetZ, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x01281B80, void, InitializeModifier, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x01281C20, void, CleanUpModifier, (FovZoneModifier * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, UpdateModifier, (FovZoneModifier * __this, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FovZoneModifier * __this));
}
