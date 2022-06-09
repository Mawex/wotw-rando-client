#include <interception_macros.h>

namespace app::methods::VideoDescriptor {
IL2CPP_REGISTER_METHOD(0x008BB830, String *, GetFullVideoOGVPath, (app::VideoDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x008BB8C0, String *, GetEditorAssetVideoOGVPath, (app::VideoDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x008BB950, String *, GetVideoWMVPath, (app::VideoDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x008BB9E0, String *, GetStreamingFolderName, ());
IL2CPP_REGISTER_METHOD(0x008BBA60, String *, GetVideoPath, (app::VideoDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x008BBBC0, String *, GetStreamingVideoPath, (app::VideoDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x008BBCC0, void, __ctor, (app::VideoDescriptor * this_ptr));
}
