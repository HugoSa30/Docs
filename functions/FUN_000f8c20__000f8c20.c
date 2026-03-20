/*
 * Program: n42.bin
 * Function: FUN_000f8c20
 * Entry: 000f8c20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000f8c20(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (uint)(short)((short)param_1 + (short)(param_1 / 0x2d0) * -0x2d0);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x2d0;
  }
  iVar5 = _DAT_003fc720 + param_2 * 0xc;
  uVar3 = (uint)*(byte *)(iVar5 + 8);
  iVar4 = *(int *)(_DAT_003fc720 + param_2 * 0xc);
  bVar1 = (*(uint *)(iVar4 + 0x18) >> (uVar3 * 2 & 0x3f) & 3) == 0;
  if (bVar1) {
    *(short *)(&UNK_003fc738 + param_2 * 0x18) = (short)uVar2;
    *(short *)(*(int *)(iVar5 + 4) + 6) = (short)((uVar2 & 0xffff) / 6) * 2;
    uVar3 = uVar3 * 2;
    *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & ~(3 << (uVar3 & 0x3f)) | 1 << (uVar3 & 0x3f)
    ;
  }
  else {
    (*(code *)&SUB_00fb0fbc)(0x37);
  }
  return bVar1;
}

