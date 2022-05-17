#include <macros.h>

#include <optional>
#include <string>
#include <vector>

namespace scenes
{
    using creation_callback = void(*)(int id, app::GameObject* obj, app::GameObject* scene_root);

    void add_item(int id, std::string_view target_name, app::Vector3 position, std::optional<app::Vector3> rotation,
                  std::optional<app::Vector3> scale, std::string_view scene, std::vector<std::string> path);
    void add_creation_callback(int id, creation_callback callback);
}
