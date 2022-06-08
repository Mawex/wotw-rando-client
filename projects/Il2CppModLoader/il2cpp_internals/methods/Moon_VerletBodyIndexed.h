using namespace app;

namespace app::methods::Moon::VerletBodyIndexed {
IL2CPP_REGISTER_METHOD(0x021274D0, int32_t, AddPoint, (VerletBodyIndexed * __this, Vector3 position, float mass, float damping));
IL2CPP_REGISTER_METHOD(0x021277C0, int32_t, AddLink, (VerletBodyIndexed * __this, int32_t indexP0, int32_t indexP1, float restDistance, float stiffness));
IL2CPP_REGISTER_METHOD(0x02127A40, int32_t, AddAngularConstraint, (VerletBodyIndexed * __this, int32_t indexL0, int32_t indexL1, float maxAngle));
IL2CPP_REGISTER_METHOD(0x02127CA0, void, Update, (VerletBodyIndexed * __this, float dt));
IL2CPP_REGISTER_METHOD(0x02128EF0, void, Clear, (VerletBodyIndexed * __this));
IL2CPP_REGISTER_METHOD(0x02128FA0, Vector3, GetPointPosition, (VerletBodyIndexed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02129000, void, SetPointCurrentAndPrevPositions, (VerletBodyIndexed * __this, int32_t index, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02129070, void, AddForceToPoint, (VerletBodyIndexed * __this, int32_t index, Vector3 force));
IL2CPP_REGISTER_METHOD(0x021290D0, void, SetLinkRestDistance, (VerletBodyIndexed * __this, int32_t index, float distance));
IL2CPP_REGISTER_METHOD(0x02129110, void, __ctor, (VerletBodyIndexed * __this));
}
