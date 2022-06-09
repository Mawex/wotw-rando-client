#include <interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableExtensions {
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_1, (app::AnimationLayerMixerPlayable playable, int32_t input_index, float weight));
    IL2CPP_REGISTER_METHODINFO(0x047548D8, PlayableExtensions_SetInputWeight__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_1, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x0472E188, PlayableExtensions_GetInputCount__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6570, void, DisconnectInput_1, (app::AnimationLayerMixerPlayable playable, int32_t input_port));
    IL2CPP_REGISTER_METHODINFO(0x04722068, PlayableExtensions_DisconnectInput__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0156AD50, bool, IsValid_1, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x0474E8B0, PlayableExtensions_IsValid__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01539B30, int32_t, AddInput, (app::Playable playable, app::Playable source_playable, int32_t source_output_index, float weight));
    IL2CPP_REGISTER_METHODINFO(0x04787580, PlayableExtensions_AddInput__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF8050, app::Playable, GetInput_1, (app::Playable playable, int32_t input_port));
    IL2CPP_REGISTER_METHODINFO(0x04722808, PlayableExtensions_GetInput__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6570, void, DisconnectInput_2, (app::Playable playable, int32_t input_port));
    IL2CPP_REGISTER_METHODINFO(0x047604B8, PlayableExtensions_DisconnectInput_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6420, void, ConnectInput_1, (app::Playable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index));
    IL2CPP_REGISTER_METHODINFO(0x0471B190, PlayableExtensions_ConnectInput__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF8050, app::Playable, GetInput_2, (app::AnimationLayerMixerPlayable playable, int32_t input_port));
    IL2CPP_REGISTER_METHODINFO(0x0476F8E0, PlayableExtensions_GetInput_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6420, void, ConnectInput_2, (app::AnimationLayerMixerPlayable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index));
    IL2CPP_REGISTER_METHODINFO(0x0478FA28, PlayableExtensions_ConnectInput_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_2, (app::Playable playable, int32_t input_index, float weight));
    IL2CPP_REGISTER_METHODINFO(0x04723B28, PlayableExtensions_SetInputWeight_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_2, (app::Playable playable));
    IL2CPP_REGISTER_METHODINFO(0x04738A38, PlayableExtensions_GetInputCount_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_1, (app::Playable playable, int32_t input_index));
    IL2CPP_REGISTER_METHODINFO(0x04736BF8, PlayableExtensions_GetInputWeight__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0156AD50, bool, IsValid_2, (app::Playable playable));
    IL2CPP_REGISTER_METHODINFO(0x0471CA28, PlayableExtensions_IsValid_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0156AD30, bool, IsDone, (app::Playable playable));
    IL2CPP_REGISTER_METHODINFO(0x04731728, PlayableExtensions_IsDone__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_1, (app::AnimationMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04705428, PlayableExtensions_GetSpeed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_1, (app::AnimationMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x0476EC78, PlayableExtensions_SetSpeed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_1, (app::AnimationMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04722828, PlayableExtensions_GetDuration__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_1, (app::AnimationMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04757B80, PlayableExtensions_GetTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_1, (app::AnimationMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x04732230, PlayableExtensions_SetTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_2, (app::AnimationMixerPlayable playable, int32_t input_index));
    IL2CPP_REGISTER_METHODINFO(0x0471DC68, PlayableExtensions_GetInputWeight_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6420, void, ConnectInput_3, (app::AnimationMixerPlayable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index));
    IL2CPP_REGISTER_METHODINFO(0x04793B18, PlayableExtensions_ConnectInput_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_1, (app::AnimationMixerPlayable playable, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04789758, PlayableExtensions_SetDone__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_1, (app::AnimationMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x04758AD8, PlayableExtensions_SetDuration__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_3, (app::AnimationMixerPlayable playable, int32_t input_index, float weight));
    IL2CPP_REGISTER_METHODINFO(0x0475CF08, PlayableExtensions_SetInputWeight_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_2, (app::AnimationClipPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04748FD8, PlayableExtensions_GetSpeed_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_2, (app::AnimationClipPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x04716730, PlayableExtensions_SetSpeed_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_2, (app::AnimationClipPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04717548, PlayableExtensions_GetDuration_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_2, (app::AnimationClipPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04757110, PlayableExtensions_GetTime_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_2, (app::AnimationClipPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x0478C460, PlayableExtensions_SetTime_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_2, (app::AnimationClipPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x0470FAA8, PlayableExtensions_SetDuration_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_2, (app::AnimationClipPlayable playable, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04747088, PlayableExtensions_SetDone_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_3, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04773D48, PlayableExtensions_GetSpeed_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_3, (app::AnimationLayerMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x04731890, PlayableExtensions_SetSpeed_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_3, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x0477EC50, PlayableExtensions_GetDuration_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_3, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x0470FCB0, PlayableExtensions_GetTime_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_3, (app::AnimationLayerMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x04790140, PlayableExtensions_SetTime_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_3, (app::AnimationLayerMixerPlayable playable, int32_t input_index));
    IL2CPP_REGISTER_METHODINFO(0x047095D0, PlayableExtensions_GetInputWeight_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_3, (app::AnimationLayerMixerPlayable playable, bool value));
    IL2CPP_REGISTER_METHODINFO(0x0477E870, PlayableExtensions_SetDone_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_3, (app::AnimationLayerMixerPlayable playable, double value));
    IL2CPP_REGISTER_METHODINFO(0x0477F468, PlayableExtensions_SetDuration_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_3, (app::AnimationMixerPlayable playable));
    IL2CPP_REGISTER_METHODINFO(0x04752CD0, PlayableExtensions_GetInputCount_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E6470, void, ConnectInput_4, (app::AnimationLayerMixerPlayable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index, float weight));
    IL2CPP_REGISTER_METHOD(0x015E6470, void, ConnectInput_5, (app::AnimationMixerPlayable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index, float weight));
    IL2CPP_REGISTER_METHOD(0x015E6470, void, ConnectInput_6, (app::Playable playable, int32_t input_index, app::Playable source_playable, int32_t source_output_index, float weight));
    IL2CPP_REGISTER_METHOD(0x015E6650, void, SetInputCount, (app::Playable playable, int32_t value));
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_1, (app::AnimationLayerMixerPlayable playable));
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_2, (app::AnimationMixerPlayable playable));
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_3, (app::Playable playable));
}
