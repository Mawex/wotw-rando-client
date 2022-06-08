using namespace app;

namespace app::methods::Moon::Rendering::RenderTargetDescriptor {
IL2CPP_REGISTER_METHOD(0x001200A0, void, __ctor, (RenderTargetDescriptor__Boxed * __this, RenderTargetType__Enum _type, String * _name, RenderTextureDescriptor _desc, FilterMode__Enum _filterMode, RenderTexture * _external, bool drs));
IL2CPP_REGISTER_METHOD(0x001200F0, void, Assign, (RenderTargetDescriptor__Boxed * __this, RenderTargetType__Enum _type, Int2 _size, RenderTextureFormat__Enum _format, int32_t _depthBufferBits, FilterMode__Enum _filterMode, RenderTexture * _external, int32_t msaaSamples, bool bindMS, bool drs));
IL2CPP_REGISTER_METHOD(0x00120160, int32_t, get_width, (RenderTargetDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120170, int32_t, get_height, (RenderTargetDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120180, Int2, get_size, (RenderTargetDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001201A0, void, set_size, (RenderTargetDescriptor__Boxed * __this, Int2 value));
IL2CPP_REGISTER_METHOD(0x001201B0, int64_t, get_pixelCount, (RenderTargetDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001201C0, int64_t, get_vramSize, (RenderTargetDescriptor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120220, bool, Equals, (RenderTargetDescriptor__Boxed * __this, RenderTargetDescriptor other, bool drsAcceptable));
IL2CPP_REGISTER_METHOD(0x00EB2EF0, bool, operator___, (RenderTargetDescriptor left, RenderTargetDescriptor right));
IL2CPP_REGISTER_METHOD(0x00EB2F30, bool, operator___, (RenderTargetDescriptor left, RenderTargetDescriptor right));
IL2CPP_REGISTER_METHOD(0x00120270, bool, Equals, (RenderTargetDescriptor__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00120370, int32_t, GetHashCode, (RenderTargetDescriptor__Boxed * __this));
}
