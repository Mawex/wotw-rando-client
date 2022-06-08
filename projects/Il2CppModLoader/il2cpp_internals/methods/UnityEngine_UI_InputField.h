using namespace app;

namespace app::methods::UnityEngine::UI::InputField {
IL2CPP_REGISTER_METHOD(0x024C0BE0, void, __ctor, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C10C0, BaseInput *, get_input, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1240, String *, get_compositionString, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1370, Mesh *, get_mesh, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1510, TextGenerator *, get_cachedInputTextGenerator, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1680, void, set_shouldHideMobileInput, (InputField * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024C1750, bool, get_shouldHideMobileInput, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C17C0, bool, get_shouldActivateOnSelect, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1810, String *, get_text, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1820, void, set_text, (InputField * __this, String * value));
IL2CPP_REGISTER_METHOD(0x024C1C40, bool, get_isFocused, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1C50, float, get_caretBlinkRate, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1C60, void, set_caretBlinkRate, (InputField * __this, float value));
IL2CPP_REGISTER_METHOD(0x024C1D40, int32_t, get_caretWidth, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1D50, void, set_caretWidth, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F36B20, Text *, get_textComponent, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C1E20, void, set_textComponent, (InputField * __this, Text * value));
IL2CPP_REGISTER_METHOD(0x01F36B40, Graphic *, get_placeholder, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2520, void, set_placeholder, (InputField * __this, Graphic * value));
IL2CPP_REGISTER_METHOD(0x024C25E0, Color, get_caretColor, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2640, void, set_caretColor, (InputField * __this, Color value));
IL2CPP_REGISTER_METHOD(0x024C26D0, bool, get_customCaretColor, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C26E0, void, set_customCaretColor, (InputField * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024C2700, Color, get_selectionColor, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2710, void, set_selectionColor, (InputField * __this, Color value));
IL2CPP_REGISTER_METHOD(0x01F36BF0, InputField_SubmitEvent *, get_onEndEdit, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C27A0, void, set_onEndEdit, (InputField * __this, InputField_SubmitEvent * value));
IL2CPP_REGISTER_METHOD(0x024C2860, InputField_OnChangeEvent *, get_onValueChange, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2870, void, set_onValueChange, (InputField * __this, InputField_OnChangeEvent * value));
IL2CPP_REGISTER_METHOD(0x024C2860, InputField_OnChangeEvent *, get_onValueChanged, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2870, void, set_onValueChanged, (InputField * __this, InputField_OnChangeEvent * value));
IL2CPP_REGISTER_METHOD(0x024C2930, InputField_OnValidateInput *, get_onValidateInput, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2940, void, set_onValidateInput, (InputField * __this, InputField_OnValidateInput * value));
IL2CPP_REGISTER_METHOD(0x024C2A00, int32_t, get_characterLimit, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2A10, void, set_characterLimit, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C2B10, InputField_ContentType__Enum, get_contentType, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2B20, void, set_contentType, (InputField * __this, InputField_ContentType__Enum value));
IL2CPP_REGISTER_METHOD(0x01F36C00, InputField_LineType__Enum, get_lineType, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2D10, void, set_lineType, (InputField * __this, InputField_LineType__Enum value));
IL2CPP_REGISTER_METHOD(0x024C2E40, InputField_InputType__Enum, get_inputType, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2E50, void, set_inputType, (InputField * __this, InputField_InputType__Enum value));
IL2CPP_REGISTER_METHOD(0x01F2BCB0, TouchScreenKeyboard *, get_touchScreenKeyboard, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2F00, TouchScreenKeyboardType__Enum, get_keyboardType, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2F10, void, set_keyboardType, (InputField * __this, TouchScreenKeyboardType__Enum value));
IL2CPP_REGISTER_METHOD(0x024C2FC0, InputField_CharacterValidation__Enum, get_characterValidation, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C2FD0, void, set_characterValidation, (InputField * __this, InputField_CharacterValidation__Enum value));
IL2CPP_REGISTER_METHOD(0x024C3080, bool, get_readOnly, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x01173710, void, set_readOnly, (InputField * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024C3090, bool, get_multiLine, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C30B0, uint16_t, get_asteriskChar, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C30C0, void, set_asteriskChar, (InputField * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x024C31A0, bool, get_wasCanceled, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C31B0, void, ClampPos, (InputField * __this, int32_t * pos));
IL2CPP_REGISTER_METHOD(0x024C3200, int32_t, get_caretPositionInternal, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3230, void, set_caretPositionInternal, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_caretSelectPositionInternal, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C32B0, void, set_caretSelectPositionInternal, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C3300, bool, get_hasSelection, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_caretPosition, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3370, void, set_caretPosition, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C3200, int32_t, get_selectionAnchorPosition, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3450, void, set_selectionAnchorPosition, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_selectionFocusPosition, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C34D0, void, set_selectionFocusPosition, (InputField * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024C3550, void, OnEnable, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3A30, void, OnDisable, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C3F20, IEnumerator *, CaretBlink, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C4070, void, SetCaretVisible, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C40F0, void, SetCaretActive, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C4290, void, UpdateCaretMaterial, (InputField * __this));
IL2CPP_REGISTER_METHODINFO(0x047698F8, InputField_UpdateCaretMaterial__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024C4440, void, OnFocus, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C4450, void, SelectAll, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C44E0, void, MoveTextEnd, (InputField * __this, bool shift));
IL2CPP_REGISTER_METHOD(0x024C4600, void, MoveTextStart, (InputField * __this, bool shift));
IL2CPP_REGISTER_METHOD(0x024C46F0, String *, get_clipboard, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x024C4740, void, set_clipboard, (String * value));
IL2CPP_REGISTER_METHOD(0x01F1B650, bool, InPlaceEditing, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C4790, void, UpdateCaretFromKeyboard, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C4910, void, LateUpdate, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C49B0, Vector2, ScreenToLocal, (InputField * __this, Vector2 screen));
IL2CPP_REGISTER_METHOD(0x024C4EF0, int32_t, GetUnclampedCharacterLineFromPosition, (InputField * __this, Vector2 pos, TextGenerator * generator));
IL2CPP_REGISTER_METHOD(0x024C5140, int32_t, GetCharacterIndexFromPosition, (InputField * __this, Vector2 pos));
IL2CPP_REGISTER_METHOD(0x024C5450, bool, MayDrag, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C5570, void, OnBeginDrag, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C55A0, void, OnDrag, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C5950, IEnumerator *, MouseDragOutsideRect, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C5AB0, void, OnEndDrag, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C5AE0, void, OnPointerDown, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C5D00, InputField_EditState__Enum, KeyPressed, (InputField * __this, Event * evt));
IL2CPP_REGISTER_METHOD(0x024C6550, bool, IsValidChar, (InputField * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x024C65B0, void, ProcessEvent, (InputField * __this, Event * e));
IL2CPP_REGISTER_METHOD(0x024C65C0, void, OnUpdateSelected, (InputField * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024C6810, String *, GetSelectedString, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C6970, int32_t, FindtNextWordBegin, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C6B00, void, MoveRight, (InputField * __this, bool shift, bool ctrl));
IL2CPP_REGISTER_METHOD(0x024C6DF0, int32_t, FindtPrevWordBegin, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C6F40, void, MoveLeft, (InputField * __this, bool shift, bool ctrl));
IL2CPP_REGISTER_METHOD(0x024C7340, int32_t, DetermineCharacterLine, (InputField * __this, int32_t charPos, TextGenerator * generator));
IL2CPP_REGISTER_METHOD(0x024C7530, int32_t, LineUpCharacterPosition, (InputField * __this, int32_t originalPos, bool goToFirstChar));
IL2CPP_REGISTER_METHOD(0x024C77B0, int32_t, LineDownCharacterPosition, (InputField * __this, int32_t originalPos, bool goToLastChar));
IL2CPP_REGISTER_METHOD(0x024C7AC0, void, MoveDown, (InputField * __this, bool shift));
IL2CPP_REGISTER_METHOD(0x024C7AD0, void, MoveDown, (InputField * __this, bool shift, bool goToLastChar));
IL2CPP_REGISTER_METHOD(0x024C7DF0, void, MoveUp, (InputField * __this, bool shift));
IL2CPP_REGISTER_METHOD(0x024C7E00, void, MoveUp, (InputField * __this, bool shift, bool goToFirstChar));
IL2CPP_REGISTER_METHOD(0x024C8100, void, Delete, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C8420, void, ForwardSpace, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C8520, void, Backspace, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C8650, void, Insert, (InputField * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x024C87B0, void, SendOnValueChangedAndUpdateLabel, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C87D0, void, SendOnValueChanged, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C88C0, void, SendOnSubmit, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C89B0, void, Append, (InputField * __this, String * input));
IL2CPP_REGISTER_METHOD(0x024C8A50, void, Append, (InputField * __this, uint16_t input));
IL2CPP_REGISTER_METHOD(0x024C8C20, void, UpdateLabel, (InputField * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F6D0, InputField_UpdateLabel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024C9110, bool, IsSelectionVisible, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C9200, int32_t, GetLineStartPosition, (TextGenerator * gen, int32_t line));
IL2CPP_REGISTER_METHOD(0x024C9390, int32_t, GetLineEndPosition, (TextGenerator * gen, int32_t line));
IL2CPP_REGISTER_METHOD(0x024C9560, void, SetDrawRangeToContainCaretPosition, (InputField * __this, int32_t caretPos));
IL2CPP_REGISTER_METHOD(0x024C9D40, void, ForceLabelUpdate, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C9D50, void, MarkGeometryAsDirty, (InputField * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A4D0, InputField_MarkGeometryAsDirty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024C9DF0, void, Rebuild, (InputField * __this, CanvasUpdate__Enum update));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024C9E00, void, UpdateGeometry, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CA390, void, AssignPositioningIfNeeded, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CAF50, void, OnFillVBO, (InputField * __this, Mesh * vbo));
IL2CPP_REGISTER_METHOD(0x024CB1E0, void, GenerateCaret, (InputField * __this, VertexHelper * vbo, Vector2 roundingOffset));
IL2CPP_REGISTER_METHOD(0x024CBEB0, void, CreateCursorVerts, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CC090, void, GenerateHightlight, (InputField * __this, VertexHelper * vbo, Vector2 roundingOffset));
IL2CPP_REGISTER_METHOD(0x024CC960, uint16_t, Validate, (InputField * __this, String * text, int32_t pos, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x0472C338, InputField_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024CD0B0, void, ActivateInputField, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CD200, void, ActivateInputFieldInternal, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CD410, void, OnSelect, (InputField * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024CD4D0, void, OnPointerClick, (InputField * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024CD500, void, DeactivateInputField, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CD790, void, OnDeselect, (InputField * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024CD810, void, OnSubmit, (InputField * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x024CD860, void, EnforceContentType, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CD9D0, void, EnforceTextHOverflow, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CDAE0, void, SetToCustomIfContentTypeIsNot, (InputField * __this, InputField_ContentType__Enum__Array * allowedContentTypes));
IL2CPP_REGISTER_METHOD(0x024CDB50, void, SetToCustom, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CDB70, void, DoStateTransition, (InputField * __this, Selectable_SelectionState__Enum state, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minWidth, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CDBA0, float, get_preferredWidth, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleWidth, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minHeight, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CDDA0, float, get_preferredHeight, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleHeight, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CE020, int32_t, get_layoutPriority, (InputField * __this));
IL2CPP_REGISTER_METHOD(0x024CE030, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, ICanvasElement_get_transform, (InputField * __this));
}
