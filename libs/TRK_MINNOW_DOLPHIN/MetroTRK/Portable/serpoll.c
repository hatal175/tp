//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/serpoll
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/serpoll.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

u8 TRKTerminateSerialHandler();
void TRKInitializeSerialHandler();
void TRKProcessInput();
void TRKGetInput();
void TRKTestForPacket();
extern u8 gTRKInputPendingPtr[4 + 4 /* padding */];

//
// External References:
//

void TRKConstructEvent();
void TRKPostEvent();
void TRKAppendBuffer_ui8();
void TRKSetBufferPosition();
void TRKReleaseBuffer();
void TRKGetBuffer();
void TRKGetFreeBuffer();
void TRKReadUARTN();
void TRKPollUART();
void MWTRACE();

//
// Declarations:
//

/* 8036D858-8036D860 368198 0008+00 0/0 1/1 0/0 .text            TRKTerminateSerialHandler */
u8 TRKTerminateSerialHandler() {
    return 0;
}

/* ############################################################################################## */
/* 803A2700-803A2724 02ED60 0022+02 2/2 0/0 0/0 .rodata          @121 */
SECTION_RODATA static char const lit_121[] = "TRK_Packet_Header \t    %ld bytes\n";
COMPILER_STRIP_GATE(0x803A2700, &lit_121);

/* 803A2724-803A2748 02ED84 0022+02 0/1 0/0 0/0 .rodata          @122 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_122[] = "TRK_CMD_ReadMemory     %ld bytes\n";
COMPILER_STRIP_GATE(0x803A2724, &lit_122);
#pragma pop

/* 803A2748-803A276C 02EDA8 0022+02 0/1 0/0 0/0 .rodata          @123 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_123[] = "TRK_CMD_WriteMemory    %ld bytes\n";
COMPILER_STRIP_GATE(0x803A2748, &lit_123);
#pragma pop

/* 803A276C-803A278C 02EDCC 0020+00 0/1 0/0 0/0 .rodata          @124 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_124[] = "TRK_CMD_Connect \t    %ld bytes\n";
COMPILER_STRIP_GATE(0x803A276C, &lit_124);
#pragma pop

/* 803A278C-803A27AC 02EDEC 0020+00 0/1 0/0 0/0 .rodata          @125 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_125[] = "TRK_CMD_ReplyAck\t    %ld bytes\n";
COMPILER_STRIP_GATE(0x803A278C, &lit_125);
#pragma pop

/* 803A27AC-803A27D0 02EE0C 0021+03 0/1 0/0 0/0 .rodata          @126 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_126[] = "TRK_CMD_ReadRegisters\t%ld bytes\n";
COMPILER_STRIP_GATE(0x803A27AC, &lit_126);
#pragma pop

/* 8044F270-8044F288 07BF90 0014+04 3/3 0/0 0/0 .bss             gTRKFramingState */
static u8 gTRKFramingState[20 + 4 /* padding */];

/* 8036D860-8036D924 3681A0 00C4+00 0/0 1/1 0/0 .text            TRKInitializeSerialHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKInitializeSerialHandler() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/serpoll/TRKInitializeSerialHandler.s"
}
#pragma pop

/* 8036D924-8036D974 368264 0050+00 0/0 1/1 0/0 .text            TRKProcessInput */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKProcessInput() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/serpoll/TRKProcessInput.s"
}
#pragma pop

/* 8036D974-8036D9D4 3682B4 0060+00 0/0 1/1 0/0 .text            TRKGetInput */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKGetInput() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/serpoll/TRKGetInput.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A27D0-803A27F4 02EE30 0024+00 0/1 0/0 0/0 .rodata          @146 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_146[] = "TestForPacket : FreeBuffer is  %ld\n";
COMPILER_STRIP_GATE(0x803A27D0, &lit_146);
#pragma pop

/* 803A27F4-803A2810 02EE54 001B+01 0/1 0/0 0/0 .rodata          @147 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_147[] = "Reading payload %ld bytes\n";
COMPILER_STRIP_GATE(0x803A27F4, &lit_147);
#pragma pop

/* 803A2810-803A2844 02EE70 0031+03 0/1 0/0 0/0 .rodata          @148 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_148[] = "TestForPacket : Invalid size of packet hdr.size\n";
COMPILER_STRIP_GATE(0x803A2810, &lit_148);
#pragma pop

/* 803A2844-803A286C 02EEA4 0028+00 0/1 0/0 0/0 .rodata          @149 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_149[] = "TestForPacket : Invalid size of packet\n";
COMPILER_STRIP_GATE(0x803A2844, &lit_149);
#pragma pop

/* 803A286C-803A2890 02EECC 001D+07 0/1 0/0 0/0 .rodata          @150 */
#pragma push
#pragma force_active on
SECTION_RODATA static char const lit_150[] = "TestForPacket returning %ld\n";
COMPILER_STRIP_GATE(0x803A286C, &lit_150);
#pragma pop

/* 8036D9D4-8036DB10 368314 013C+00 1/1 1/1 0/0 .text            TRKTestForPacket */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTestForPacket() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/serpoll/TRKTestForPacket.s"
}
#pragma pop

/* ############################################################################################## */
/* 804519B8-804519C0 000EB8 0004+04 0/0 2/2 0/0 .sbss            gTRKInputPendingPtr */
extern u8 gTRKInputPendingPtr[4 + 4 /* padding */];
u8 gTRKInputPendingPtr[4 + 4 /* padding */];
