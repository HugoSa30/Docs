/*
 * Program: n42.bin
 * Function: FUN_000a5d64
 * Entry: 000a5d64
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a5d64(uint param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 & 0xff) < 0x10) {
    puVar1 = (ushort *)&DAT_00306c00;
  }
  else {
    param_1 = param_1 + 0xf0;
    puVar1 = (ushort *)&DAT_00306c40;
  }
  uVar3 = (uint)*puVar1;
  uVar4 = (int)uVar3 >> (param_1 & 0x3f);
  uVar2 = 1 << (param_1 & 0x3f);
  if ((uVar3 & uVar2) != 0) {
    do {
      uVar3 = uVar3 & ~(1 << (param_1 & 0x3f));
    } while ((uVar3 & uVar2) != 0);
    *puVar1 = (ushort)uVar3;
  }
  return uVar4 & 1;
}

