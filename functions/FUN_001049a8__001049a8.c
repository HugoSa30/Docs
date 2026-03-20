/*
 * Program: n42.bin
 * Function: FUN_001049a8
 * Entry: 001049a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001049a8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_a8 [19];
  uint local_5c;
  
  uVar3 = _DAT_003f9d30;
  uVar2 = _DAT_003f9d2c;
  uVar1 = _DAT_003f9d28;
  local_5c = _DAT_003f9d34;
  uVar10 = 0;
  iVar5 = 0;
  iVar6 = 0;
  do {
    local_a8[iVar6] = 0;
    uVar11 = 0;
    pbVar7 = &UNK_003f9d3f + iVar5;
    uVar8 = local_a8[iVar6];
    do {
      pbVar7 = pbVar7 + 1;
      uVar8 = uVar8 | (uint)*pbVar7 << ((uVar11 & 7) << 3);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 4);
    local_a8[iVar6] = uVar8;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  iVar5 = 0;
  uVar8 = _DAT_003f9d34;
  do {
    _DAT_003f9d34 = uVar8;
    uVar11 = (uint)*(byte *)(iVar5 + 0xf05064);
    uVar12 = 0;
    piVar4 = (int *)(iVar6 * 4 + 0xf05078);
    uVar8 = _DAT_003f9d34;
    do {
      _DAT_003f9d34 = uVar8;
      uVar8 = _DAT_003f9d30;
      uVar13 = _DAT_003f9d2c;
      if (iVar5 == 0) {
        uVar10 = _DAT_003f9d2c & _DAT_003f9d30 | _DAT_003f9d34 & ~_DAT_003f9d2c;
      }
      else if (iVar5 == 1) {
        uVar10 = _DAT_003f9d2c & _DAT_003f9d34 | _DAT_003f9d30 & ~_DAT_003f9d34;
      }
      else if (iVar5 == 2) {
        uVar10 = _DAT_003f9d34 ^ _DAT_003f9d2c ^ _DAT_003f9d30;
      }
      else if (iVar5 == 3) {
        uVar10 = _DAT_003f9d30 ^ (_DAT_003f9d2c | ~_DAT_003f9d34);
      }
      piVar4 = piVar4 + 1;
      uVar10 = uVar10 + _DAT_003f9d28 + local_a8[uVar11] + *piVar4;
      uVar9 = (uint)*(byte *)(iVar5 * 4 + (uVar12 & 3) + 0xf0506c);
      uVar10 = _DAT_003f9d2c + (uVar10 << (uVar9 & 0x3f) | uVar10 >> (0x20 - uVar9 & 0x3f));
      _DAT_003f9d28 = _DAT_003f9d34;
      uVar11 = uVar11 + *(byte *)(iVar5 + 0xf05068) & 0xf;
      iVar6 = iVar6 + 1;
      uVar12 = uVar12 + 1;
      _DAT_003f9d2c = uVar10;
      _DAT_003f9d30 = uVar13;
    } while ((int)uVar12 < 0x10);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  _DAT_003f9d28 = _DAT_003f9d34 + uVar1;
  _DAT_003f9d2c = uVar10 + uVar2;
  _DAT_003f9d30 = uVar13 + uVar3;
  _DAT_003f9d34 = uVar8 + local_5c;
  _DAT_003f9d38 = 0;
  return;
}

