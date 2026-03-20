/*
 * Program: n42.bin
 * Function: FUN_000f8474
 * Entry: 000f8474
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8474(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (8 < param_2) {
      param_2 = 8;
    }
    uVar2 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(_DAT_003fc674 + uVar2 * 0xc) != 0) {
          uVar1 = uVar2 & 0xff;
          (*(code *)&SUB_000680b0)((int)*(short *)(param_1 + uVar2 * 10),uVar1);
          iVar3 = param_1 + uVar2 * 10;
          (*(code *)&SUB_000681c8)(*(undefined2 *)(iVar3 + 2),uVar1);
          (*(code *)&SUB_000682ac)
                    (*(undefined *)(iVar3 + 8),*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6)
                     ,uVar1);
        }
        uVar2 = uVar2 + 1 & 0xffff;
      } while ((int)uVar2 < param_2);
    }
  }
  return;
}

