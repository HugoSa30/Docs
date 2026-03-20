/*
 * Program: n42.bin
 * Function: FUN_00110d38
 * Entry: 00110d38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00110d38(int param_1)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(ushort *)(_DAT_003fc2f0 + 0xc);
  }
  else {
    uVar1 = *(ushort *)(_DAT_003fc2e4 + 0xc);
  }
  return uVar1 & 0xff;
}

