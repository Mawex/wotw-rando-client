using namespace app;

namespace app::methods::Moon::VerletBody_AngularContraint {
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_MaxAngle, (VerletBody_AngularContraint * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_MaxAngle, (VerletBody_AngularContraint * __this, float value));
IL2CPP_REGISTER_METHOD(0x0126FF10, void, __ctor, (VerletBody_AngularContraint * __this, VerletBody_Link * link0, VerletBody_Link * link1, float maxAngle));
IL2CPP_REGISTER_METHOD(0x02126400, void, Update, (VerletBody_AngularContraint * __this, float dt));
}
