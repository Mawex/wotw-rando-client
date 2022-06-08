using namespace app;

namespace app::methods::UnityEngine::UI::CanvasScaler {
IL2CPP_REGISTER_METHOD(0x01F2C240, void, __ctor, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB70, CanvasScaler_ScaleMode__Enum, get_uiScaleMode, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_uiScaleMode, (CanvasScaler * __this, CanvasScaler_ScaleMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_referencePixelsPerUnit, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_referencePixelsPerUnit, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C2A0, float, get_scaleFactor, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C2B0, void, set_scaleFactor, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C360, Vector2, get_referenceResolution, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C380, void, set_referenceResolution, (CanvasScaler * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F2C4F0, CanvasScaler_ScreenMatchMode__Enum, get_screenMatchMode, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_screenMatchMode, (CanvasScaler * __this, CanvasScaler_ScreenMatchMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01F2C500, float, get_matchWidthOrHeight, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_matchWidthOrHeight, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F1C1C0, CanvasScaler_Unit__Enum, get_physicalUnit, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_physicalUnit, (CanvasScaler * __this, CanvasScaler_Unit__Enum value));
IL2CPP_REGISTER_METHOD(0x01F2C510, float, get_fallbackScreenDPI, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_fallbackScreenDPI, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x004FA790, float, get_defaultSpriteDPI, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C520, void, set_defaultSpriteDPI, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C5D0, float, get_dynamicPixelsPerUnit, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x0043C100, void, set_dynamicPixelsPerUnit, (CanvasScaler * __this, float value));
IL2CPP_REGISTER_METHOD(0x01F2C5E0, void, OnEnable, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C680, void, OnDisable, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01E113B0, void, Update, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C6C0, void, Handle, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C8B0, void, HandleWorldCanvas, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C8E0, void, HandleConstantPixelSize, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2C910, void, HandleScaleWithScreenSize, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2CCB0, void, HandleConstantPhysicalSize, (CanvasScaler * __this));
IL2CPP_REGISTER_METHOD(0x01F2CD90, void, SetScaleFactor, (CanvasScaler * __this, float scaleFactor));
IL2CPP_REGISTER_METHOD(0x01F2CE20, void, SetReferencePixelsPerUnit, (CanvasScaler * __this, float referencePixelsPerUnit));
}
