/*
 * Program: n42.bin
 * Function: FUN_001b16a0
 * Entry: 001b16a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b16a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  _DAT_003fc7f0 = param_2;
  _DAT_003fc7f4 = param_1;
  (*(code *)&SUB_00fb151c)(param_1);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 0xc) != 0) {
      *(undefined4 *)(&UNK_003fc7f8 + uVar1 * 4) = 1;
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x20);
  return;
}

