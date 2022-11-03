#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::ExecuteEvents {
    IL2CPP_REGISTER_METHOD(0x01F1E570, void, Execute_1, (app::IPointerEnterHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x047724D8, ExecuteEvents_Execute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1E640, void, Execute_2, (app::IPointerExitHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x047877B0, ExecuteEvents_Execute_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1E710, void, Execute_3, (app::IPointerDownHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04701660, ExecuteEvents_Execute_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1E7E0, void, Execute_4, (app::IPointerUpHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0477C878, ExecuteEvents_Execute_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1E8B0, void, Execute_5, (app::IPointerClickHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0470F718, ExecuteEvents_Execute_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1E980, void, Execute_6, (app::IInitializePotentialDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0471EBF0, ExecuteEvents_Execute_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EA50, void, Execute_7, (app::IBeginDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04723C40, ExecuteEvents_Execute_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EB20, void, Execute_8, (app::IDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0473DCD8, ExecuteEvents_Execute_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EBF0, void, Execute_9, (app::IEndDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04714D08, ExecuteEvents_Execute_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1ECC0, void, Execute_10, (app::IDropHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04754480, ExecuteEvents_Execute_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1ED90, void, Execute_11, (app::IScrollHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0471F268, ExecuteEvents_Execute_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EE60, void, Execute_12, (app::IUpdateSelectedHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04762128, ExecuteEvents_Execute_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EF00, void, Execute_13, (app::ISelectHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04773DE0, ExecuteEvents_Execute_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1EFA0, void, Execute_14, (app::IDeselectHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x04783808, ExecuteEvents_Execute_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1F040, void, Execute_15, (app::IMoveHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x047157F8, ExecuteEvents_Execute_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1F170, void, Execute_16, (app::ISubmitHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0471C618, ExecuteEvents_Execute_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1F210, void, Execute_17, (app::ICancelHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHODINFO(0x0471EA40, ExecuteEvents_Execute_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F1F2B0, app::ExecuteEvents_EventFunction_1_IPointerEnterHandler_*, get_pointerEnterHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F350, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_*, get_pointerExitHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F3F0, app::ExecuteEvents_EventFunction_1_IPointerDownHandler_*, get_pointerDownHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F490, app::ExecuteEvents_EventFunction_1_IPointerUpHandler_*, get_pointerUpHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F530, app::ExecuteEvents_EventFunction_1_IPointerClickHandler_*, get_pointerClickHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F5D0, app::ExecuteEvents_EventFunction_1_IInitializePotentialDragHandler_*, get_initializePotentialDrag, ())
    IL2CPP_REGISTER_METHOD(0x01F1F670, app::ExecuteEvents_EventFunction_1_IBeginDragHandler_*, get_beginDragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F710, app::ExecuteEvents_EventFunction_1_IDragHandler_*, get_dragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F7B0, app::ExecuteEvents_EventFunction_1_IEndDragHandler_*, get_endDragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F850, app::ExecuteEvents_EventFunction_1_IDropHandler_*, get_dropHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F8F0, app::ExecuteEvents_EventFunction_1_IScrollHandler_*, get_scrollHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F990, app::ExecuteEvents_EventFunction_1_IUpdateSelectedHandler_*, get_updateSelectedHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FA30, app::ExecuteEvents_EventFunction_1_ISelectHandler_*, get_selectHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FAD0, app::ExecuteEvents_EventFunction_1_IDeselectHandler_*, get_deselectHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FB70, app::ExecuteEvents_EventFunction_1_IMoveHandler_*, get_moveHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FC10, app::ExecuteEvents_EventFunction_1_ISubmitHandler_*, get_submitHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FCB0, app::ExecuteEvents_EventFunction_1_ICancelHandler_*, get_cancelHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FD50, void, GetEventChain, (app::GameObject * root, app::IList_1_UnityEngine_Transform_* event_chain))
    IL2CPP_REGISTER_METHOD(0x01F1FF90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01F21510, void, _s_HandlerListPool_m__0, (app::List_1_UnityEngine_EventSystems_IEventSystemHandler_ * l))
    IL2CPP_REGISTER_METHODINFO(0x047948A8, ExecuteEvents__s_HandlerListPool_m__0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157C770, app::Object*, ValidateEventData_1, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHODINFO(0x04756090, ExecuteEvents_ValidateEventData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_18, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_System_Object_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_1, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_System_Object_* callback_function))
    IL2CPP_REGISTER_METHOD(0x0156A9B0, bool, ShouldSendToComponent, (app::Component_1 * component))
    IL2CPP_REGISTER_METHOD(0x015E45C0, void, GetEventList, (app::GameObject * go, app::IList_1_UnityEngine_EventSystems_IEventSystemHandler_* results))
    IL2CPP_REGISTER_METHODINFO(0x0474B720, ExecuteEvents_GetEventList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A460, bool, CanHandleEvent, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_1, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_19, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04786C78, ExecuteEvents_Execute_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_20, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerEnterHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04759160, ExecuteEvents_Execute_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_21, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDeselectHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04752448, ExecuteEvents_Execute_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_22, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ISelectHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x0476DEB0, ExecuteEvents_Execute_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157C770, app::PointerEventData*, ValidateEventData_2, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHODINFO(0x04724468, ExecuteEvents_ValidateEventData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157C770, app::AxisEventData*, ValidateEventData_3, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHODINFO(0x0475DDC8, ExecuteEvents_ValidateEventData_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_23, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IBeginDragHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04749BE0, ExecuteEvents_Execute_22__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_24, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerUpHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x0471A558, ExecuteEvents_Execute_23__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_25, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDragHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04741098, ExecuteEvents_Execute_24__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_2, (app::GameObject * root))
    IL2CPP_REGISTER_METHODINFO(0x04790010, ExecuteEvents_GetEventHandler_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_26, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IEndDragHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04779CD8, ExecuteEvents_Execute_25__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_2, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerDownHandler_* callback_function))
    IL2CPP_REGISTER_METHODINFO(0x0473DC38, ExecuteEvents_ExecuteHierarchy_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_3, (app::GameObject * root))
    IL2CPP_REGISTER_METHODINFO(0x04740280, ExecuteEvents_GetEventHandler_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_4, (app::GameObject * root))
    IL2CPP_REGISTER_METHODINFO(0x04714FB8, ExecuteEvents_GetEventHandler_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_27, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IInitializePotentialDragHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04777790, ExecuteEvents_Execute_26__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_28, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerClickHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x0474F5B0, ExecuteEvents_Execute_27__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_3, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDropHandler_* callback_function))
    IL2CPP_REGISTER_METHODINFO(0x0472E208, ExecuteEvents_ExecuteHierarchy_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_4, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_* callback_function))
    IL2CPP_REGISTER_METHODINFO(0x04787B18, ExecuteEvents_ExecuteHierarchy_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_29, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ISubmitHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x0472BA68, ExecuteEvents_Execute_28__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_30, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ICancelHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x04737B68, ExecuteEvents_Execute_29__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_31, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IMoveHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x047663F8, ExecuteEvents_Execute_30__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_5, (app::GameObject * root))
    IL2CPP_REGISTER_METHODINFO(0x04748720, ExecuteEvents_GetEventHandler_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_5, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IScrollHandler_* callback_function))
    IL2CPP_REGISTER_METHODINFO(0x04716688, ExecuteEvents_ExecuteHierarchy_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_32, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IUpdateSelectedHandler_* functor))
    IL2CPP_REGISTER_METHODINFO(0x0478E1E0, ExecuteEvents_Execute_31__MethodInfo)
} // namespace app::classes::UnityEngine::EventSystems::ExecuteEvents
