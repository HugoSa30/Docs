/*
 * Program: n42.bin
 * Function: FUN_00093248
 * Entry: 00093248
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00093248(undefined4 param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint extraout_r4;
  
  puVar2 = _DAT_003f9e4c;
  *_DAT_003f9e4c = *(ushort *)(_DAT_003f9e60 + 4);
  uVar1 = *puVar2;
  uVar3 = 0;
  if (((uVar1 >> 9 & 1) == 1) || ((uVar1 >> 4 & 1) == 1)) {
    uVar3 = 0x20;
  }
  if ((uVar1 >> 6 & 1) == 1) {
    uVar3 = uVar3 | 8;
  }
  if ((uVar1 >> 1 & 1) == 1) {
    uVar3 = uVar3 | 0x10;
  }
  if ((uVar1 >> 0xe & 1) == 1) {
    uVar3 = uVar3 | 0x1000;
  }
  if ((uVar1 >> 0xc & 1) == 1) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = uVar3 | 0x2000;
  }
  FUN_00093228(param_1,uVar3);
  return extraout_r4 & 0xffff;
}

