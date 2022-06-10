#pragma once
#include <interception_macros.h>

namespace app::methods::ExceptionsTest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984620, void, OnDestroy, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984630, void, Start, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984A10, app::IEnumerator *, StartExceptionsTest, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00984B60, void, FixedUpdate, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984F70, void, ChangeState, (app::ExceptionsTest * this_ptr, app::ExceptionsTest_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x009857B0, void, WriteResults, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00985B00, app::RuntimeSceneMetaData *, GetMetaData, (app::ExceptionsTest * this_ptr, int32_t meta_data_index))
    IL2CPP_REGISTER_METHOD(0x00985BC0, bool, IsLastLevel, (app::ExceptionsTest * this_ptr, int32_t meta_data_index))
    IL2CPP_REGISTER_METHOD(0x00985C70, void, LoadLevel, (app::ExceptionsTest * this_ptr, int32_t meta_data_index))
    IL2CPP_REGISTER_METHOD(0x00985D40, void, LoadEmptyLevel, (app::ExceptionsTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneRootPreEnabled, (app::ExceptionsTest * this_ptr, app::SceneRoot * scene_root))
    IL2CPP_REGISTER_METHODINFO(0x047266F0, ExceptionsTest_OnSceneRootPreEnabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00985DE0, void, OnSceneRootLoadEarlyStart, (app::ExceptionsTest * this_ptr, app::SceneRoot * scene_root))
    IL2CPP_REGISTER_METHODINFO(0x0473F750, ExceptionsTest_OnSceneRootLoadEarlyStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00985F50, void, ctor, (app::ExceptionsTest * this_ptr))
}
