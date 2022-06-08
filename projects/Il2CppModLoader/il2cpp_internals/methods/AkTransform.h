#include <interception_macros.h>

namespace app::methods::AkTransform {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkTransform * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026FDD00, void *, getCPtr, (AkTransform * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkTransform * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026FDD90, void, Finalize, (AkTransform * __this));
IL2CPP_REGISTER_METHOD(0x026FDE10, void, Dispose, (AkTransform * __this));
IL2CPP_REGISTER_METHOD(0x026FE020, AkVector *, Position, (AkTransform * __this));
IL2CPP_REGISTER_METHOD(0x026FE220, AkVector *, OrientationFront, (AkTransform * __this));
IL2CPP_REGISTER_METHOD(0x026FE420, AkVector *, OrientationTop, (AkTransform * __this));
IL2CPP_REGISTER_METHOD(0x026FE620, void, Set, (AkTransform * __this, AkVector * in_position, AkVector * in_orientationFront, AkVector * in_orientationTop));
IL2CPP_REGISTER_METHOD(0x026FE7A0, void, Set, (AkTransform * __this, float in_positionX, float in_positionY, float in_positionZ, float in_orientFrontX, float in_orientFrontY, float in_orientFrontZ, float in_orientTopX, float in_orientTopY, float in_orientTopZ));
IL2CPP_REGISTER_METHOD(0x026FE900, void, SetPosition, (AkTransform * __this, AkVector * in_position));
IL2CPP_REGISTER_METHOD(0x026FEA40, void, SetPosition, (AkTransform * __this, float in_x, float in_y, float in_z));
IL2CPP_REGISTER_METHOD(0x026FEBA0, void, SetOrientation, (AkTransform * __this, AkVector * in_orientationFront, AkVector * in_orientationTop));
IL2CPP_REGISTER_METHOD(0x026FED00, void, SetOrientation, (AkTransform * __this, float in_orientFrontX, float in_orientFrontY, float in_orientFrontZ, float in_orientTopX, float in_orientTopY, float in_orientTopZ));
IL2CPP_REGISTER_METHOD(0x026FEE60, void, __ctor, (AkTransform * __this));
}
