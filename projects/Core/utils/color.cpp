#include <utils/color.h>

namespace utils {
    app::Color hex_string_to_color(std::string_view str) {
        if (str.starts_with("0x"))
            str.remove_prefix(2);

        char* out = nullptr;
        auto color_channels = std::strtoul(str.data(), &out, 16);
        return app::Color{
            (color_channels & 0xff) / 256.0f,
            ((color_channels >> 8) & 0xff) / 256.0f,
            ((color_channels >> 16) & 0xff) / 256.0f,
            ((color_channels >> 24) & 0xff) / 256.0f
        };
    }
} // namespace utils
