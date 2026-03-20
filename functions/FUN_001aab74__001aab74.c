/*
 * Program: n42.bin
 * Function: FUN_001aab74
 * Entry: 001aab74
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aab74(int *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint in_MSR;
  
  iVar13 = *param_1;
  (*(code *)&SUB_00062ddc)(param_1,param_2);
  if ((*param_2 & 4) != 0) {
    bVar1 = *(byte *)(param_1 + 10);
    uVar2 = param_2[bVar1 + 5];
    uVar3 = param_2[bVar1 + 6];
    uVar4 = param_2[bVar1 + 9];
    uVar5 = param_2[bVar1 + 10];
    uVar6 = param_2[bVar1 + 0xc];
    uVar7 = param_2[bVar1 + 0xd];
    uVar12 = (uint)*(byte *)(param_1 + 8) + (uint)*(byte *)(iVar13 + 0x21) * 8;
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    uVar11 = 0;
    do {
      uVar12 = uVar12 & 0xff;
      if ((1 << ((uVar12 + (uint)*(byte *)(iVar13 + 0x21) * -8) - (uint)*(byte *)(param_1 + 8) &
                0x3f) & (uint)*(byte *)(iVar13 + 0x20)) != 0) {
        *(uint *)(iVar13 + 0x1c) =
             *(uint *)(iVar13 + 0x1c) & ~(1 << (uVar12 - *(byte *)(param_1 + 8) & 0x3f));
        if ((*(byte *)(param_1[1] + uVar12) & 0x10) != 0) {
          iVar8 = uVar12 * 2;
          pbVar10 = (byte *)(param_1[2] + iVar8 + 1);
          *pbVar10 = *pbVar10 | *(byte *)(param_1[2] + iVar8);
          *(undefined *)(param_1[2] + iVar8) = 0;
        }
        *(byte *)(param_1[1] + uVar12) = *(byte *)(param_1[1] + uVar12) | 0xc0;
        uVar9 = (int)((uVar2 & 0xff) + (uVar3 & 0xff) * 0x100 & 0xffff) >> (uVar11 & 0x3f) & 3;
        if (uVar9 == 0) {
          pbVar10 = (byte *)(param_1[2] + uVar12 * 2);
          *pbVar10 = *pbVar10 | 2;
        }
        else if (uVar9 == 1) {
          pbVar10 = (byte *)(param_1[2] + uVar12 * 2);
          *pbVar10 = *pbVar10 | 4;
        }
        if (((int)((uVar4 & 0xff) + (uVar5 & 0xff) * 0x100 & 0xffff) >> (uVar11 & 0x3f) & 3U) == 1)
        {
          pbVar10 = (byte *)(param_1[2] + uVar12 * 2);
          *pbVar10 = *pbVar10 | 8;
        }
        if (((int)((uVar6 & 0xff) + (uVar7 & 0xff) * 0x100 & 0xffff) >> (uVar11 & 0x3f) & 3U) == 2)
        {
          pbVar10 = (byte *)(param_1[2] + uVar12 * 2);
          *pbVar10 = *pbVar10 | 1;
        }
      }
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 + 2;
    } while (uVar11 < 0xf);
    _DAT_003fa10c = _DAT_003fa10c + -1;
  }
  return;
}

