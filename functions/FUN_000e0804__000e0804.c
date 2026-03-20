/*
 * Program: n42.bin
 * Function: FUN_000e0804
 * Entry: 000e0804
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e0804(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (~_DAT_003fa684 == _DAT_003fa680) {
    if (_DAT_003fa680 == 0) {
      _DAT_003fa680 = 0xc2;
      _DAT_003fa684 = 0xffffff3d;
      _DAT_003fa688 = 1;
      uVar2 = 0;
      uVar1 = (uint)fcmEnd;
      if (uVar1 != 0) {
        do {
          if (*(char *)((uint)(byte)(&CLAAAA)[(byte)(&UNK_003fcf4c)[uVar2 * 0x28]] * 0xd + 0x1d44b5)
              == '\x01') {
            (&UNK_003fde63)[(uint)(byte)(&UNK_003fcf4c)[uVar2 * 0x28] * 2] =
                 (&UNK_003fde63)[(uint)(byte)(&UNK_003fcf4c)[uVar2 * 0x28] * 2] & 0x7f | 0x80;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while ((uVar2 < uVar1) && (uVar2 < 0xb));
      }
      FUN_000ad804();
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

