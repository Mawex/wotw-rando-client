#include <interception_macros.h>

namespace app::methods::UnityEngine::TextGenerator {
IL2CPP_REGISTER_METHOD(0x0319B620, void, __ctor, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319B630, void, __ctor, (TextGenerator * __this, int32_t initialCapacity));
IL2CPP_REGISTER_METHOD(0x0319BB90, void, Finalize, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319BC70, void, IDisposable_Dispose, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319BD40, int32_t, get_characterCountVisible, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319BDA0, TextGenerationSettings, ValidatedSettings, (TextGenerator * __this, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0109C540, void, Invalidate, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319C110, void, GetCharacters, (TextGenerator * __this, List_1_UnityEngine_UICharInfo_ * characters));
IL2CPP_REGISTER_METHOD(0x0319C170, void, GetLines, (TextGenerator * __this, List_1_UnityEngine_UILineInfo_ * lines));
IL2CPP_REGISTER_METHOD(0x0319C1D0, void, GetVertices, (TextGenerator * __this, List_1_UnityEngine_UIVertex_ * vertices));
IL2CPP_REGISTER_METHOD(0x0319C230, float, GetPreferredWidth, (TextGenerator * __this, String * str, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0319C300, float, GetPreferredHeight, (TextGenerator * __this, String * str, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0319C3C0, bool, PopulateWithErrors, (TextGenerator * __this, String * str, TextGenerationSettings settings, GameObject * context));
IL2CPP_REGISTER_METHOD(0x0319C620, bool, Populate, (TextGenerator * __this, String * str, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0319C680, TextGenerationError__Enum, PopulateWithError, (TextGenerator * __this, String * str, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0319C9C0, TextGenerationError__Enum, PopulateAlways, (TextGenerator * __this, String * str, TextGenerationSettings settings));
IL2CPP_REGISTER_METHOD(0x0319CC90, IList_1_UnityEngine_UIVertex_ *, get_verts, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CD10, IList_1_UnityEngine_UICharInfo_ *, get_characters, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CD90, IList_1_UnityEngine_UILineInfo_ *, get_lines, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CE10, Rect, get_rectExtents, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CE90, int32_t, get_characterCount, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CEE0, int32_t, get_lineCount, (TextGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0319CF30, void *, Internal_Create, ());
IL2CPP_REGISTER_METHOD(0x0319CF80, void, Internal_Destroy, (void * ptr));
IL2CPP_REGISTER_METHOD(0x0319CFD0, bool, Populate_Internal, (TextGenerator * __this, String * str, Font * font, Color color, int32_t fontSize, float scaleFactor, float lineSpacing, FontStyle__Enum style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, TextAnchor__Enum anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t * error));
IL2CPP_REGISTER_METHOD(0x0319D170, bool, Populate_Internal, (TextGenerator * __this, String * str, Font * font, Color color, int32_t fontSize, float scaleFactor, float lineSpacing, FontStyle__Enum style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, VerticalWrapMode__Enum verticalOverFlow, HorizontalWrapMode__Enum horizontalOverflow, bool updateBounds, TextAnchor__Enum anchor, Vector2 extents, Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, TextGenerationError__Enum * error));
IL2CPP_REGISTER_METHOD(0x0319C1D0, void, GetVerticesInternal, (TextGenerator * __this, Object * vertices));
IL2CPP_REGISTER_METHOD(0x0319C110, void, GetCharactersInternal, (TextGenerator * __this, Object * characters));
IL2CPP_REGISTER_METHOD(0x0319C170, void, GetLinesInternal, (TextGenerator * __this, Object * lines));
IL2CPP_REGISTER_METHOD(0x0319D3E0, void, get_rectExtents_Injected, (TextGenerator * __this, Rect * ret));
IL2CPP_REGISTER_METHOD(0x0319D440, bool, Populate_Internal_Injected, (TextGenerator * __this, String * str, Font * font, Color * color, int32_t fontSize, float scaleFactor, float lineSpacing, FontStyle__Enum style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, TextAnchor__Enum anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t * error));
}
