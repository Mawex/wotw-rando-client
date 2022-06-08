using namespace app;

namespace app::methods::UnityEngine::Yoga::MeasureFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MeasureFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x031BDBB0, YogaSize, Invoke, (MeasureFunction * __this, YogaNode * node, float width, YogaMeasureMode__Enum widthMode, float height, YogaMeasureMode__Enum heightMode));
IL2CPP_REGISTER_METHOD(0x031BE2D0, IAsyncResult *, BeginInvoke, (MeasureFunction * __this, YogaNode * node, float width, YogaMeasureMode__Enum widthMode, float height, YogaMeasureMode__Enum heightMode, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, YogaSize, EndInvoke, (MeasureFunction * __this, IAsyncResult * result));
}
