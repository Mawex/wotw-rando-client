#include <interception_macros.h>

namespace app::methods::System::ComponentModel::RunWorkerCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x029AC5C0, void, __ctor, (app::RunWorkerCompletedEventArgs * this_ptr, app::Object * result, app::Exception * error, bool cancelled));
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Object *, get_Result, (app::RunWorkerCompletedEventArgs * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_UserState, (app::RunWorkerCompletedEventArgs * this_ptr));
}
