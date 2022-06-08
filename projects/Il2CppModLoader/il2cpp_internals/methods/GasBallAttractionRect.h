#include <interception_macros.h>

namespace app::methods::GasBallAttractionRect {
IL2CPP_REGISTER_METHOD(0x00418B70, void, Enable, (GasBallAttractionRect * __this, IGasBallBait * owner));
IL2CPP_REGISTER_METHOD(0x00418C50, void, Disable, (GasBallAttractionRect * __this));
IL2CPP_REGISTER_METHOD(0x00418D10, void, UpdateRuntimeZone, (GasBallAttractionRect * __this));
IL2CPP_REGISTER_METHOD(0x00418E70, bool, IsOnRange, (GasBallAttractionRect * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00418EB0, Vector2, GasBallBaitCenter, (GasBallAttractionRect * __this));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_GasBallAttractionTime, (GasBallAttractionRect * __this));
IL2CPP_REGISTER_METHOD(0x00418FD0, void, OnDrawGizmosSelected, (GasBallAttractionRect * __this));
IL2CPP_REGISTER_METHOD(0x00419200, void, __ctor, (GasBallAttractionRect * __this));
}
