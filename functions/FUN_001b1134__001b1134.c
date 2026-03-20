/*
 * Program: n42.bin
 * Function: FUN_001b1134
 * Entry: 001b1134
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001b1134(int param_1)

{
  char cVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  cVar1 = (*(code *)&SUB_00068f28)(param_1);
  iVar6 = _DAT_003fc720;
  if (cVar1 != '\0') {
    iVar4 = param_1 * 0x18;
    param_1 = param_1 * 0xc;
    iVar3 = _DAT_003fc720 + param_1;
    puVar2 = (ushort *)(*(int *)(iVar3 + 4) + 8);
    *puVar2 = *puVar2 & 0xff00 | (*(ushort *)(&UNK_003fc738 + iVar4) / 6) * 2 & 0xff;
    (*(code *)&SUB_00faf2d0)(*(undefined4 *)(iVar6 + param_1),*(undefined *)(iVar3 + 8),0xd);
    uVar5 = (uint)*(byte *)(_DAT_003fc720 + param_1 + 8);
    iVar6 = *(int *)(_DAT_003fc720 + param_1);
    *(int *)(iVar6 + 0x18) = 3 << (uVar5 * 2 & 0x3f);
    (*(code *)&SUB_00faf214)(iVar6,uVar5,2);
    (&UNK_003fc73a)[iVar4] = 1;
    *(undefined4 *)(&UNK_003fc724 + iVar4) = 2;
  }
  return cVar1 != '\0';
}

