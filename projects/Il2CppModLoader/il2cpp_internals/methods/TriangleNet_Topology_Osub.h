#include <interception_macros.h>

namespace app::methods::TriangleNet::Topology::Osub {
IL2CPP_REGISTER_METHOD(0x00107C00, SubSegment *, get_Segment, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F190, String *, ToString, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F290, void, Sym, (Osub__Boxed * __this, Osub * os));
IL2CPP_REGISTER_METHOD(0x0021F2B0, void, Sym, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F2C0, void, Pivot, (Osub__Boxed * __this, Osub * os));
IL2CPP_REGISTER_METHOD(0x0021F320, void, Pivot, (Osub__Boxed * __this, Otri * ot));
IL2CPP_REGISTER_METHOD(0x0021F380, void, Next, (Osub__Boxed * __this, Osub * ot));
IL2CPP_REGISTER_METHOD(0x0021F3E0, void, Next, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F440, Vertex *, Org, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F490, Vertex *, Dest, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F4E0, void, SetOrg, (Osub__Boxed * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0021F4F0, void, SetDest, (Osub__Boxed * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0021F500, Vertex *, SegOrg, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F550, Vertex *, SegDest, (Osub__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0021F5A0, void, SetSegOrg, (Osub__Boxed * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0021F5B0, void, SetSegDest, (Osub__Boxed * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0021F5C0, void, Bond, (Osub__Boxed * __this, Osub * os));
IL2CPP_REGISTER_METHOD(0x0021F5D0, void, Dissolve, (Osub__Boxed * __this, SubSegment * dummy));
IL2CPP_REGISTER_METHOD(0x0021F620, bool, Equal, (Osub__Boxed * __this, Osub os));
IL2CPP_REGISTER_METHOD(0x0021F640, void, TriDissolve, (Osub__Boxed * __this, Triangle * dummy));
IL2CPP_REGISTER_METHOD(0x02AA2860, bool, IsDead, (SubSegment * sub));
IL2CPP_REGISTER_METHOD(0x02AA28B0, void, Kill, (SubSegment * sub));
}
