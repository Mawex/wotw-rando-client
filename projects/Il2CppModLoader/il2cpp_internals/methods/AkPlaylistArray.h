#include <interception_macros.h>

namespace app::methods::AkPlaylistArray {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkPlaylistArray * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x0188B410, void *, getCPtr, (AkPlaylistArray * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkPlaylistArray * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x0188B4A0, void, Finalize, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188B520, void, Dispose, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188B730, void, __ctor, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188B850, AkIterator *, Begin, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188BA50, AkIterator *, End, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188BC50, AkIterator *, FindEx, (AkPlaylistArray * __this, AkPlaylistItem * in_Item));
IL2CPP_REGISTER_METHOD(0x0188BE60, AkIterator *, Erase, (AkPlaylistArray * __this, AkIterator * in_rIter));
IL2CPP_REGISTER_METHOD(0x0188C070, void, Erase, (AkPlaylistArray * __this, uint32_t in_uIndex));
IL2CPP_REGISTER_METHOD(0x0188C1A0, AkIterator *, EraseSwap, (AkPlaylistArray * __this, AkIterator * in_rIter));
IL2CPP_REGISTER_METHOD(0x0188C3B0, AKRESULT__Enum, Reserve, (AkPlaylistArray * __this, uint32_t in_ulReserve));
IL2CPP_REGISTER_METHOD(0x0188C4E0, uint32_t, Reserved, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188C600, void, Term, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188C720, uint32_t, Length, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188C840, AkPlaylistItem *, Data, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188CA50, bool, IsEmpty, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188CB80, AkPlaylistItem *, Exists, (AkPlaylistArray * __this, AkPlaylistItem * in_Item));
IL2CPP_REGISTER_METHOD(0x0188CDB0, AkPlaylistItem *, AddLast, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188CFC0, AkPlaylistItem *, AddLast, (AkPlaylistArray * __this, AkPlaylistItem * in_rItem));
IL2CPP_REGISTER_METHOD(0x0188D1F0, AkPlaylistItem *, Last, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188D3F0, void, RemoveLast, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188D510, AKRESULT__Enum, Remove, (AkPlaylistArray * __this, AkPlaylistItem * in_rItem));
IL2CPP_REGISTER_METHOD(0x0188D650, AKRESULT__Enum, RemoveSwap, (AkPlaylistArray * __this, AkPlaylistItem * in_rItem));
IL2CPP_REGISTER_METHOD(0x0188D790, void, RemoveAll, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188D8B0, AkPlaylistItem *, ItemAtIndex, (AkPlaylistArray * __this, uint32_t uiIndex));
IL2CPP_REGISTER_METHOD(0x0188DAB0, AkPlaylistItem *, Insert, (AkPlaylistArray * __this, uint32_t in_uIndex));
IL2CPP_REGISTER_METHOD(0x0188DCD0, bool, GrowArray, (AkPlaylistArray * __this, uint32_t in_uGrowBy));
IL2CPP_REGISTER_METHOD(0x0188DE00, bool, GrowArray, (AkPlaylistArray * __this));
IL2CPP_REGISTER_METHOD(0x0188DF30, bool, Resize, (AkPlaylistArray * __this, uint32_t in_uiSize));
IL2CPP_REGISTER_METHOD(0x0188E060, void, Transfer, (AkPlaylistArray * __this, AkPlaylistArray * in_rSource));
IL2CPP_REGISTER_METHOD(0x0188E1F0, AKRESULT__Enum, Copy, (AkPlaylistArray * __this, AkPlaylistArray * in_rSource));
}
