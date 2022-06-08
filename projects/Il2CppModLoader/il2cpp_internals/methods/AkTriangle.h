using namespace app;

namespace app::methods::AkTriangle {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkTriangle * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026FEF80, void *, getCPtr, (AkTriangle * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkTriangle * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026FF010, void, Finalize, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FF090, void, Dispose, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FF2A0, void, __ctor, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FF3C0, void, __ctor, (AkTriangle * __this, uint16_t in_pt0, uint16_t in_pt1, uint16_t in_pt2, uint16_t in_surfaceInfo));
IL2CPP_REGISTER_METHOD(0x026FF520, void, set_point0, (AkTriangle * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026FF650, uint16_t, get_point0, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FF770, void, set_point1, (AkTriangle * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026FF8A0, uint16_t, get_point1, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FF9C0, void, set_point2, (AkTriangle * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026FFAF0, uint16_t, get_point2, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FFC10, void, set_surface, (AkTriangle * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026FFD40, uint16_t, get_surface, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FFE60, void, Clear, (AkTriangle * __this));
IL2CPP_REGISTER_METHOD(0x026FFF00, int32_t, GetSizeOf, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026FFF90, void, Clone, (AkTriangle * __this, AkTriangle * other));
}
