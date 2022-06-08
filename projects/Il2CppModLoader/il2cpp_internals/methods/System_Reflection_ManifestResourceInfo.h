#include <interception_macros.h>

namespace app::methods::System::Reflection::ManifestResourceInfo {
IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor, (ManifestResourceInfo * __this, Assembly * containingAssembly, String * containingFileName, ResourceLocation__Enum resourceLocation));
IL2CPP_REGISTER_METHOD(0x002FA280, Assembly *, get_ReferencedAssembly, (ManifestResourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_FileName, (ManifestResourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, ResourceLocation__Enum, get_ResourceLocation, (ManifestResourceInfo * __this));
}
