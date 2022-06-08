#include <interception_macros.h>

namespace app::methods::Metaballs2D::MetaballRenderer {
IL2CPP_REGISTER_METHOD(0x01056D80, Vector2, get_CellSize, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, void, Awake, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A15B0, void, Update, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A2780, void, Init, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A2CE0, void, AddMetaBall, (MetaballRenderer * __this, Vector2 position, float radius));
IL2CPP_REGISTER_METHOD(0x015A2E80, float, GetZValueAt, (MetaballRenderer * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x015A3220, void, SampleFunction, (MetaballRenderer * __this, MetaballRenderer_GridSample * grid));
IL2CPP_REGISTER_METHOD(0x015A36B0, int32_t, IndexFunction, (MetaballRenderer * __this, float b0, float b1, float b2, float b3));
IL2CPP_REGISTER_METHOD(0x015A36F0, Vector3, SmoothFunction, (MetaballRenderer * __this, Vector3 p, float sA, float sB, float sC, float sD));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UdpateMetaBall, (MetaballRenderer * __this, MetaballRenderer_IMetaball * currentBall));
IL2CPP_REGISTER_METHOD(0x015A3930, void, HandleHorizontalBorderCollision, (MetaballRenderer * __this, MetaballRenderer_IMetaball * mBall));
IL2CPP_REGISTER_METHOD(0x015A3A30, void, HandleVerticalBorderCollision, (MetaballRenderer * __this, MetaballRenderer_IMetaball * mBall));
IL2CPP_REGISTER_METHOD(0x015A3B20, void, ApplySpeed, (MetaballRenderer * __this, MetaballRenderer_IMetaball * ball));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeUdpate, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterUdpate, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A3C80, void, OnDrawGizmos, (MetaballRenderer * __this));
IL2CPP_REGISTER_METHOD(0x015A3E20, void, __ctor, (MetaballRenderer * __this));
}
