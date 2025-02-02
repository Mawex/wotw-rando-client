#pragma once

#include <unordered_map>
#include <vector>

enum class EventTiming {
    Before,
    After,
};


template <typename T>
class TimedMultiEventBus {
public:
    using event_handler = void (*)(T, EventTiming);

    TimedMultiEventBus() = default;
    TimedMultiEventBus(TimedMultiEventBus const& other) = delete;

    void clear() {
        event_handlers.clear();
    }

    void register_handler(T value, event_handler handler) {
        auto& handlers = event_handlers[value];
        handlers.get(EventTiming::After).push_back(handler);
    }

    void register_handler(T value, EventTiming timing, event_handler handler) {
        auto& handlers = event_handlers[value];
        handlers.get(timing).push_back(handler);
    }

    void trigger_event(T value) {
        auto const& handlers = event_handlers[value];
        for (auto const& handler : handlers.get(EventTiming::After)) {
            handler(value, EventTiming::After);
        }
    }

    void trigger_event(T value, EventTiming timing) {
        auto const& handlers = event_handlers[value];
        for (auto const& handler : handlers.get(timing)) {
            handler(value, timing);
        }
    }

private:
    struct Handlers {
        std::vector<event_handler> start;
        std::vector<event_handler> end;

        std::vector<event_handler>& get(EventTiming timing) { return timing == EventTiming::Before ? start : end; }
        std::vector<event_handler> const& get(EventTiming timing) const { return timing == EventTiming::Before ? start : end; }
    };

    std::unordered_map<T, Handlers> event_handlers;
};

template <typename T>
class TimedEventBus {
public:
    using event_handler = void (*)(T, EventTiming);

    TimedEventBus() = default;
    TimedEventBus(TimedEventBus const& other) = delete;

    void clear() {
        event_handlers.clear();
    }

    void register_handler(event_handler handler) {
        event_handlers.get(EventTiming::After).push_back(handler);
    }

    void register_handler(EventTiming timing, event_handler handler) {
        event_handlers.get(timing).push_back(handler);
    }

    void trigger_event(T value) {
        for (auto const& handler : event_handlers.get(EventTiming::After)) {
            handler(value, EventTiming::After);
        }
    }

    void trigger_event(T value, EventTiming timing) {
        for (auto const& handler : event_handlers.get(timing)) {
            handler(value, timing);
        }
    }

private:
    struct Handlers {
        std::vector<event_handler> start;
        std::vector<event_handler> end;

        std::vector<event_handler>& get(EventTiming timing) { return timing == EventTiming::Before ? start : end; }
        std::vector<event_handler> const& get(EventTiming timing) const { return timing == EventTiming::Before ? start : end; }
    };

    Handlers event_handlers;
};

template <typename T>
class EventBus {
public:
    using event_handler = void (*)(T);

    EventBus() = default;
    EventBus(EventBus const& other) = delete;

    void clear() {
        event_handlers.clear();
    }

    void register_handler(event_handler handler) {
        event_handlers.push_back(handler);
    }

    void trigger_event(T value) {
        for (auto const& handler : event_handlers) {
            handler(value);
        }
    }

private:
    std::vector<event_handler> event_handlers;
};


template <typename T>
class CollectingEventBus {
public:
    using event_handler = T (*)();

    CollectingEventBus() = default;
    CollectingEventBus(CollectingEventBus const& other) = delete;

    void clear() {
        event_handlers.clear();
    }

    void register_handler(event_handler handler) {
        event_handlers.push_back(handler);
    }

    std::vector<T> trigger_event() {
        std::vector<T> return_values;
        for (auto const& handler : event_handlers) {
            return_values.push_back(handler());
        }
        return return_values;
    }

private:
    std::vector<event_handler> event_handlers;
};