#include <interception_macros.h>

namespace app::methods::WriteOutTextBox {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00592F30, void, Awake, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00592FE0, void, Start, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593030, void, OnTextChange, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x005930D0, void, OnDestroy, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593180, void, SampleValue, (WriteOutTextBox * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x005931F0, void, SetValue, (WriteOutTextBox * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593220, float, get_Duration, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593280, float, AppearTime, (WriteOutTextBox * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x005932E0, void, RestoreToOriginalState, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593310, bool, get_AtEnd, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593360, void, GoToStart, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x005933A0, void, GoToEnd, (WriteOutTextBox * __this));
IL2CPP_REGISTER_METHOD(0x00593410, void, __ctor, (WriteOutTextBox * __this));
}
