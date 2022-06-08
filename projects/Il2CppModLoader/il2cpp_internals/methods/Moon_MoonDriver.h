#include <interception_macros.h>

namespace app::methods::Moon::MoonDriver {
IL2CPP_REGISTER_METHOD(0x0313ADF0, void, RuntimeInitializeOnLoad, ());
IL2CPP_REGISTER_METHOD(0x0313AE80, MoonDriver *, GetInstance, ());
IL2CPP_REGISTER_METHOD(0x0313B180, void, SetCustomExecutionOrderMap, (IMoonDriverExecutionOrderMap * map));
IL2CPP_REGISTER_METHOD(0x0313B230, void, Register, (IUpdateHandler * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B2E0, void, Register, (IUpdateHandlerWithExecutionOrderOffset * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B4D0, void, Register, (IExplicitUpdateHandlerBase * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B580, void, Unregister, (IUpdateHandler * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B630, void, Unregister, (IExplicitUpdateHandlerBase * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B6E0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetCustomExecutionOrderMapInternal, (MoonDriver * __this, IMoonDriverExecutionOrderMap * map));
IL2CPP_REGISTER_METHOD(0x0313B870, int32_t, GetExecutionOrderInMapInternal, (MoonDriver * __this, IUpdateHandlerBase * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313B9C0, void, RegisterInternal, (MoonDriver * __this, IUpdateHandler * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313BB10, void, RegisterInternal, (MoonDriver * __this, IUpdateHandlerWithExecutionOrderOffset * updateHandle));
IL2CPP_REGISTER_METHOD(0x0313BC70, void, RegisterInternal, (MoonDriver * __this, IExplicitUpdateHandlerBase * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313BE50, void, UnregisterInternal, (MoonDriver * __this, IUpdateHandler * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313BF80, void, UnregisterInternal, (MoonDriver * __this, IExplicitUpdateHandlerBase * updateHandler));
IL2CPP_REGISTER_METHOD(0x0313C110, void, OnDestroy, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313C1B0, void, Initialize, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313C330, UpdateManager *, CreateManager, (MoonDriver * __this, UpdateType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x0313C4F0, void, EnableProfiling, (MoonDriver * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x0313C530, void, DumpEntries, (MoonDriver * __this, StreamWriter * sw));
IL2CPP_REGISTER_METHOD(0x0313C650, void, GetEntryCounts, (MoonDriver * __this, int32_t * updateManagerCount, int32_t * fixedUpdateManagerCount, int32_t * lateUpdateManagerCount));
IL2CPP_REGISTER_METHOD(0x0313C6D0, void, Update, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313C740, void, LateUpdate, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313C7B0, void, FixedUpdate, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313C820, void, TimelineUpdate, (MoonDriver * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0313C890, void, __ctor, (MoonDriver * __this));
IL2CPP_REGISTER_METHOD(0x0313CA70, void, __cctor, ());
}
