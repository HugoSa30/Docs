/*
 * Program: n42.bin
 * Function: FUN_001b1e60
 * Entry: 001b1e60
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b1e60(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1 & 0xff;
  if (uVar1 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar1 * 0x10)) {
      iVar3 = param_1 * 0xc;
      uVar1 = (uint)*(byte *)(_DAT_003fc884 + iVar3 + 8);
      iVar2 = *(int *)(_DAT_003fc884 + iVar3);
      *(int *)(iVar2 + 0x18) = 2 << (uVar1 * 2 & 0x3f);
      *(undefined4 *)(&UNK_003fc888 + param_1 * 0x10) = 2;
      (*(code *)&SUB_00faf170)(iVar2,uVar1,0);
      *(ushort *)(*(int *)(_DAT_003fc884 + iVar3) + 0x20) =
           ~(ushort)(1 << (*(byte *)(_DAT_003fc884 + iVar3 + 8) & 0x3f));
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar1);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar1);
  }
  return 0;
}

