/*
 * Program: n42.bin
 * Function: FUN_000fab80
 * Entry: 000fab80
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fab80(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  uint uVar5;
  int **ppiVar6;
  int iVar7;
  
  ppiVar6 = (int **)(*(int *)(_DAT_003fbcbc + 0x60) + _DAT_003fbcdc * 0x10);
  if (ppiVar6[1] != (int *)0x0) {
    iVar7 = *ppiVar6[1];
    ppiVar6[1] = (int *)0x0;
    ppiVar6[2] = (int *)iVar7;
    return;
  }
  bVar1 = *(byte *)((int)ppiVar6 + 0xd);
  **(char **)((int)*ppiVar6 + 0xc) = **(char **)((int)*ppiVar6 + 0xc) + -1;
  iVar2 = _DAT_003fbcdc;
  iVar7 = _DAT_003fbcbc;
  if ((bVar1 & 0x80) == 0) {
    bVar1 = *(byte *)((int)ppiVar6 + 0xd);
    ppiVar4 = (int **)(*(int *)(*(int *)(_DAT_003fbcbc + 0x4c) + _DAT_003fbcdc * 4) +
                      (uint)bVar1 * 4);
    piVar3 = *ppiVar4;
    *ppiVar6 = piVar3;
    ppiVar6[2] = (int *)*piVar3;
    *ppiVar4 = (int *)0x0;
    uVar5 = bVar1 + 1;
    *(char *)((int)ppiVar6 + 0xd) = (char)uVar5;
    if ((uint)*(byte *)(*(int *)(iVar7 + 0x48) + iVar2) <= (uVar5 & 0xff)) {
      *(undefined *)((int)ppiVar6 + 0xd) = 0;
    }
    bVar1 = *(byte *)(ppiVar6 + 3);
    *(byte *)(ppiVar6 + 3) = bVar1 & 0x7f;
    if ((bVar1 & 0x7f) == *(byte *)((int)ppiVar6 + 0xd)) {
      *(byte *)((int)ppiVar6 + 0xd) = *(byte *)((int)ppiVar6 + 0xd) | 0x80;
      return;
    }
  }
  else {
    *ppiVar6 = (int *)0x0;
    ppiVar6[2] = (int *)0x0;
  }
  return;
}

