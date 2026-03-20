/*
 * Program: n42.bin
 * Function: FUN_0011581c
 * Entry: 0011581c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0011581c(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = _DAT_001ce718;
  bVar1 = *param_1;
  *param_1 = (byte)_DAT_001ce718;
  uVar3 = _DAT_001ce71c;
  if (((uint)*param_1 == (uVar2 & 0xff)) &&
     (*param_1 = (byte)_DAT_001ce71c, (uint)*param_1 == (uVar3 & 0xff))) {
    *param_1 = bVar1;
    param_1 = (byte *)0x0;
  }
  return param_1;
}

