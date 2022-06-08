using namespace app;

namespace app::methods::AkObjectInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkObjectInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018843A0, void *, getCPtr, (AkObjectInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkObjectInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01884430, void, Finalize, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x018844B0, void, Dispose, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x018846C0, void, set_objID, (AkObjectInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018847F0, uint32_t, get_objID, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884910, void, set_parentID, (AkObjectInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01884A40, uint32_t, get_parentID, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884B60, void, set_iDepth, (AkObjectInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01884C90, int32_t, get_iDepth, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884DB0, void, Clear, (AkObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884E50, int32_t, GetSizeOf, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01884EE0, void, Clone, (AkObjectInfo * __this, AkObjectInfo * other));
IL2CPP_REGISTER_METHOD(0x01885000, void, __ctor, (AkObjectInfo * __this));
}
