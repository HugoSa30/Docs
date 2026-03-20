/*
 * Program: n42.bin
 * Function: FUN_001b0550
 * Entry: 001b0550
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0550(undefined param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_003fc674;
  uVar2 = 0;
  DAT_003fc6da = param_1;
  do {
    if (*(int *)(iVar1 + uVar2 * 0xc) != 0) {
      (*(code *)&SUB_000680b0)((int)*(short *)(&UNK_003fc678 + uVar2 * 0xc),uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 8);
  return;
}

