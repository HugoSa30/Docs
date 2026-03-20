/*
 * Program: n42.bin
 * Function: FUN_000f8690
 * Entry: 000f8690
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f8690(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)(uint)*(ushort *)(param_1 + 0x20) >> (param_2 & 0x3f) & 1U) == 0) {
    uVar1 = 0;
  }
  else {
    *(ushort *)(param_1 + 0x20) = ~(ushort)(1 << (param_2 & 0x3f));
    if (*(code **)(_DAT_003fc670 + 0x14) != (code *)0x0) {
      (**(code **)(_DAT_003fc670 + 0x14))(5,1,0,0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

