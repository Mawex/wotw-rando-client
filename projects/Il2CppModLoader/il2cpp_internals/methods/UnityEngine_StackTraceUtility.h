#include <interception_macros.h>

namespace app::methods::UnityEngine::StackTraceUtility {
IL2CPP_REGISTER_METHOD(0x02C63660, void, SetProjectFolder, (String * folder));
IL2CPP_REGISTER_METHOD(0x02C63780, String *, ExtractStackTrace, ());
IL2CPP_REGISTER_METHOD(0x02C63910, void, ExtractStringFromExceptionInternal, (Object * exceptiono, String * * message, String * * stackTrace));
IL2CPP_REGISTER_METHODINFO(0x04708558, StackTraceUtility_ExtractStringFromExceptionInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C63E90, String *, ExtractFormattedStackTrace, (StackTrace * stackTrace));
IL2CPP_REGISTER_METHOD(0x02C64710, void, __cctor, ());
}
