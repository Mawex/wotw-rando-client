#pragma once
#include <interception_macros.h>

namespace app::methods::System::Predicate_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288D9D0, bool, Invoke, (app::Predicate_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::DynamicInstantiationDescriptor_ReflectionInfo obj))
    IL2CPP_REGISTER_METHOD(0x0288DE90, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::DynamicInstantiationDescriptor_ReflectionInfo obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::IAsyncResult * result))
}
