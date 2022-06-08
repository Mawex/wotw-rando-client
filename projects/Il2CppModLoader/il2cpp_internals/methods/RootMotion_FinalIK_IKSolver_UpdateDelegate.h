#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolver_UpdateDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IKSolver_UpdateDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (IKSolver_UpdateDelegate * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (IKSolver_UpdateDelegate * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IKSolver_UpdateDelegate * __this, IAsyncResult * result));
}
