#include <interception_macros.h>

namespace app::methods::BubbleModifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (BubbleModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x008040D0, void, SetProperties, (BubbleModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ImplementsAlphaMasking, (BubbleModifier * __this));
IL2CPP_REGISTER_METHOD(0x008041C0, void, __ctor, (BubbleModifier * __this));
}
