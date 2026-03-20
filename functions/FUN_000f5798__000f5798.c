/*
 * Program: n42.bin
 * Function: FUN_000f5798
 * Entry: 000f5798
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f5798(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_003fc3e0 == 0) {
    uVar1 = 0;
  }
  else if (_DAT_003fc5a8 == 0) {
    uVar1 = 0;
  }
  else {
    if (0 < *(int *)(&UNK_003fc44c + param_1 * 0x70)) {
      iVar3 = param_1 * 0xc;
      if (*(int *)(_DAT_003fc5a8 + iVar3) != 0) {
        (*(code *)&SUB_00faf170)
                  (*(int *)(_DAT_003fc5a8 + iVar3),*(undefined *)(_DAT_003fc5a8 + iVar3 + 8),0);
        (*(code *)&SUB_00faf214)
                  (*(undefined4 *)(_DAT_003fc5a8 + iVar3),*(undefined *)(_DAT_003fc5a8 + iVar3 + 8),
                   0);
        uVar2 = (uint)*(byte *)(_DAT_003fc5a8 + iVar3 + 8) * 2;
        *(uint *)(*(int *)(_DAT_003fc5a8 + iVar3) + 0x14) =
             *(uint *)(*(int *)(_DAT_003fc5a8 + iVar3) + 0x14) & ~(3 << (uVar2 & 0x3f)) |
             0 << (uVar2 & 0x3f);
        uVar2 = (uint)*(byte *)(_DAT_003fc5a8 + iVar3 + 8);
        iVar3 = *(int *)(_DAT_003fc5a8 + iVar3);
        *(int *)(iVar3 + 0x18) = 0 << (uVar2 * 2 & 0x3f);
        *(ushort *)(iVar3 + 0x20) = ~(ushort)(1 << (uVar2 & 0x3f));
        *(undefined4 *)(&UNK_003fc44c + param_1 * 0x70) = 2;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

