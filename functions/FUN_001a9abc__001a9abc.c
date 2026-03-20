/*
 * Program: n42.bin
 * Function: FUN_001a9abc
 * Entry: 001a9abc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a9abc(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte local_30 [4];
  undefined auStack_2c [4];
  undefined local_28;
  undefined auStack_27 [15];
  
  uVar6 = (uint)*DAT_005baa10;
  for (pbVar8 = (byte *)(*(int *)(DAT_005baa10 + 8) + uVar6 * 4);
      (uVar6 < DAT_005baa10[2] && (*pbVar8 != param_1)); pbVar8 = pbVar8 + 4) {
    uVar6 = uVar6 + 1 & 0xff;
  }
  uVar4 = DAT_00f22bf8;
  if (pbVar8[2] == 0x81) {
    uVar4 = DAT_00f22bf9;
  }
  FUN_001a4880(uVar4,&local_28,auStack_2c,local_30);
  iVar2 = FUN_0010b1e0(local_28);
  pbVar1 = DAT_005baa10;
  if (iVar2 != 0) {
    local_30[0] = local_30[0] - 1;
    uVar6 = (uint)pbVar8[1];
    puVar7 = (undefined4 *)(*(int *)(DAT_005baa10 + 0x10) + uVar6 * 0x18);
    if (pbVar8[2] == 0x81) {
      uVar3 = (uint)DAT_005baa29;
      uVar6 = uVar6 + uVar3 & 0xff;
      puVar7 = puVar7 + uVar3 * 6;
      DAT_005baa29 = (byte)(uVar3 + 1);
      if ((uint)DAT_005baa10[4] == (uVar3 + 1 & 0xff)) {
        DAT_005baa29 = 0;
      }
    }
    iVar2 = *(int *)(DAT_005baa10 + 0xc);
    if ((*(byte *)(puVar7 + 3) & 0x82) == 0x82) {
      *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) | 0x20;
      uVar4 = (**(code **)(pbVar1 + 0x14))(param_1);
      *(undefined *)((int)puVar7 + 0xe) = uVar4;
      *(undefined *)((int)puVar7 + 0xf) = local_28;
      *(ushort *)(puVar7 + 2) = (ushort)local_30[0];
      *(ushort *)((int)puVar7 + 6) = (ushort)local_30[0];
      FUN_0010ef98(auStack_27,*puVar7);
      FUN_0010ef68(uVar6,1);
      pcVar5 = *(code **)(iVar2 + uVar6 * 0xc + 8);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)();
      }
    }
  }
  return;
}

