using namespace app;

namespace app::methods::Moon::IKLookPostprocess {
IL2CPP_REGISTER_METHOD(0x010FFBB0, void, Awake, (IKLookPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010FFBE0, void, OnAddedToAnimator, (IKLookPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010FFE60, void, OnDrawGizmosSelected, (IKLookPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01100350, void, Process, (IKLookPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01100CF0, Vector3, HandleLimit, (IKLookPostprocess * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x01100F30, void, __ctor, (IKLookPostprocess * __this));
}
