using namespace app;

namespace app::methods::System::Text::RegularExpressions::CaptureCollection {
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_SyncRoot, (CaptureCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (CaptureCollection * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (CaptureCollection * __this));
IL2CPP_REGISTER_METHOD(0x02580C10, Capture *, get_Item, (CaptureCollection * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02580C20, void, CopyTo, (CaptureCollection * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0470D680, CaptureCollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02580D20, IEnumerator *, GetEnumerator, (CaptureCollection * __this));
IL2CPP_REGISTER_METHOD(0x02580E70, Capture *, GetCapture, (CaptureCollection * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x04787410, CaptureCollection_GetCapture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025811F0, void, __ctor, (CaptureCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E520, CaptureCollection__ctor__MethodInfo);
}
