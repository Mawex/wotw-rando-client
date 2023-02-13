#pragma once

#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

#include <functional>

namespace core::api::uber_states {
    class CORE_DLLEXPORT UberState {
    public:
        UberState();
        UberState(int group, int state);
        UberState(UberStateGroup group, int state);
        UberState(UberStateGroup group, app::AbilityType__Enum state);

        UberState(app::IUberState* state); // NOLINT
        UberState(app::SerializedBooleanUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedByteUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedIntUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedFloatUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}

        [[nodiscard]] bool valid() const;

        void set(double value, bool ignore_intercept = false, bool ignore_notify = false) const;

        template <typename T = double>
        T get() const { return static_cast<T>(inner_get()); }
        template <>
        [[nodiscard]] bool get() const { return inner_get() > 0.5; }

        template <typename T>
        void set(T value, bool ignore_intercept = false, bool ignore_notify = false) const {
            set(static_cast<double>(value), ignore_intercept, ignore_notify);
        }

        [[nodiscard]] UberStateGroup group() const { return m_group; }
        [[nodiscard]] int state() const { return m_state; }

        [[nodiscard]] std::string group_name() const;
        [[nodiscard]] std::string state_name() const;

        template <typename T>
        T* ptr() const { return reinterpret_cast<T*>(ptr()); }

        void apply() const;
        [[nodiscard]] app::IUberState* ptr() const;

        [[nodiscard]] std::string string_value() const;

    private:
        [[nodiscard]] double inner_get() const;

        UberStateGroup m_group;
        int m_state;
    };

    CORE_DLLEXPORT bool operator==(UberState const& a, UberState const& b);
} // namespace core::api::uber_states

template <>
struct std::hash<core::api::uber_states::UberState> {
    std::size_t operator()(const core::api::uber_states::UberState& s) const {
        return hash<UberStateGroup>()(s.group()) ^ (hash<int>()(s.state()) << 1);
    }
};
