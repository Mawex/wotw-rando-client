#pragma once

#include <string>
#include <vector>
#include <randomizer/render/textures.h>

namespace multiplayer
{
    enum PlayerIcon : int32_t {
        Moki,
        Kii
    };

    struct PlayerInfo
    {
        struct Icon
        {
            uint64_t handle = 0;
            app::Vector2 position = {0};
            int facing = 1;
            bool visible = true;
            app::GameObject* root = nullptr;
            app::GameObject* text = nullptr;
            app::GameObject* icon = nullptr;
        };

        std::wstring id;
        std::wstring name;
        int64_t name_handle = 0;
        bool online = true;
        bool world_visible = true;
        bool map_visible = true;
        app::Color color = { 1, 1, 1, 1 };
        PlayerIcon icon = PlayerIcon::Moki;

        // Internal
        Icon avatar;
        Icon map_avatar;
        float map_scale = 1;
        float last_facing_pos = 0.0f;
        float last_facing = 1.0f;

        // Dots
        struct Dot
        {
            app::GameObject* dot;
            app::Transform* transform;
            app::Renderer* renderer;
        };

        app::Vector2 previous_dot_position = {0};
        float time_until_next_dot = 0;
        int next_dot_index = 0;
        std::vector<Dot> dots;
    };

    app::Color const& get_local_player_color();
}

