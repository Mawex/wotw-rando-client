using namespace app;

namespace app::methods::CCText {
IL2CPP_REGISTER_METHOD(0x0315D530, uint16_t, get_Item, (CCText * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00654950, CCText_AlignmentMode__Enum, get_Alignment, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D560, void, set_Alignment, (CCText * __this, CCText_AlignmentMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00998570, CCText_BoundingMode__Enum, get_Bounding, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D570, void, set_Bounding, (CCText * __this, CCText_BoundingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, CCText_HorizontalAnchorMode__Enum, get_HorizontalAnchor, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D580, void, set_HorizontalAnchor, (CCText * __this, CCText_HorizontalAnchorMode__Enum value));
IL2CPP_REGISTER_METHOD(0x003FC830, CCText_VerticalAnchorMode__Enum, get_VerticalAnchor, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D590, void, set_VerticalAnchor, (CCText * __this, CCText_VerticalAnchorMode__Enum value));
IL2CPP_REGISTER_METHOD(0x0315D5A0, Vector3, get_CaretMinBounds, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D6C0, Vector3, get_CaretMaxBounds, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_ChunkSize, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D7E0, void, set_ChunkSize, (CCText * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00643F40, Color, get_Color, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D810, void, set_Color, (CCText * __this, Color value));
IL2CPP_REGISTER_METHOD(0x002FBB60, CCFont *, get_Font, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D870, void, set_Font, (CCText * __this, CCFont * value));
IL2CPP_REGISTER_METHOD(0x0315D980, int32_t, get_Length, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_LineCount, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x01050D20, float, get_LineHeight, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D9A0, void, set_LineHeight, (CCText * __this, float value));
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LineWidth, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, CCTextModifier *, get_Modifier, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315D9D0, void, set_Modifier, (CCText * __this, CCTextModifier * value));
IL2CPP_REGISTER_METHOD(0x010790F0, Vector3, get_Offset, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DAA0, void, set_Offset, (CCText * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_SpriteCount, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_UsedSpriteCount, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_Text, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DC30, void, set_Text, (CCText * __this, String * value));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TabSize, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DCE0, void, set_TabSize, (CCText * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Width, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DD10, void, set_Width, (CCText * __this, float value));
IL2CPP_REGISTER_METHOD(0x0315DD40, void, Awake, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DF90, void, Start, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315DFB0, void, OnDestroy, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315E0F0, int32_t, TriangleToCharacterIndex, (CCText * __this, int32_t triangleIndex));
IL2CPP_REGISTER_METHOD(0x0315E190, int32_t, HitCharacterIndex, (CCText * __this, RaycastHit hit));
IL2CPP_REGISTER_METHOD(0x0315E2E0, void, ResetColors, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315E450, void, UpdateText, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315EF50, void, UpdateFromString, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315F5E0, void, UpdateSprite, (CCText * __this, CCFont_Char * c, int32_t index, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0315F8A0, void, AlignCharsCenterOrRight, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315FB20, void, JustifyChars, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x0315FC00, void, JustifyLine, (CCText * __this, int32_t first, int32_t last));
IL2CPP_REGISTER_METHOD(0x0315FDA0, void, HideSprites, (CCText * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0315FFE0, void, AddSpritesFromString, (CCText * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x03160070, void, AddSprites, (CCText * __this, int32_t newSpriteCount));
IL2CPP_REGISTER_METHOD(0x031608E0, bool, WordWrapFromString, (CCText * __this, int32_t textIndex, int32_t vertexIndex, Vector3 * caret));
IL2CPP_REGISTER_METHOD(0x03160BE0, void, __ctor, (CCText * __this));
IL2CPP_REGISTER_METHOD(0x03160CA0, void, __cctor, (MethodInfo * method));
}
