#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old_HPerfTestResultComparer {
    IL2CPP_REGISTER_METHOD(0x0149F480, void, __ctor, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, bool ascending, app::GameObject * root));
    IL2CPP_REGISTER_METHOD(0x0149F490, int32_t, Compare, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, app::HPerfTestResult * x, app::HPerfTestResult * y));
    IL2CPP_REGISTER_METHOD(0x0149F4F0, bool, IsParentOf, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, app::Transform * target, app::Transform * potential_parent));
}
