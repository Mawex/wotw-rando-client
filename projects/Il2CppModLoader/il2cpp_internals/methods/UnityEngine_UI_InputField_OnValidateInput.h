using namespace app;

namespace app::methods::UnityEngine::UI::InputField_OnValidateInput {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (InputField_OnValidateInput * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x024CE8B0, uint16_t, Invoke, (InputField_OnValidateInput * __this, String * text, int32_t charIndex, uint16_t addedChar));
IL2CPP_REGISTER_METHOD(0x024CEE30, IAsyncResult *, BeginInvoke, (InputField_OnValidateInput * __this, String * text, int32_t charIndex, uint16_t addedChar, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x024CEF10, uint16_t, EndInvoke, (InputField_OnValidateInput * __this, IAsyncResult * result));
}
