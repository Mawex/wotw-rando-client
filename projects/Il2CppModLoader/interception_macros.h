#pragma once

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception.h>

#define IL2CPP_REGISTER_METHOD(address, return_type, name, params) \
    return_type(*name) params = nullptr;                     \
    modloader::intercept::binding binding_##name(address, reinterpret_cast<void**>(&name), #name);

// We may use this later.
#define IL2CPP_REGISTER_METHODINFO(address, name)

#define IL2CPP_INTERCEPT(method_namespace, return_type, method_name, params)                                                                         \
    static_assert(std::is_same<decltype(method_namespace##::##method_name), return_type(*) params>::value, "incorrect function type");            \
    return_type(*method_name##_original) params = nullptr;                                                                                             \
    return_type method_name##_intercept params;                                                                                                    \
    modloader::intercept::intercept binding_##method_name(reinterpret_cast<void**>(&method_namespace##::##method_name), reinterpret_cast<void**>(&method_name##_original), method_name##_intercept, #method_name); \
    return_type method_name##_intercept params

#define GUARD(namezpace, nested, klass_name, name, ...)                                                                                                           \
    {                                                                                                                                                             \
        auto klass = std::string_view(#nested).empty() ? il2cpp::get_class(#namezpace, #klass_name) : il2cpp::get_nested_class(#namezpace, #nested, #klass_name); \
        if (!il2cpp::is_assignable(this_ptr, klass))                                                                                                              \
            return name(this_ptr, __VA_ARGS__);                                                                                                                   \
    }\
