/*
 * Program: n42.bin
 * Function: FUN_000d316c
 * Entry: 000d316c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d316c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort local_20 [2];
  int local_1c;
  int local_18 [4];
  
  uVar2 = FUN_000e2d40(*(undefined *)(param_1 + 0x74),local_18);
  uVar3 = FUN_000e2aa8(*(undefined *)(param_1 + 0x74),local_20);
  uVar3 = uVar3 & uVar2 & 1;
  FUN_000e2d40(*(undefined *)(param_1 + 0x74),&local_1c);
  if (local_1c != local_18[0]) {
    uVar2 = FUN_000e2aa8(*(undefined *)(param_1 + 0x74),local_20);
    uVar3 = uVar2 & uVar3;
    local_18[0] = local_1c;
  }
  if (local_20[0] < 0x1c21) {
    if (uVar3 == 0) {
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 2;
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfe;
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xdf;
    }
    else {
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfd;
      if (**(int **)(param_1 + 0x28) == local_18[0]) {
        **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xdf;
      }
      else {
        **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 0x20;
      }
      bVar4 = 0;
      iVar1 = (uint)*(byte *)(param_1 + 0x74) * 2;
      if (local_20[0] < *(ushort *)(&DAT_001cb718 + iVar1)) {
        local_20[0] = (local_20[0] + 0x708) - *(short *)(&DAT_001cb718 + iVar1);
        bVar4 = 3;
      }
      else {
        for (local_20[0] = local_20[0] - *(short *)(&DAT_001cb718 + iVar1); 0x707 < local_20[0];
            local_20[0] = local_20[0] - 0x708) {
          bVar4 = bVar4 + 1;
        }
      }
      if (3 < **(byte **)(param_1 + 0x14)) {
        bVar4 = 3;
      }
      **(byte **)(param_1 + 0x14) = bVar4;
      bVar4 = *(byte *)(param_1 + 0x74);
      *(int *)(&UNK_003fb7c0 + (uint)bVar4 * 4) = local_18[0];
      *(ushort *)(&DAT_005b8bb8 + (uint)bVar4 * 2) = local_20[0];
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0x7f;
    }
  }
  else if (uVar3 != 0) {
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 0x80;
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xdf;
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfe;
  }
  return;
}

