#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>
#include <string_view>

namespace core::ipc {
    using request_handler = void (*)(const nlohmann::json& j);

    CORE_DLLEXPORT void send_message(const nlohmann::json& message);
    // TODO: Change this to an EventBus
    CORE_DLLEXPORT void register_request_handler(std::string_view name, request_handler handler);
    CORE_DLLEXPORT nlohmann::json respond_to(const nlohmann::json& request);
    CORE_DLLEXPORT nlohmann::json make_request(std::string method);
} // namespace core::ipc
