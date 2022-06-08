#include <interception_macros.h>

namespace app::methods::Moon::SuspensionManager {
IL2CPP_REGISTER_METHOD(0x031AC220, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x031AC430, Dictionary_2_Moon_ISuspendable_System_Int32_ *, get_Suspensables, ());
IL2CPP_REGISTER_METHOD(0x031AC4D0, void, Register, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC690, void, Unregister, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC780, void, UnregisterWithoutResuming, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AC870, void, AddSuspension, (SuspendableMask__Enum mask, int32_t * tickedID));
IL2CPP_REGISTER_METHOD(0x031ACA90, void, RemoveSuspension, (int32_t * ticketID));
IL2CPP_REGISTER_METHOD(0x031ACCB0, void, OnSuspensionTicketsModified, ());
IL2CPP_REGISTER_METHOD(0x031ACD90, void, UpdateAllSuspendableStates, ());
IL2CPP_REGISTER_METHOD(0x031ACF10, void, RefreshSuspendableState, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AD0B0, void, SupendableMaskChanged, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AD150, void, UpdateCurrentSuspensionMask, ());
IL2CPP_REGISTER_METHOD(0x031AD2F0, bool, FindOrAddToSuspended, (ISuspendable * suspendable, int32_t * count));
IL2CPP_REGISTER_METHOD(0x031AD4C0, void, SuspendAll, ());
IL2CPP_REGISTER_METHOD(0x031AD640, void, GetSuspendables, (HashSet_1_Moon_ISuspendable_ * suspendables, GameObject * go));
IL2CPP_REGISTER_METHOD(0x031AD7A0, HashSet_1_Moon_ISuspendable_ *, GetSuspendables, (HashSet_1_Moon_ISuspendable_ * suspendables, GameObject__Array * gos));
IL2CPP_REGISTER_METHOD(0x031AD990, HashSet_1_Moon_ISuspendable_ *, GetSuspendables, (HashSet_1_Moon_ISuspendable_ * suspendables, bool includeInactive, GameObject * go));
IL2CPP_REGISTER_METHOD(0x031ADC20, void, Suspend, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031ADF40, void, Resume, (ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AE270, void, Suspend, (List_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE360, void, Suspend, (HashSet_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE470, void, Suspend, (IEnumerable_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AE5F0, void, CleanupSuspendables, ());
IL2CPP_REGISTER_METHOD(0x031AE930, void, ResumeAll, ());
IL2CPP_REGISTER_METHOD(0x031AEA70, void, ResumeExcluding, (HashSet_1_Moon_ISuspendable_ * exclude));
IL2CPP_REGISTER_METHOD(0x031AEBE0, void, SuspendExcluding, (HashSet_1_Moon_ISuspendable_ * exclude));
IL2CPP_REGISTER_METHOD(0x031AED50, void, Resume, (HashSet_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AEE60, void, Resume, (List_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AEF50, void, Resume, (IEnumerable_1_Moon_ISuspendable_ * suspendables));
IL2CPP_REGISTER_METHOD(0x031AF0D0, void, __cctor, ());
}
