/*
 * Program: n42.bin
 * Function: FUN_001b0aa4
 * Entry: 001b0aa4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001b0aa4(int param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)&SUB_00068848)(param_1);
  if (cVar1 != '\0') {
    param_1 = param_1 * 0xc;
    *(int *)(*(int *)(_DAT_003fc674 + param_1) + 0x18) =
         2 << ((uint)*(byte *)(_DAT_003fc674 + param_1 + 8) * 2 & 0x3f);
    *(undefined4 *)(&UNK_003fc67c + param_1) = 1;
  }
  return cVar1 != '\0';
}

