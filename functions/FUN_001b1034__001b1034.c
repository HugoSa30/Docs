/*
 * Program: n42.bin
 * Function: FUN_001b1034
 * Entry: 001b1034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001b1034(int param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)&SUB_00068f28)(param_1);
  if (cVar1 != '\0') {
    *(int *)(*(int *)(_DAT_003fc720 + param_1 * 0xc) + 0x18) =
         2 << ((uint)*(byte *)(_DAT_003fc720 + param_1 * 0xc + 8) * 2 & 0x3f);
    *(undefined4 *)(&UNK_003fc724 + param_1 * 0x18) = 1;
  }
  return cVar1 != '\0';
}

