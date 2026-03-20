/*
 * Program: n42.bin
 * Function: FUN_00135ca4
 * Entry: 00135ca4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00135ca4(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (~_DAT_003fa684 == _DAT_003fa680) {
    if (_DAT_003fa680 == 0) {
      _DAT_003fa680 = 0xc2;
      _DAT_003fa684 = 0xffffff3d;
      _DAT_003fa688 = 0;
      uVar1 = 1;
      do {
        (&UNK_003fde63)[uVar1 * 2] = (&UNK_003fde63)[uVar1 * 2] & 0x7f | 0x80;
        uVar1 = uVar1 + 1 & 0xff;
      } while (uVar1 < 0xc2);
      func_0xff21d804();
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

