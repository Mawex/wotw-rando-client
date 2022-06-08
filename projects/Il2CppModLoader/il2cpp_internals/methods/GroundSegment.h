#include <interception_macros.h>

namespace app::methods::GroundSegment {
IL2CPP_REGISTER_METHOD(0x010983C0, Vector3, ClampPosition, (GroundSegment * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01098500, bool, IsInside, (GroundSegment * __this, float x));
IL2CPP_REGISTER_METHOD(0x01098580, float, Evaluate, (GroundSegment * __this, float x));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Test, (GroundSegment * __this));
IL2CPP_REGISTER_METHOD(0x01098810, void, Sort, (GroundSegment * __this));
IL2CPP_REGISTER_METHOD(0x01098A30, void, Generate, (GroundSegment * __this));
IL2CPP_REGISTER_METHOD(0x01098E90, void, OnDrawGizmos, (GroundSegment * __this));
IL2CPP_REGISTER_METHOD(0x01099050, void, __ctor, (GroundSegment * __this));
}
