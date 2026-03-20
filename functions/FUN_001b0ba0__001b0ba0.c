/*
 * Program: n42.bin
 * Function: FUN_001b0ba0
 * Entry: 001b0ba0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001b0ba0(int param_1)

{
  char cVar2;
  int iVar1;
  uint uVar3;
  
  cVar2 = (*(code *)&SUB_00068848)(param_1);
  if (cVar2 != '\0') {
    param_1 = param_1 * 0xc;
    (*(code *)&SUB_00faf2d0)
              (*(undefined4 *)(_DAT_003fc674 + param_1),*(undefined *)(_DAT_003fc674 + param_1 + 8),
               9);
    uVar3 = (uint)*(byte *)(_DAT_003fc674 + param_1 + 8);
    iVar1 = *(int *)(_DAT_003fc674 + param_1);
    *(int *)(iVar1 + 0x18) = 3 << (uVar3 * 2 & 0x3f);
    (*(code *)&SUB_00faf214)(iVar1,uVar3,1);
    *(undefined4 *)(&UNK_003fc67c + param_1) = 2;
    (*(code *)&SUB_00faf2d0)
              (*(undefined4 *)(_DAT_003fc674 + param_1),*(undefined *)(_DAT_003fc674 + param_1 + 9),
               8);
    (*(code *)&SUB_00faf214)
              (*(undefined4 *)(_DAT_003fc674 + param_1),*(undefined *)(_DAT_003fc674 + param_1 + 9),
               2);
  }
  return cVar2 != '\0';
}

