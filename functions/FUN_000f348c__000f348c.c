/*
 * Program: n42.bin
 * Function: FUN_000f348c
 * Entry: 000f348c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f348c(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint in_MSR;
  undefined auStack_10 [4];
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x25) == '\x01') {
    (*(code *)&SUB_00062ddc)(param_1,0);
  }
  if (((int)param_2 >> 3 & 1U) != 0) {
    *(undefined *)(iVar2 + 0x25) = 2;
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  if (*(byte *)((int)param_1 + 0x1e) != param_2) {
    if ((param_2 & 1) == 0) {
      *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 0;
    }
    if (((int)param_2 >> 1 & 1U) == 0) {
      *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 1;
    }
    if (((int)param_2 >> 2 & 1U) == 0) {
      *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 7;
    }
    if (((int)param_2 >> 4 & 1U) == 0) {
      *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 3;
    }
    if (((int)param_2 >> 6 & 1U) == 0) {
      if (((param_2 ^ *(byte *)((int)param_1 + 0x1e)) & 0xa0) != 0) {
        *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 9;
        (*(code *)&SUB_00013938)(*(undefined2 *)(param_1 + 7),(int)param_1 + 0x1e,auStack_10);
        (*(code *)&SUB_00013858)(*(undefined2 *)(param_1 + 7),auStack_10);
      }
    }
    else {
      *(undefined *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x1f) * 2 + 1) = 8;
      (*(code *)&SUB_00013938)(*(undefined2 *)(param_1 + 7),(int)param_1 + 0x1e,auStack_10);
      (*(code *)&SUB_00013858)(*(undefined2 *)(param_1 + 7),auStack_10);
      (*(code *)&SUB_00faa8e4)(iVar2);
    }
  }
  iVar2 = param_1[1];
  uVar3 = (uint)*(byte *)((int)param_1 + 0x1f);
  bVar1 = *(byte *)(iVar2 + uVar3);
  if ((bVar1 & 0x80) == 0) {
    *(byte *)(iVar2 + uVar3) = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
  }
  else {
    *(byte *)(iVar2 + uVar3) = bVar1 & 0xef | (bVar1 & 0xc) << 3;
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

