/*
 * Program: n42.bin
 * Function: FUN_000f82ac
 * Entry: 000f82ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f82ac(byte param_1,ushort param_2,ushort param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    param_3 = 0;
    param_2 = 0;
    if (DAT_003fc6db == '\0') {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (DAT_003fc6db == '\0') {
    iVar2 = 3;
  }
  else {
    iVar2 = 2;
  }
  param_4 = param_4 * 0xc;
  uVar1 = (uint)*(byte *)(_DAT_003fc674 + param_4 + 8) * 2;
  *(uint *)(*(int *)(_DAT_003fc674 + param_4) + 0x14) =
       *(uint *)(*(int *)(_DAT_003fc674 + param_4) + 0x14) & ~(3 << (uVar1 & 0x3f)) |
       iVar2 << (uVar1 & 0x3f);
  if (20000 < param_3) {
    param_3 = 20000;
  }
  if (param_3 < 100) {
    param_3 = 100;
  }
  uVar1 = (uint)_DAT_003fc6d8;
  iVar2 = *(int *)(_DAT_003fc674 + param_4 + 4);
  *(short *)(iVar2 + 6) = (short)(((uint)param_3 * 10000) / (uVar1 << 2));
  if (10000 < param_2) {
    param_2 = 10000;
  }
  if (param_2 < 100) {
    param_2 = 100;
  }
  *(short *)(iVar2 + 4) = (short)(((uint)param_2 * 10000) / (uVar1 << 2));
  *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) & 0xff00 | (ushort)param_1;
  return 1;
}

