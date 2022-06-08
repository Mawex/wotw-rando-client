using namespace app;

namespace app::methods::InteractiveMessageBox {
IL2CPP_REGISTER_METHOD(0x0063BC90, void, Awake, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063BD50, void, OnDestroy, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063BDF0, bool, get_OnButtonPressed, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063BF40, void, FinishWriting, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063C150, void, UpdateWriting, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063C330, void, EndMessageBox, (InteractiveMessageBox * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHOD(0x0063C5B0, void, Complete, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063C780, bool, get_FinishedWriting, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063C790, void, UpdateComplete, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063CA70, void, Start, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063CBB0, void, ChangeState, (InteractiveMessageBox * __this, InteractiveMessageBox_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0063CD30, void, FixedUpdate, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063CDC0, void, StartMessageSound, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063D000, void, StopMessageSound, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, (InteractiveMessageBox * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0063D090, SuspendableMask__Enum, get_Mask, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x0063D0A0, void, set_Mask, (InteractiveMessageBox * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0063D160, void, __ctor, (InteractiveMessageBox * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
