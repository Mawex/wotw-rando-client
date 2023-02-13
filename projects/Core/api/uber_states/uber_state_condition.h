#pragma once

#include <Common/ext.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

#include <functional>
#include <span>

namespace core::api::uber_states {
    struct CORE_DLLEXPORT UberStateCondition {
    public:
        UberState state;
        BooleanOperator op;
        double value;

        [[nodiscard]] bool resolve() const;
        [[nodiscard]] bool resolve(double state_value) const;
        [[nodiscard]] bool resolve(UberState compared_state, double state_value) const;
    };

    CORE_DLLEXPORT bool operator==(UberStateCondition const& a, UberStateCondition const& b);
    CORE_DLLEXPORT bool operator<(UberStateCondition const& a, UberStateCondition const& b);

    CORE_DLLEXPORT bool parse_condition(std::string_view str, core::api::uber_states::UberStateCondition& condition);
    CORE_DLLEXPORT bool parse_condition(std::vector<std::string> const& parts, core::api::uber_states::UberStateCondition& condition);
    CORE_DLLEXPORT bool parse_condition(std::span<std::string const> parts, core::api::uber_states::UberStateCondition& condition);
} // namespace core::api::uber_states

template <>
struct std::hash<core::api::uber_states::UberStateCondition> {
    std::size_t operator()(const core::api::uber_states::UberStateCondition& s) const {
        return hash<core::api::uber_states::UberState>()(s.state) ^ (hash<double>()(s.value) << 1) ^ (hash<int>()(static_cast<int>(s.op)) << 2);
    }
};
