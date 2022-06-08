#include <interception_macros.h>

namespace app::methods::Moon::ExceptionProcessing::ExceptionEntry {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Id, (ExceptionEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Id, (ExceptionEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_StackTrace, (ExceptionEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_StackTrace, (ExceptionEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Message, (ExceptionEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Message, (ExceptionEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01986FA0, void, __ctor, (ExceptionEntry * __this, int32_t id, String * stackTrace, String * message));
IL2CPP_REGISTER_METHOD(0x01987110, void, AddEntry, (ExceptionEntry * __this, String * entry));
IL2CPP_REGISTER_METHOD(0x002FA280, IEnumerable_1_System_String_ *, get_Entries, (ExceptionEntry * __this));
}
