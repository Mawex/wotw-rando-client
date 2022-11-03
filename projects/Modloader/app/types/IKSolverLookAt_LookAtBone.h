#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverLookAt_LookAtBone {
        inline app::IKSolverLookAt_LookAtBone__Class** type_info = (app::IKSolverLookAt_LookAtBone__Class**)(modloader::win::memory::resolve_rva(0x0478F150));
        inline app::IKSolverLookAt_LookAtBone__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverLookAt_LookAtBone__Class>(type_info, "RootMotion.FinalIK", "IKSolverLookAt", "LookAtBone");
        }
        inline app::IKSolverLookAt_LookAtBone* create() {
            return il2cpp::create_object<app::IKSolverLookAt_LookAtBone>(get_class());
        }
        inline app::IKSolverLookAt_LookAtBone__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolverLookAt_LookAtBone__Array>(get_class(), size);
        }
        inline app::IKSolverLookAt_LookAtBone__Array* create_array(const std::vector<app::IKSolverLookAt_LookAtBone*>& items) {
            return il2cpp::array_new<app::IKSolverLookAt_LookAtBone__Array>(get_class(), items);
        }
    } // namespace IKSolverLookAt_LookAtBone
} // namespace app::classes::types
