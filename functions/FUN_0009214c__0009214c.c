/*
 * Program: n42.bin
 * Function: FUN_0009214c
 * Entry: 0009214c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009214c(void)

{
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = _DAT_003f9f88;
  *_DAT_003f9f88 = *_DAT_003f9f88 & 0xfff0 | (ushort)_LAB_001c00c4;
  if (DAT_003f9f90 == '\n') {
    puVar1[2] = puVar1[2] & 0xf8ff | (ushort)_LAB_001c00c0;
  }
  uVar2 = FUN_000967c0(_LAB_001c0064);
  puVar1[4] = uVar2;
  puVar1 = _DAT_003f9f88;
  _DAT_003f9f88[5] = _DAT_003f9f88[5] & 0xff7f;
  _DAT_003f9f64 = &UNK_003f9f9e;
  _DAT_003f9f60 = &DAT_003f9f9f;
  puVar1[5] = puVar1[5] | 4;
  FUN_000966bc();
  if (DAT_003f9f90 == '\x14') {
    uVar2 = _DAT_003f9f88[5] & 0xffdf;
  }
  else {
    uVar2 = _DAT_003f9f88[5] | 0x20;
  }
  _DAT_003f9f88[5] = uVar2;
  return;
}

