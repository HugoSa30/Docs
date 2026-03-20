/*
 * Program: n42.bin
 * Function: FUN_001e3bd4
 * Entry: 001e3bd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e3bd4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  
  uVar6 = 0;
  FUN_001e2e0c();
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 1);
  pbVar4 = (byte *)(iVar1 + 0x16);
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if (uVar3 == 0) {
    _DAT_003fb800 = &DAT_003fb7fc;
    uVar6 = 1;
    goto LAB_001e3d74;
  }
  if ((((&DAT_003fb7fc < _DAT_003fb800) || (_DAT_003fb800 < &DAT_003f9800)) ||
      ((pbVar8 = _DAT_003fb800, _DAT_003fb800 == &DAT_003fb7fc &&
       (pbVar8 = &DAT_003f9800, uVar3 < 8)))) || (&DAT_003fb7f8 < pbVar8 + uVar3))
  goto LAB_001e3d74;
  if (_DAT_003fb800 == &DAT_003fb7fc) {
    _DAT_003f9800 = 0xffffffff;
    _DAT_003f9804 = 0xffffffff;
    puVar7 = (undefined4 *)&DAT_003f9804;
    iVar9 = 0x3fe;
    do {
      puVar7[1] = 0xffffffff;
      puVar7 = puVar7 + 2;
      *puVar7 = 0xffffffff;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    _DAT_003fb7f8 =
         (uint)*pbVar4 << 0x18 | (uint)*(byte *)(iVar1 + 0x17) << 0x10 |
         (uint)*(byte *)(iVar1 + 0x18) << 8 | (uint)*(byte *)(iVar1 + 0x19);
    _DAT_003fb7fc =
         (uint)*(byte *)(iVar1 + 0x1a) << 0x18 | (uint)*(byte *)(iVar1 + 0x1b) << 0x10 |
         (uint)*(byte *)(iVar1 + 0x1c) << 8 | (uint)*(byte *)(iVar1 + 0x1d);
    pbVar4 = (byte *)(iVar1 + 0x1e);
    uVar3 = uVar3 - 8;
    _DAT_003fb800 = &DAT_003f9800;
  }
  if (0 < (int)uVar3) {
    uVar2 = uVar3;
    pbVar5 = pbVar4 + -1;
    if ((uVar3 & 1) != 0) {
      *pbVar8 = *pbVar4;
      pbVar8 = pbVar8 + 1;
      uVar2 = uVar3 - 1;
      pbVar5 = pbVar4;
      if (uVar2 == 0) goto LAB_001e3d4c;
    }
    uVar2 = uVar2 >> 1;
    pbVar4 = pbVar8 + -2;
    do {
      pbVar4[2] = pbVar5[1];
      pbVar5 = pbVar5 + 2;
      pbVar4[3] = *pbVar5;
      uVar2 = uVar2 - 1;
      pbVar4 = pbVar4 + 2;
    } while (uVar2 != 0);
  }
LAB_001e3d4c:
  _DAT_003fb800 = _DAT_003fb800 + uVar3;
  uVar6 = 1;
LAB_001e3d74:
  FUN_001e2e0c();
  return uVar6;
}

