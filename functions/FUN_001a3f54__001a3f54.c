/*
 * Program: n42.bin
 * Function: FUN_001a3f54
 * Entry: 001a3f54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_001a3f54(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  param_1 = param_1 * 5;
  bVar1 = *(byte *)(param_1 + 0xf2321b);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0xf23218);
    iVar3 = (int)(uint)*(byte *)(param_1 + 0xf2321a) >> 3;
    uVar6 = (uint)*(byte *)(param_1 + 0xf2321a) + iVar3 * -8;
    _5();
    iVar5 = (uint)bVar2 * 0x14;
    param_2[1] = *(byte *)(_DAT_003fae80 + iVar5 + 0xf);
    puVar8 = (ushort *)(_DAT_003fae80 + iVar5 + iVar3);
    uVar4 = (1 << (bVar1 & 0x3f)) + 0xffff;
    uVar7 = *puVar8 & ~(ushort)(uVar4 << (uVar6 & 0x3f));
    *puVar8 = uVar7;
    *puVar8 = uVar7 | (ushort)((*param_2 & uVar4) << (uVar6 & 0x3f));
    _6();
  }
  return param_2[1];
}

