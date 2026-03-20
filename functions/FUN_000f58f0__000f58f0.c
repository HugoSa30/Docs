/*
 * Program: n42.bin
 * Function: FUN_000f58f0
 * Entry: 000f58f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f58f0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (*(int *)(_DAT_003fc5a8 + param_1 * 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&UNK_003fc44c + param_1 * 0x70);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

