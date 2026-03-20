/*
 * Program: n42.bin
 * Function: FUN_001b1d4c
 * Entry: 001b1d4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1d4c(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  _DAT_003fc880 = param_1;
  _DAT_003fc884 = param_2;
  (*(code *)&SUB_00fb1b64)(param_2);
  _DAT_003fc8c8 = (*(code *)&SUB_00faf148)();
  _DAT_003fc8ca = 0;
  uVar1 = 0;
  do {
    if (*(int *)(param_2 + uVar1 * 0xc) == 0) {
      *(undefined4 *)(&UNK_003fc888 + uVar1 * 0x10) = 0;
    }
    else {
      *(undefined4 *)(&UNK_003fc888 + uVar1 * 0x10) = 2;
      (*(code *)&SUB_00069a84)(0,0,uVar1 & 0xff);
      (*(code *)&SUB_0006997c)(900,0,900,0,0x1c20,uVar1 & 0xff);
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 4);
  return;
}

