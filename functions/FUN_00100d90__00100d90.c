/*
 * Program: n42.bin
 * Function: FUN_00100d90
 * Entry: 00100d90
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00100d90(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = DAT_005bd51c;
  *DAT_005bd51c = *(ushort *)(DAT_005bd530 + 4);
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
  FUN_00100d6c(&DAT_005bd51c,param_2,uVar3);
  return uVar3 & 0xffff;
}

