using namespace app;

namespace app::methods::TriangleNet::IO::TriangleFormat {
IL2CPP_REGISTER_METHOD(0x02621520, bool, IsSupported, (TriangleFormat * __this, String * file));
IL2CPP_REGISTER_METHOD(0x02621670, IMesh *, Import, (TriangleFormat * __this, String * filename));
IL2CPP_REGISTER_METHODINFO(0x04717850, TriangleFormat_Import__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026219D0, void, Write, (TriangleFormat * __this, IMesh * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02621C30, void, Write, (TriangleFormat * __this, IMesh * mesh, Stream * stream));
IL2CPP_REGISTER_METHODINFO(0x04709F50, TriangleFormat_Write_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02621C80, IPolygon *, Read, (TriangleFormat * __this, String * filename));
IL2CPP_REGISTER_METHODINFO(0x047131A0, TriangleFormat_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02621FB0, void, Write, (TriangleFormat * __this, IPolygon * polygon, String * filename));
IL2CPP_REGISTER_METHOD(0x02622110, void, Write, (TriangleFormat * __this, IPolygon * polygon, Stream * stream));
IL2CPP_REGISTER_METHODINFO(0x04785698, TriangleFormat_Write_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TriangleFormat * __this));
}
