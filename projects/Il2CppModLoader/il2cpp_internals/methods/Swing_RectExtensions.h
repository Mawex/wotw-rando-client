using namespace app;

namespace app::methods::Swing::RectExtensions {
IL2CPP_REGISTER_METHOD(0x0182EF30, Rect, scale, (Rect _this, float _scale));
IL2CPP_REGISTER_METHOD(0x0182EF80, Rect, scale, (Rect _this, float _scaleX, float _scaleY));
IL2CPP_REGISTER_METHOD(0x0182EFC0, Rect, scale, (Rect _this, Vector2 _scale));
IL2CPP_REGISTER_METHOD(0x0182F020, Rect, inflate, (Rect _this, float _factor));
IL2CPP_REGISTER_METHOD(0x0182F080, Rect, translate, (Rect _this, Vector2 _offset));
IL2CPP_REGISTER_METHOD(0x0182F0C0, Rect, encapsulate, (Rect _this, Rect _rect));
IL2CPP_REGISTER_METHOD(0x0182F160, Rect, encapsulate, (Rect _this, Vector2 _point));
IL2CPP_REGISTER_METHOD(0x0182F1F0, Vector2, xMinYMin, (Rect _this));
IL2CPP_REGISTER_METHOD(0x0182F210, Vector2, xMinYMax, (Rect _this));
IL2CPP_REGISTER_METHOD(0x0182F230, Vector2, xMaxYMax, (Rect _this));
IL2CPP_REGISTER_METHOD(0x0182F250, Vector2, xMaxYMin, (Rect _this));
IL2CPP_REGISTER_METHOD(0x0182E070, Rect, fromPosSize, (Vector2 _pos, Vector2 _size));
IL2CPP_REGISTER_METHOD(0x0182F270, Rect, fromCenterSize, (Vector2 _center, Vector2 _size));
IL2CPP_REGISTER_METHOD(0x0182E1A0, Rect, fromMinMax, (Vector2 _min, Vector2 _max));
IL2CPP_REGISTER_METHOD(0x0182F360, Rect, fromToRect, (Vector2 _from, Vector2 _to));
IL2CPP_REGISTER_METHOD(0x0182F400, void, splitLeft, (Rect _this, float _leftWidth, Rect * _left, Rect * _right, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F490, void, splitRight, (Rect _this, float _rightWidth, Rect * _left, Rect * _right, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F520, void, splitTop, (Rect _this, float _topHeight, Rect * _top, Rect * _bottom, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F5C0, void, splitBottom, (Rect _this, float _bottomHeight, Rect * _top, Rect * _bottom, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F670, void, splitLeft, (Rect _this, float _leftWidth, RectExt * _left, RectExt * _right, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F700, void, splitRight, (Rect _this, float _rightWidth, RectExt * _left, RectExt * _right, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F790, void, splitTop, (Rect _this, float _topHeight, RectExt * _top, RectExt * _bottom, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F830, void, splitBottom, (Rect _this, float _bottomHeight, RectExt * _top, RectExt * _bottom, float _spacing));
IL2CPP_REGISTER_METHOD(0x0182F8E0, Rect, inverseY, (Rect _this));
IL2CPP_REGISTER_METHOD(0x0182F910, Rect, inverseY, (Rect _this, float _containerHeight));
IL2CPP_REGISTER_METHOD(0x0182F930, Rect, inverseY, (Rect _this, Rect _container));
IL2CPP_REGISTER_METHOD(0x0182F960, Rect, inverseYMax, (Rect _this, float _containerHeight));
IL2CPP_REGISTER_METHOD(0x0182F990, Rect, inverseYMax, (Rect _this, Rect _container));
}
