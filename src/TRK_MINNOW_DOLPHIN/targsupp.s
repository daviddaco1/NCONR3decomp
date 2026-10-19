.include "macros.inc"
.file "targsupp.s"

# 0x801A34BC..0x801A34DC | size: 0x20
.text
.balign 4

# .text:0x0 | 0x801A34BC | size: 0x8
.fn fn_801A34BC, global
/* 801A34BC 0018F91C  0F E0 00 00 */	twui r0, 0x0
/* 801A34C0 0018F920  4E 80 00 20 */	blr
.endfn fn_801A34BC

# .text:0x8 | 0x801A34C4 | size: 0x8
.fn fn_801A34C4, global
/* 801A34C4 0018F924  0F E0 00 00 */	twui r0, 0x0
/* 801A34C8 0018F928  4E 80 00 20 */	blr
.endfn fn_801A34C4

# .text:0x10 | 0x801A34CC | size: 0x8
.fn fn_801A34CC, global
/* 801A34CC 0018F92C  0F E0 00 00 */	twui r0, 0x0
/* 801A34D0 0018F930  4E 80 00 20 */	blr
.endfn fn_801A34CC

# .text:0x18 | 0x801A34D4 | size: 0x8
.fn fn_801A34D4, global
/* 801A34D4 0018F934  0F E0 00 00 */	twui r0, 0x0
/* 801A34D8 0018F938  4E 80 00 20 */	blr
.endfn fn_801A34D4
