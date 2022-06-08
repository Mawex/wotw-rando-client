using namespace app;

namespace app::methods::UberShaderBlock {
IL2CPP_REGISTER_METHOD(0x0190AE40, bool, get_HasRotateZ, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190AE70, bool, get_HasMotionVectors, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190AE90, double, get_RandomOffset, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190AF20, MeshFilter *, get_Filter, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B010, bool, get_HasCustomMesh, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B3C0, UberShaderComponent *, get_Component, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B440, bool, get_UseFog, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x005035B0, void, set_UseFog, (UberShaderBlock * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0190B520, Renderer *, get_Renderer, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B5F0, bool, get_IsRotated, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B820, bool, get_IsZOffset, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B8E0, bool, get_IsZExpand, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, Material *, get_MaterialInPrefab, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_MaterialInPrefab, (UberShaderBlock * __this, Material * value));
IL2CPP_REGISTER_METHOD(0x0190B8F0, bool, get_IsUsingSharedPrefabMaterial, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190B9A0, Material *, get_ActiveMaterial, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190BAC0, RuntimeTypeHandle, get_TypeId, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190BB70, void, UberShaderEditorUpdate, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190BCC0, void, RandomizeOffset, (UberShaderBlock * __this));
IL2CPP_REGISTER_METHOD(0x0190BD30, void, __ctor, (UberShaderBlock * __this));
}
