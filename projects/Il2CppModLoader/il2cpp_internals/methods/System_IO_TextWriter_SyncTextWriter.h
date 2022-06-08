using namespace app;

namespace app::methods::System::IO::TextWriter_SyncTextWriter {
IL2CPP_REGISTER_METHOD(0x023882C0, void, __ctor, (TextWriter_SyncTextWriter * __this, TextWriter * t));
IL2CPP_REGISTER_METHOD(0x01706DD0, Encoding *, get_Encoding, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01706D40, IFormatProvider *, get_FormatProvider, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01706E00, String *, get_NewLine, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01706D70, void, Close, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02388390, void, Dispose, (TextWriter_SyncTextWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01706DA0, void, Flush, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01706E30, void, Write, (TextWriter_SyncTextWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x0199EFC0, void, Write, (TextWriter_SyncTextWriter * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x02388430, void, Write, (TextWriter_SyncTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02388460, void, Write, (TextWriter_SyncTextWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02181070, void, Write, (TextWriter_SyncTextWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x02388490, void, Write, (TextWriter_SyncTextWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x023884C0, void, Write, (TextWriter_SyncTextWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x023884F0, void, Write, (TextWriter_SyncTextWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01BD2820, void, Write, (TextWriter_SyncTextWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x02388520, void, Write, (TextWriter_SyncTextWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x01706B90, void, Write, (TextWriter_SyncTextWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02388560, void, Write, (TextWriter_SyncTextWriter * __this, String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x02388590, void, Write, (TextWriter_SyncTextWriter * __this, String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x023885C0, void, Write, (TextWriter_SyncTextWriter * __this, String * format, Object__Array * arg));
IL2CPP_REGISTER_METHOD(0x023885F0, void, WriteLine, (TextWriter_SyncTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02388620, void, WriteLine, (TextWriter_SyncTextWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02388650, void, WriteLine, (TextWriter_SyncTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02388680, void, WriteLine, (TextWriter_SyncTextWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x023886B0, void, WriteLine, (TextWriter_SyncTextWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x023886E0, void, WriteLine, (TextWriter_SyncTextWriter * __this, String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x02388710, void, WriteLine, (TextWriter_SyncTextWriter * __this, String * format, Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x02388740, void, WriteLine, (TextWriter_SyncTextWriter * __this, String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x0201CA50, void, WriteLine, (TextWriter_SyncTextWriter * __this, String * format, Object__Array * arg));
}
