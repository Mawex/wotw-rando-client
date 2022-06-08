using namespace app;

namespace app::methods::Swing::Vector3Ext {
IL2CPP_REGISTER_METHOD(0x018315B0, Vector3, uniform, (float _xyz));
IL2CPP_REGISTER_METHOD(0x018315D0, Vector3, uniform2d, (float _xy, float _z));
IL2CPP_REGISTER_METHOD(0x018315F0, Angle, angle, (Vector3 _a, Vector3 _b));
IL2CPP_REGISTER_METHOD(0x01831700, Angle, angle, (Vector3 _from, Vector3 _to, Vector3 _normal));
}
