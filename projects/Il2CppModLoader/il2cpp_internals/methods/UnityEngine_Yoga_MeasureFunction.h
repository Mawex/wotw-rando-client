#include <interception_macros.h>

namespace app::methods::UnityEngine_Yoga::MeasureFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::MeasureFunction * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x031BDBB0, YogaSize, Invoke, (app::MeasureFunction * this_ptr, app::YogaNode * node, float width, app::YogaMeasureMode__Enum width_mode, float height, app::YogaMeasureMode__Enum height_mode));
IL2CPP_REGISTER_METHOD(0x031BE2D0, IAsyncResult *, BeginInvoke, (app::MeasureFunction * this_ptr, app::YogaNode * node, float width, app::YogaMeasureMode__Enum width_mode, float height, app::YogaMeasureMode__Enum height_mode, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, YogaSize, EndInvoke, (app::MeasureFunction * this_ptr, app::IAsyncResult * result));
}
