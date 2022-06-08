#include <interception_macros.h>

namespace app::methods::ExceptionsTest {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x00984620, void, OnDestroy, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x00984630, void, Start, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x00984A10, IEnumerator *, StartExceptionsTest, (GameObject * go));
IL2CPP_REGISTER_METHOD(0x00984B60, void, FixedUpdate, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x00984F70, void, ChangeState, (ExceptionsTest * __this, ExceptionsTest_State__Enum state));
IL2CPP_REGISTER_METHOD(0x009857B0, void, WriteResults, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x00985B00, RuntimeSceneMetaData *, GetMetaData, (ExceptionsTest * __this, int32_t metaDataIndex));
IL2CPP_REGISTER_METHOD(0x00985BC0, bool, IsLastLevel, (ExceptionsTest * __this, int32_t metaDataIndex));
IL2CPP_REGISTER_METHOD(0x00985C70, void, LoadLevel, (ExceptionsTest * __this, int32_t metaDataIndex));
IL2CPP_REGISTER_METHOD(0x00985D40, void, LoadEmptyLevel, (ExceptionsTest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneRootPreEnabled, (ExceptionsTest * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x047266F0, ExceptionsTest_OnSceneRootPreEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00985DE0, void, OnSceneRootLoadEarlyStart, (ExceptionsTest * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x0473F750, ExceptionsTest_OnSceneRootLoadEarlyStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00985F50, void, __ctor, (ExceptionsTest * __this));
}
