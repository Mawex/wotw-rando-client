#include <interception_macros.h>

namespace app::methods::UnityEngine_Assertions::AssertionMessageUtil {
IL2CPP_REGISTER_METHOD(0x0241DB90, String *, GetMessage_1, (app::String * failure_message));
IL2CPP_REGISTER_METHOD(0x0241DCE0, String *, GetMessage_2, (app::String * failure_message, app::String * expected));
IL2CPP_REGISTER_METHOD(0x0241E030, String *, GetEqualityMessage, (app::Object * actual, app::Object * expected, bool expect_equal));
}
