#include "types.h"
#include "m2c_macros.h"

// Adaptado de GameSpy (doldecomp/mkw); se conservan sus auxiliares inline.
static void QuartToTrip(char* quart, char* trip, int inlen) {
  if (inlen >= 2)
    trip[0] = (char)(quart[0] << 2 | quart[1] >> 4);
  if (inlen >= 3)
    trip[1] = (char)((quart[1] & 0x0F) << 4 | quart[2] >> 2);
  if (inlen >= 4)
    trip[2] = (char)((quart[2] & 0x3) << 6 | quart[3]);
}

static void TripToQuart(const char* trip, char* quart, int inlen) {
  unsigned char triptemp[3];
  int i;
  for (i = 0; i < inlen; i++) {
    triptemp[i] = (unsigned char)trip[i];
  }
  while (i < 3) // fill the rest with 0
  {
    triptemp[i] = 0;
    i++;
  }
  quart[0] = (char)(triptemp[0] >> 2);
  quart[1] = (char)(((triptemp[0] & 3) << 4) | (triptemp[1] >> 4));
  quart[2] = (char)((triptemp[1] & 0x0F) << 2 | (triptemp[2] >> 6));
  quart[3] = (char)(triptemp[2] & 0x3F);
}
const char defaultEncoding[] = {'+', '/', '='};
const char alternateEncoding[] = {'[', ']', '_'};
const char urlSafeEncodeing[] = {'-', '_', '='};

s32 GSISocketSelect(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
void strlen(s32 arg0);

extern s32 (*lbl_80409F98)(s16, M2C_UNK *, M2C_UNK);
extern u32 lbl_8049C7E8;

s8 * fn_802557FC();
s32 fn_80255D78();
u32 fn_80255DF0();
s32 gsiInterlockedIncrement();
s32 gsiInterlockedDecrement();
s32 fn_80255EDC();
s32 fn_802560A8();
void gsiTimeInSec();
void fn_80256170();
s32 fn_8025622C();
s32 fn_80256360();
s32 fn_80256428();
s8 * fn_8025651C();
u8 * _strlwr();
void gsiInitializeCriticalSection();
void gsiEnterCriticalSection();
u32 current_time();
void msleep();
void Util_RandSeed();
s32 Util_RandInt();
void gsiMemoryCallbacksSet();
void fn_80256C90();
s32 fn_80256E0C();

s8 *fn_802557FC(s32 *arg0, M2C_UNK arg_sp0);

s32 fn_80255D78(s32 arg0, s32 arg1);

u32 fn_80255DF0(s32 arg0, s32 arg1);

s32 gsiInterlockedIncrement(s32 arg0) {
    s32 sp8;

    sp8 = 0;
    if (GSISocketSelect(arg0, (s32) &sp8, 0, 0) == 1) {
        return sp8;
    }
    return 0;
}

s32 gsiInterlockedDecrement(s32 arg0) {
    s32 sp8;

    sp8 = 0;
    if (GSISocketSelect(arg0, 0, (s32) &sp8, 0) == 1) {
        return sp8;
    }
    return 0;
}

s32 fn_80255EDC(void);

s32 fn_802560A8(s32 *arg0);

void gsiTimeInSec(s32 arg0);

void fn_80256170(s8 *arg0);

s32 fn_8025622C(s32 *arg0, s8 **arg1);

s32 fn_80256360(s32 arg0);

s32 fn_80256428(s32 arg0);

s8 *fn_8025651C(s32 *arg0);

u8 *_strlwr(s32 arg0);

void gsiInitializeCriticalSection(s32 arg0) {

}

void gsiEnterCriticalSection(s32 arg0) {

}

u32 current_time(void);

void msleep(s32 arg0);

void Util_RandSeed(s32 arg0) {
    u32 var_r0;

    var_r0 = 1;
    if (arg0 != 0) {
        var_r0 = arg0 & 0x7FFFFFFF;
    }
    lbl_8049C7E8 = var_r0;
}

s32 Util_RandInt(s32 arg0, s32 arg1);

void gsiMemoryCallbacksSet(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

/*
Decompilation failure in function gsimalloc:

Found bctr instruction at unk_802557FC.s line 1538, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function gsirealloc:

Found bctr instruction at unk_802557FC.s line 1547, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function gsifree:

Found bctr instruction at unk_802557FC.s line 1558, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_80256C90(s32 *arg0, s32 arg1);

s32 Util_RandInt(s32 arg0, s32 arg1);
u8 * _strlwr();
u32 current_time(void);
s8 * fn_802557FC();
s32 fn_80255D78(s32 arg0, s32 arg1);
u32 fn_80255DF0(s32 arg0, s32 arg1);
s32 fn_80255EDC();
s32 fn_802560A8(s32 *arg0);
void fn_80256170();
s32 fn_8025622C();
s32 fn_80256360();
s32 fn_80256428();
s8 * fn_8025651C();
void fn_80256C90();
s32 fn_80256E0C();
void gsiMemoryCallbacksSet(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void gsiTimeInSec(s32 arg0);
extern int gsifree();
extern int gsimalloc();
extern int gsirealloc();
void msleep(s32 arg0);

void B64Decode(const char* input, char* output, int inlen, int* outlen,
               int encodingType) {
  const char* encoding = NULL;
  const char* holdin = input;
  int readpos = 0;
  int writepos = 0;
  char block[4];

  // int outlen = -1;
  // int inlen = (int)strlen(input);

  // 10-31-2004 : Added by Saad Nader
  // now supports URL safe encoding
  ////////////////////////////////////////////////
  switch (encodingType) {
  case 1:
    encoding = alternateEncoding;
    break;
  case 2:
    encoding = urlSafeEncodeing;
    break;
  default:
    encoding = defaultEncoding;
  }

  if (inlen <= 0) {
    if (outlen)
      *outlen = 0;
    output[0] = '\0';
    return;
  }

  // Break at end of string or padding character
  while (readpos < inlen && input[readpos] != encoding[2]) {
    //    'A'-'Z' maps to 0-25
    //    'a'-'z' maps to 26-51
    //    '0'-'9' maps to 52-61
    //    62 maps to encoding[0]
    //    63 maps to encoding[1]
    if (input[readpos] >= '0' && input[readpos] <= '9')
      block[readpos % 4] = (char)(input[readpos] - 48 + 52);
    else if (input[readpos] >= 'a' && input[readpos] <= 'z')
      block[readpos % 4] = (char)(input[readpos] - 71);
    else if (input[readpos] >= 'A' && input[readpos] <= 'Z')
      block[readpos % 4] = (char)(input[readpos] - 65);
    else if (input[readpos] == encoding[0])
      block[readpos % 4] = 62;
    else if (input[readpos] == encoding[1])
      block[readpos % 4] = 63;

    // padding or '\0' characters also mark end of input
    else if (input[readpos] == encoding[2])
      break;
    else if (input[readpos] == '\0')
      break;
    else {
      //	(assert(0)); //bad input data
      if (outlen)
        *outlen = 0;
      output[0] = '\0';
      return; // invaid data
    }

    // every 4 bytes, convert QuartToTrip into destination
    if (readpos % 4 == 3) // zero based, so (3%4) means four bytes, 0-1-2-3
    {
      QuartToTrip(block, &output[writepos], 4);
      writepos += 3;
    }
    readpos++;
  }

  // Convert any leftover characters in block
  if ((readpos != 0) && (readpos % 4 != 0)) {
    // fill block with pad (required for QuartToTrip)
    memset((s32)&block[readpos % 4], encoding[2], (unsigned int)4 - (readpos % 4));
    QuartToTrip(block, &output[writepos], readpos % 4);

    // output bytes depend on the number of non-pad input bytes
    if (readpos % 4 == 3)
      writepos += 2;
    else
      writepos += 1;
  }

  if (outlen)
    *outlen = writepos;

  (void)holdin;
}

void B64Encode(const char* input, char* output, int inlen, int encodingType) {
  const char* encoding;
  char* holdout = output;
  char* lastchar;
  int todo = inlen;

  // 10-31-2004 : Added by Saad Nader
  // now supports URL safe encoding
  ////////////////////////////////////////////////
  switch (encodingType) {
  case 1:
    encoding = alternateEncoding;
    break;
  case 2:
    encoding = urlSafeEncodeing;
    break;
  default:
    encoding = defaultEncoding;
  }

  // assume interval of 3
  while (todo > 0) {
    TripToQuart(input, output, ((todo) < 3 ? (todo) : 3));
    output += 4;
    input += 3;
    todo -= 3;
  }
  lastchar = output;
  if (inlen % 3 == 1)
    lastchar -= 2;
  else if (inlen % 3 == 2)
    lastchar -= 1;
  *output = 0; // null terminate!
  while (output > holdout) {
    output--;
    if (output >= lastchar) // pad the end
      *output = encoding[2];
    else if (*output <= 25)
      *output = (char)(*output + 65);
    else if (*output <= 51)
      *output = (char)(*output + 71);
    else if (*output <= 61)
      *output = (char)(*output + 48 - 52);
    else if (*output == 62)
      *output = encoding[0];
    else if (*output == 63)
      *output = encoding[1];
  }
}
