#pragma once

#include <Randomizer/seed/items/item.h>

#include <functional>

namespace randomizer::seed::items {
    class Call final : public BaseItem {
    public:
        std::function<void()> func;

        void grant() final;
    };
} // namespace randomizer::seed::items
