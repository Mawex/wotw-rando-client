#include <interception_macros.h>

namespace app::methods::System::AssemblyLoadEventArgs {
IL2CPP_REGISTER_METHOD(0x02299010, void, __ctor, (app::AssemblyLoadEventArgs * this_ptr, app::Assembly * loaded_assembly));
IL2CPP_REGISTER_METHOD(0x002FA280, Assembly *, get_LoadedAssembly, (app::AssemblyLoadEventArgs * this_ptr));
}
