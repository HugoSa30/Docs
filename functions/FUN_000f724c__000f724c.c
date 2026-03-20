/*
 * Program: n42.bin
 * Function: FUN_000f724c
 * Entry: 000f724c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f724c(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,uint param_5)

{
  if (*(code **)(_DAT_003fc3e0 + 4) != (code *)0x0) {
    (**(code **)(_DAT_003fc3e0 + 4))(4,4,param_4,param_3 << 8 | param_5 & 0xff);
  }
  return;
}

