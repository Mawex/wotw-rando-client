#include <interception_macros.h>

namespace app::methods::AkPlaylistArray {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkPlaylistArray * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x0188B410, void *, getCPtr, (app::AkPlaylistArray * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkPlaylistArray * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x0188B4A0, void, Finalize, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188B520, void, Dispose, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188B730, void, __ctor_2, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188B850, AkIterator *, Begin, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188BA50, AkIterator *, End, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188BC50, AkIterator *, FindEx, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem * in__item));
IL2CPP_REGISTER_METHOD(0x0188BE60, AkIterator *, Erase_1, (app::AkPlaylistArray * this_ptr, app::AkIterator * in_r_iter));
IL2CPP_REGISTER_METHOD(0x0188C070, void, Erase_2, (app::AkPlaylistArray * this_ptr, uint32_t in_u_index));
IL2CPP_REGISTER_METHOD(0x0188C1A0, AkIterator *, EraseSwap, (app::AkPlaylistArray * this_ptr, app::AkIterator * in_r_iter));
IL2CPP_REGISTER_METHOD(0x0188C3B0, AKRESULT__Enum, Reserve, (app::AkPlaylistArray * this_ptr, uint32_t in_ul_reserve));
IL2CPP_REGISTER_METHOD(0x0188C4E0, uint32_t, Reserved, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188C600, void, Term, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188C720, uint32_t, Length, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188C840, AkPlaylistItem *, Data, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188CA50, bool, IsEmpty, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188CB80, AkPlaylistItem *, Exists, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem * in__item));
IL2CPP_REGISTER_METHOD(0x0188CDB0, AkPlaylistItem *, AddLast_1, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188CFC0, AkPlaylistItem *, AddLast_2, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem * in_r_item));
IL2CPP_REGISTER_METHOD(0x0188D1F0, AkPlaylistItem *, Last, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188D3F0, void, RemoveLast, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188D510, AKRESULT__Enum, Remove, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem * in_r_item));
IL2CPP_REGISTER_METHOD(0x0188D650, AKRESULT__Enum, RemoveSwap, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem * in_r_item));
IL2CPP_REGISTER_METHOD(0x0188D790, void, RemoveAll, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188D8B0, AkPlaylistItem *, ItemAtIndex, (app::AkPlaylistArray * this_ptr, uint32_t ui_index));
IL2CPP_REGISTER_METHOD(0x0188DAB0, AkPlaylistItem *, Insert, (app::AkPlaylistArray * this_ptr, uint32_t in_u_index));
IL2CPP_REGISTER_METHOD(0x0188DCD0, bool, GrowArray_1, (app::AkPlaylistArray * this_ptr, uint32_t in_u_grow_by));
IL2CPP_REGISTER_METHOD(0x0188DE00, bool, GrowArray_2, (app::AkPlaylistArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x0188DF30, bool, Resize, (app::AkPlaylistArray * this_ptr, uint32_t in_ui_size));
IL2CPP_REGISTER_METHOD(0x0188E060, void, Transfer, (app::AkPlaylistArray * this_ptr, app::AkPlaylistArray * in_r_source));
IL2CPP_REGISTER_METHOD(0x0188E1F0, AKRESULT__Enum, Copy, (app::AkPlaylistArray * this_ptr, app::AkPlaylistArray * in_r_source));
}
