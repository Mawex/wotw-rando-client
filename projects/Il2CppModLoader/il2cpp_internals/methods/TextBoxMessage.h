using namespace app;

namespace app::methods::TextBoxMessage {
IL2CPP_REGISTER_METHOD(0x010E4770, bool, get_OnButtonPressed, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E4830, bool, get_Active, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E4830, bool, get_IsInactive, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsSuspended, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x009AD920, void, set_IsSuspended, (TextBoxMessage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00855600, SuspendableMask__Enum, get_Mask, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E4870, void, set_Mask, (TextBoxMessage * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x010E4930, void, add_OnCompleteEvent, (TextBoxMessage * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x010E4A20, void, remove_OnCompleteEvent, (TextBoxMessage * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x010E4B10, void, AddLine, (TextBoxMessage * __this, String * text));
IL2CPP_REGISTER_METHOD(0x010E4BB0, void, Awake, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E5500, void, OnDestroy, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E55A0, void, Initialize, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E5890, void, EnterInactive, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x047167F0, TextBoxMessage_EnterInactive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E5970, Byte__Array *, StringToByteArray, (String * hex));
IL2CPP_REGISTER_METHOD(0x010E5DC0, void, OnEnterWriting, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x0471FE70, TextBoxMessage_OnEnterWriting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E6500, void, PlayOriSpeech, (TextBoxMessage * __this, int32_t textLength));
IL2CPP_REGISTER_METHOD(0x010E6650, void, StopOriSpeech, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E6880, void, OnEnterComplete, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x04727940, TextBoxMessage_OnEnterComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E69C0, void, OnExitComplete, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x04790790, TextBoxMessage_OnExitComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitWriting, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x04759588, TextBoxMessage_OnExitWriting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E6B00, void, UpdateWriting, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x04743110, TextBoxMessage_UpdateWriting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E6DA0, void, UpdateCompleted, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CF40, TextBoxMessage_UpdateCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E6EA0, void, StopWriting, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E7050, void, ReadNextLine, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E7120, void, FixedUpdate, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E7200, void, StartWriting, (TextBoxMessage * __this));
IL2CPP_REGISTER_METHOD(0x010E7380, void, __ctor, (TextBoxMessage * __this));
}
