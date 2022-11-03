#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tProgramChange {
        inline app::AkMIDIEvent_tProgramChange__Class** type_info = (app::AkMIDIEvent_tProgramChange__Class**)(modloader::win::memory::resolve_rva(0x0473C4B0));
        inline app::AkMIDIEvent_tProgramChange__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tProgramChange__Class>(type_info, "", "AkMIDIEvent", "tProgramChange");
        }
        inline app::AkMIDIEvent_tProgramChange* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tProgramChange>(get_class());
        }
    } // namespace AkMIDIEvent_tProgramChange
} // namespace app::classes::types
