/*
 * Program: n42.bin
 * Function: FUN_000f9270
 * Entry: 000f9270
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9270(uint param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (*(code *)&SUB_00069008)(param_1);
  if (cVar2 != '\0') {
    if (*(int *)(&UNK_003fc7f8 + param_1 * 4) == 1) {
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x36,param_1 & 0xff);
      }
    }
    else {
      iVar3 = param_1 * 0xc;
      if (*(char *)(_DAT_003fc7f4 + iVar3 + 9) != '\0') {
        uVar1 = (uint)*(byte *)(_DAT_003fc7f4 + iVar3 + 8) * 2;
        *(uint *)(*(int *)(_DAT_003fc7f4 + iVar3) + 0x14) =
             *(uint *)(*(int *)(_DAT_003fc7f4 + iVar3) + 0x14) & ~(1 << (uVar1 & 0x3f)) |
             (uint)(param_2 != 0) << (uVar1 & 0x3f);
        *(int *)(*(int *)(_DAT_003fc7f4 + iVar3) + 0x18) =
             2 << ((uint)*(byte *)(_DAT_003fc7f4 + iVar3 + 8) * 2 & 0x3f);
        return 1;
      }
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x37,param_1 & 0xff);
      }
    }
  }
  return 0;
}

