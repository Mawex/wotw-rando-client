#include <interception_macros.h>

namespace app::methods::EditorSceneSaveEvent {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_SceneName, (EditorSceneSaveEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SceneName, (EditorSceneSaveEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_TimeTaken, (EditorSceneSaveEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TimeTaken, (EditorSceneSaveEvent * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x02E91490, DatadogEvent *, GetCompatibleEvent, (EditorSceneSaveEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EditorSceneSaveEvent * __this));
}
