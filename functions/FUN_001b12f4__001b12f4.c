/*
 * Program: n42.bin
 * Function: FUN_001b12f4
 * Entry: 001b12f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b12f4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_003fc71c = param_2;
  _DAT_003fc720 = param_1;
  _DAT_003fc7e4 = (*(code *)&SUB_00faf148)();
  (*(code *)&SUB_00fb0d30)(param_1);
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + uVar3 * 0xc) == 0) {
      *(undefined4 *)(&UNK_003fc724 + uVar3 * 0x18) = 0;
    }
    else {
      iVar2 = uVar3 * 0x18;
      *(undefined4 *)(&UNK_003fc724 + iVar2) = 1;
      *(undefined4 *)(&UNK_003fc734 + iVar2) = 0;
      *(undefined2 *)(&UNK_003fc738 + iVar2) = *(undefined2 *)(_DAT_003fc71c + uVar3 * 2);
      uVar1 = uVar3 & 0xff;
      (*(code *)&SUB_00068e78)(300,uVar1,0);
      (&UNK_003fc729)[uVar1 * 0x18] = 1;
      (*(code *)&SUB_00068d5c)(1000,uVar1,1);
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 8);
  (*(code *)&SUB_00fb0e7c)(0);
  (*(code *)&SUB_000689c0)(0);
  _DAT_003fc7ec = 2500000 / _DAT_003fc7e4;
  (*(code *)&SUB_00fb12d4)();
  _DAT_003fc7e6 = 0;
  return;
}

