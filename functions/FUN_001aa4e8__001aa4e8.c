/*
 * Program: n42.bin
 * Function: FUN_001aa4e8
 * Entry: 001aa4e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_001aa4e8(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  uint in_MSR;
  
  iVar6 = param_1 * 5;
  uVar8 = (uint)(byte)(&DAT_00016fcd)[iVar6];
  iVar4 = (uint)(byte)(&DAT_00016fcc)[iVar6] * 0x20;
  uVar9 = *(ushort *)(iVar4 + 0x16f80);
  uVar1 = *(ushort *)(iVar4 + 0x16f82);
  uVar2 = *(ushort *)(iVar4 + 0x16f84);
  uVar3 = *(ushort *)(iVar4 + 0x16f86);
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  uVar5 = (**(code **)(iVar4 + 0x16f68))(*(undefined4 *)(iVar4 + 0x16f78),uVar8,param_2);
  bVar7 = *(byte *)(*(int *)(iVar4 + 0x16f7c) + uVar8);
  *(byte *)(*(int *)(iVar4 + 0x16f7c) + uVar8) = bVar7 & 0x1f;
  if ((&DAT_00016fca)[iVar6] == '\0') {
    if ((bVar7 & 0x80) == 0) {
      uVar9 = uVar5 | uVar3 & *param_2;
      *param_2 = uVar9;
      uVar5 = *(ushort *)(&UNK_003fa578 + param_1 * 2) & ~uVar9 | uVar5;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
    else {
      *param_2 = uVar2 & *param_2;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
  }
  else {
    bVar7 = bVar7 & 0xe0;
    if (bVar7 == 0x80) {
      uVar9 = uVar5 | uVar9 & *param_2;
      *param_2 = uVar9;
      uVar5 = *(ushort *)(&UNK_003fa578 + param_1 * 2) & ~uVar9 | uVar5;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
    else if (bVar7 == 0xa0) {
      uVar9 = uVar5 | uVar1 & *param_2;
      *param_2 = uVar9;
      uVar5 = *(ushort *)(&UNK_003fa578 + param_1 * 2) & ~uVar9 | uVar5;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
    else if ((bVar7 == 0xc0) || (bVar7 == 0xe0)) {
      *param_2 = uVar2 & *param_2;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
    else {
      uVar9 = uVar5 | uVar3 & *param_2;
      *param_2 = uVar9;
      uVar5 = *(ushort *)(&UNK_003fa578 + param_1 * 2) & ~uVar9 | uVar5;
      *(ushort *)(&UNK_003fa578 + param_1 * 2) = uVar5;
    }
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return uVar5;
}

