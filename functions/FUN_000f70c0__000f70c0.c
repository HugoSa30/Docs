/*
 * Program: n42.bin
 * Function: FUN_000f70c0
 * Entry: 000f70c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f70c0(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  ushort uVar5;
  uint in_TBLr;
  uint in_TBUr;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  *param_2 = in_TBUr;
  param_2[1] = in_TBLr;
  uVar2 = *param_2 * 0x6666 + (int)((ulonglong)param_2[1] * 0x6666 >> 0x20);
  *param_2 = uVar2 >> 0x10;
  param_2[1] = uVar2 * 0x10000 | param_2[1] * 0x6666 >> 0x10;
  cVar1 = (*(code *)&SUB_00fadb88)();
  if (cVar1 == '\x01') {
    puVar3 = *(uint **)(param_1 + 4);
    local_18 = puVar3[2] & 0xffffff;
    local_20 = *puVar3 & 0x3fffffff;
    local_1c = puVar3[1] & 0x3fffffff;
    local_20 = local_20 - local_1c;
    if ((int)local_20 < 0) {
      local_20 = local_20 + 0x40000000;
    }
    if (local_18 < local_20) {
      local_20 = local_18;
    }
    sVar4 = *(short *)((int)param_2 + 0x4a) * 0x3c + (short)((local_20 * 0x3c) / local_18);
    if (*(byte *)(param_2 + 0x18) < 200) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) + 1;
    }
    uVar5 = *(short *)((int)param_2 + 0x5e) + 1;
    *(ushort *)((int)param_2 + 0x5e) = uVar5;
    if (7 < uVar5) {
      *(undefined2 *)((int)param_2 + 0x5e) = 0;
    }
    *(short *)((int)param_2 + (uint)*(ushort *)((int)param_2 + 0x5e) * 2 + 0x4e) = sVar4;
    *(undefined *)((int)param_2 + 0x62) = 0;
    *(short *)(param_2 + 0x13) = sVar4;
    *(undefined *)((int)param_2 + 0x6d) = 1;
  }
  return;
}

