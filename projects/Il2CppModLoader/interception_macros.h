#pragma once

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception.h>

#define IL2CPP_REGISTER_METHOD(address, return_type, name, params) \
    inline return_type(*name) params = nullptr;                     \
    namespace binding {                                            \
        inline modloader::intercept::binding name##_binding(address, reinterpret_cast<void**>(&name), #name); \
    }

// We may use this later.
#define IL2CPP_REGISTER_METHODINFO(address, name)

#define IL2CPP_INTERCEPT(method_namespace, return_type, method_name, params)                                                                         \
    static_assert(std::is_same<decltype(app::methods::method_namespace::method_name), return_type(*) params>::value, "incorrect function type");     \
                                                                                                                                                     \
    namespace method_namespace::next {                                                                                                               \
        return_type(*(method_name)) params = nullptr;                                                                                                  \
    }                                                                                                                                                \
    \
    namespace method_namespace::intercept {                                                                                                          \
        return_type method_name params;                                                                                                              \
        modloader::intercept::intercept method_name##_intercept(reinterpret_cast<void**>(&app::methods::method_namespace::method_name), reinterpret_cast<void**>(&method_namespace::next::method_name), method_namespace::intercept::method_name, #method_name); \
    }                                                                                                                                                \
    \
    return_type method_namespace::intercept::method_name params

#define GUARD(namezpace, nested, klass_name, name, ...)                                                                                                           \
    {                                                                                                                                                             \
        auto klass = std::string_view(#nested).empty() ? il2cpp::get_class(#namezpace, #klass_name) : il2cpp::get_nested_class(#namezpace, #nested, #klass_name); \
        if (!il2cpp::is_assignable(this_ptr, klass))                                                                                                              \
            return name(this_ptr, __VA_ARGS__);                                                                                                                   \
    }\
