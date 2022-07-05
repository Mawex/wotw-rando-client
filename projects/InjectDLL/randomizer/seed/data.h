#pragma once

#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>
#include <map>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <variant>

namespace randomizer::seed::data {
    class ResolvableString {
    public:
        virtual std::string resolve() = 0;
    };


    class ResolvableNumberString : public ResolvableString {
    public:
        std::string resolve() override {
            return std::string(resolve_number());
        }

        virtual int resolve_number() = 0;
    };


    class StaticString : public ResolvableString {
    private:
        const std::string string;

    public:
        std::string resolve() override {
            return string;
        }

        StaticString(std::string string) :
                string(std::move(string)) {}
    };


    class ActionNameString : public ResolvableString {

    };


    class CompoundString : public ResolvableString {
    private:
        std::vector<std::unique_ptr<ResolvableString>> parts;

    public:
        std::string resolve() override {
            std::string result;

            for (const auto& part : parts) {
                result += part->resolve();
            }

            return result;
        }
    };


    /**
     * All Action Types with their respective IDs used in Seed files.
     */
    enum class ActionType : int {
        SpiritLight = 0,
        ShowMessage = 6,
        SetUberState = 8,
    };

    enum class Comparison {
        NONE,
        EQ,
        NEQ,
        GTE,
        LTE,
        GT,
        LT,
    };

    /**
     * Represents a uber state "location".
     * Actions at a location trigger when the value of the corresponding uber state
     * changes and the optional LocationCondition is met.
     */
    struct Location {
        int group;
        int state_id;

        bool operator<(const Location& other) const {
            return this->group == other.group
                    ? this->state_id < other.state_id
                    : this->group < other.group;
        }

        double get_value() const {
            return uber_states::UberState(group, state_id).get();
        }
    };

    enum class LocationConditionBehavior {
        /** Trigger once when the condition is met */
        TriggerOnce,
        /** Trigger on all uber state value changes that meed the condition */
        TriggerAlways,
    };

    /**
     * A condition that the location uber state value has to meet for an action
     * to trigger.
     */
    struct LocationCondition {
        Comparison comparison;
        double condition_value;
        LocationConditionBehavior behavior;

        LocationCondition() :
                comparison(Comparison::NONE), condition_value(0.0) {
            behavior = LocationConditionBehavior::TriggerAlways;
        };

        LocationCondition(Comparison comparison, double condition_value) :
                comparison(comparison),
                condition_value(condition_value){
                    behavior = comparison == Comparison::NONE
                        ? LocationConditionBehavior::TriggerAlways
                        : LocationConditionBehavior::TriggerOnce;
                };

        bool satisfied(const Location& location) const {
            if (comparison == Comparison::NONE) {
                return true;
            }

            auto location_value = location.get_value();

            switch (comparison) {
                case Comparison::EQ:
                    return location_value == condition_value;
                case Comparison::NEQ:
                    return location_value != condition_value;
                case Comparison::GTE:
                    return location_value >= condition_value;
                case Comparison::LTE:
                    return location_value <= condition_value;
                case Comparison::GT:
                    return location_value > condition_value;
                case Comparison::LT:
                    return location_value < condition_value;
            }

            throw std::exception("Comparison not implemented");
        }
    };

    class Action {

    };

    /**
     * Action to add/substract Spirit Light
     * @see ActionType::SpiritLight
     */
    class SpiritLightAction : public Action { // 0
    private:
        int amount;

    public:
        explicit SpiritLightAction(int amount) :
                amount(amount){};
    };

    /**
     * Action to show a message box.
     * @see ActionType::ShowMessage
     */
    class ShowMessageAction : public Action { // 6

    };

    /**
     * Action to set the value of an arbitrary uber state.
     * @see ActionType::SetUberState
     */
    class SetUberStateAction : public Action { // 8
    private:
        uber_states::UberState uber_state;
        double value;

    public:
        SetUberStateAction(const uber_states::UberState& uber_state, double value) :
                uber_state(uber_state), value(value){};

        SetUberStateAction(int group, int state, double value) :
                uber_state(uber_states::UberState(group, state)), value(value){};
    };

    class ActionWithCondition {
    public:
        /** The action to execute */
        std::unique_ptr<Action> action;

        /** An optional condition the location has to meet before the action is executed */
        std::optional<LocationCondition> condition;

        /** How often this action was executed */
        int trigger_count = 0;

        explicit ActionWithCondition(std::unique_ptr<Action>&& action) {
            this->action = std::move(action);
        };

        ActionWithCondition(std::unique_ptr<Action>&& action, std::optional<LocationCondition> condition) :
                ActionWithCondition(std::move(action)) {
            this->condition = condition;
        };

        ActionWithCondition(std::unique_ptr<Action>&& action, const LocationCondition& condition) :
                ActionWithCondition(std::move(action)) {
            this->condition = condition;
        };
    };

    struct SeedData {
        std::unordered_map<std::string, std::string> meta;
        std::multimap<Location, ActionWithCondition> triggers;
    };
} // namespace randomizer::seed::data