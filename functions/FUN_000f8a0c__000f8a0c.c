/*
 * Program: n42.bin
 * Function: FUN_000f8a0c
 * Entry: 000f8a0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f8a0c(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  
  iVar2 = (param_1 & 0xff) * 0xc;
  iVar5 = *(int *)(_DAT_003fc720 + iVar2);
  uVar4 = (uint)*(byte *)(_DAT_003fc720 + iVar2 + 8) * 2;
  *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) & ~(3 << (uVar4 & 0x3f)) | 0 << (uVar4 & 0x3f);
  iVar2 = param_1 * 0x18;
  local_28 = CONCAT22((ushort)(byte)(&UNK_003fc728)[iVar2] << 9 |
                      ((byte)(&UNK_003fc729)[iVar2] & 1) << 8 | (ushort)(byte)(&UNK_003fc72a)[iVar2]
                      ,*(undefined2 *)(&UNK_003fc72c + iVar2));
  uVar1 = *(undefined4 *)(&UNK_003fc72e + iVar2);
  *(undefined2 *)(&UNK_003fc730 + iVar2) = 0;
  (&UNK_003fc72f)[iVar2] = 0;
  iVar6 = _DAT_003fc720 + param_1 * 0xc;
  uVar4 = (uint)*(byte *)(iVar6 + 8);
  iVar5 = *(int *)(_DAT_003fc720 + param_1 * 0xc);
  if ((*(uint *)(iVar5 + 0x18) >> (uVar4 * 2 & 0x3f) & 3) == 0) {
    puVar3 = *(undefined4 **)(iVar6 + 4);
    *puVar3 = local_28;
    puVar3[1] = uVar1;
    if (*(int *)(&UNK_003fc724 + iVar2) == 2) {
      *(int *)(iVar5 + 0x18) = 1 << (uVar4 * 2 & 0x3f);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

