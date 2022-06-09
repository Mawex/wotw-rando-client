#include <interception_macros.h>

namespace app::methods::TriangleNet::Configuration {
IL2CPP_REGISTER_METHOD(0x02619D80, void, __ctor_1, (app::Configuration_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0261A0B0, void, __ctor_2, (app::Configuration_1 * this_ptr, app::Func_1_TriangleNet_IPredicates_ * predicates));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor_3, (app::Configuration_1 * this_ptr, app::Func_1_TriangleNet_IPredicates_ * predicates, app::Func_1_TriangleNet_TrianglePool_ * triangle_pool));
IL2CPP_REGISTER_METHOD(0x002FA280, Func_1_TriangleNet_IPredicates_ *, get_Predicates, (app::Configuration_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Predicates, (app::Configuration_1 * this_ptr, app::Func_1_TriangleNet_IPredicates_ * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Func_1_TriangleNet_TrianglePool_ *, get_TrianglePool, (app::Configuration_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TrianglePool, (app::Configuration_1 * this_ptr, app::Func_1_TriangleNet_TrianglePool_ * value));
}
