/*
 * Program: n42.bin
 * Function: FUN_000a1c14
 * Entry: 000a1c14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000a1c14(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = _DAT_00011e84;
  puVar2 = _DAT_00011e70;
  *_DAT_00011e70 = _DAT_00011e84[2];
  uVar1 = *puVar2;
  uVar4 = 0;
  if (((uVar1 >> 9 & 1) == 1) || ((uVar1 >> 4 & 1) == 1)) {
    uVar4 = 0x20;
  }
  if ((uVar1 >> 6 & 1) == 1) {
    uVar4 = uVar4 | 8;
  }
  if ((uVar1 >> 1 & 1) == 1) {
    uVar4 = uVar4 | 0x10;
  }
  if ((uVar1 >> 0xe & 1) == 1) {
    uVar4 = uVar4 | 0x1000;
  }
  if ((uVar1 >> 0xc & 1) == 1) {
    uVar4 = uVar4 | 0x40;
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar4 = uVar4 | 0x2000;
  }
  *puVar2 = puVar3[3];
  *puVar2 = *puVar3;
  return uVar4;
}

