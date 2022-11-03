#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightDirectionMapCompressor {
        namespace {
            inline app::LightDirectionMapCompressor__Class* type_info_ref = nullptr;
        }
        inline app::LightDirectionMapCompressor__Class** type_info = &type_info_ref;
        inline app::LightDirectionMapCompressor__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapCompressor__Class>(type_info, "UberShader", "LightDirectionMapCompressor");
        }
        inline app::LightDirectionMapCompressor* create() {
            return il2cpp::create_object<app::LightDirectionMapCompressor>(get_class());
        }
    } // namespace LightDirectionMapCompressor
} // namespace app::classes::types
