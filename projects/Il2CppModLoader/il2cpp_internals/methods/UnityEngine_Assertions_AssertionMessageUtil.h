#include <interception_macros.h>

namespace app::methods::UnityEngine::Assertions::AssertionMessageUtil {
IL2CPP_REGISTER_METHOD(0x0241DB90, String *, GetMessage, (String * failureMessage));
IL2CPP_REGISTER_METHOD(0x0241DCE0, String *, GetMessage, (String * failureMessage, String * expected));
IL2CPP_REGISTER_METHOD(0x0241E030, String *, GetEqualityMessage, (Object * actual, Object * expected, bool expectEqual));
}
