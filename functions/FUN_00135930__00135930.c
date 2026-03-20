/*
 * Program: n42.bin
 * Function: FUN_00135930
 * Entry: 00135930
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00135930(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  byte *unaff_r26;
  int unaff_r27;
  uint unaff_r28;
  int unaff_r29;
  int unaff_r31;
  byte param_9;
  char cStack0000000c;
  byte bStack0000000d;
  byte bStack0000000e;
  byte param_10;
  char cStack00000034;
  byte bStack00000036;
  byte bStack00000038;
  char cStack00000039;
  
  for (uVar3 = param_1 + 1; uVar3 = uVar3 & 0xff, (int)uVar3 < unaff_r31; uVar3 = uVar3 + 1) {
    if (*(byte *)(unaff_r27 + uVar3 * 0x28) == unaff_r28) {
      bVar4 = 0;
      puVar2 = (undefined *)(unaff_r27 + uVar3 * 0x28 + -1);
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
        bVar4 = bVar4 + 1;
      } while (bVar4 < 0x28);
    }
  }
  if (cStack0000000c == (&CLAAAA)[unaff_r28]) {
    cStack00000034 =
         (char)((uint)*(undefined4 *)(&DAT_001d44b0 + (uint)(byte)(&CLAAAA)[unaff_r28] * 0xd) >>
               0x18);
    if (((bStack0000000d >> 3 & 1) == 1) && (cStack00000034 == '\0')) {
      func_0xff250900(unaff_r28);
    }
    else if (((bStack0000000d >> 4 & 1) == 1) && (cStack00000034 != '\x02')) {
      func_0xff250900(unaff_r28);
    }
    else if (((bStack0000000d >> 2 & 1) == 1) &&
            (cStack00000039 =
                  (char)((uint)*(undefined4 *)
                                (&DAT_001d44b4 + (uint)(byte)(&CLAAAA)[unaff_r28] * 0xd) >> 0x10),
            cStack00000039 == '\0')) {
      func_0xff250900(unaff_r28);
    }
    else if ((param_9 >> 1 & 1) == (*(byte *)(unaff_r29 + (unaff_r28 & 0xff) * 2 + 1) >> 1 & 1)) {
      bStack00000036 =
           (byte)((uint)*(undefined4 *)(&DAT_001d44b0 + (uint)(byte)(&CLAAAA)[unaff_r28] * 0xd) >> 8
                 );
      if (bStack00000036 < bStack0000000e) {
        func_0xff250900(unaff_r28);
      }
      else {
        bStack00000038 =
             (byte)((uint)*(undefined4 *)(&DAT_001d44b4 + (uint)(byte)(&CLAAAA)[unaff_r28] * 0xd) >>
                   0x18);
        if (bStack00000038 < param_10) {
          func_0xff250900(unaff_r28);
        }
      }
    }
    else {
      func_0xff250900(unaff_r28);
    }
  }
  else {
    func_0xff250900(unaff_r28);
  }
  DAT_003fd7fa = DAT_003fd7fa + 1;
  if ((10 < DAT_003fd7fa) || (DAT_003fd7fa < *unaff_r26)) {
    DAT_003fd7fa = *unaff_r26;
  }
  if (DAT_003fd7fa < 0xb) {
    bVar4 = 0;
    puVar2 = &UNK_003fcf4b + (uint)DAT_003fd7fa * 0x28;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x28);
  }
  if (DAT_003fa674 == '\0') {
    bVar1 = 0x13 < DAT_003fa677;
    DAT_003fa677 = DAT_003fa677 + 1;
    if (bVar1) {
      DAT_003fa674 = '\x01';
      DAT_003fa677 = '\0';
    }
  }
  else {
    DAT_003fa677 = '\0';
  }
  if (~_DAT_003fa684 == _DAT_003fa680) {
    if (DAT_003fa675 == _DAT_003fa680) {
      bVar1 = 0x13 < DAT_003fa678;
      DAT_003fa678 = DAT_003fa678 + 1;
      if (bVar1) {
        _DAT_003fa680 = 0;
        _DAT_003fa684 = 0xffffffff;
        DAT_003fa678 = '\0';
        DAT_003fa675 = 0;
      }
    }
    else {
      DAT_003fa675 = (byte)_DAT_003fa680;
      DAT_003fa678 = '\0';
    }
  }
  else {
    _DAT_003fa680 = 0;
    _DAT_003fa684 = 0xffffffff;
    DAT_003fa678 = '\0';
    DAT_003fa675 = 0;
  }
  DAT_003fd7f4 = 0xff;
  return;
}

