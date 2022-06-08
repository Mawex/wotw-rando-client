#include <interception_macros.h>

namespace app::methods::HoloLensFileWriteState {
IL2CPP_REGISTER_METHOD(0x002FA280, FileStream *, get_Stream, (HoloLensFileWriteState * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Stream, (HoloLensFileWriteState * __this, FileStream * value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (HoloLensFileWriteState * __this, FileStream * fileStream));
}
