/*
 * Program: n42.bin
 * Function: FUN_000a2ea0
 * Entry: 000a2ea0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2ea0(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_MSR;
  
  if (((uint)*param_1 & 1 << (DAT_00016ef2 & 0x3f)) == 0) {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    uVar5 = 0;
    do {
      bVar1 = (&UNK_003fa514)[uVar5];
      if ((bVar1 & 0x10) != 0) {
        iVar2 = uVar5 * 2;
        (&UNK_003fa51d)[iVar2] = (&UNK_003fa51d)[iVar2] | (&UNK_003fa51c)[iVar2];
        (&UNK_003fa51c)[iVar2] = 0;
      }
      (&UNK_003fa514)[uVar5] = bVar1 & 0x1f;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
  }
  else {
    uVar5 = 0;
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    if ((param_1[1] & 0xff) == 0xff) {
      do {
        bVar1 = (&UNK_003fa514)[uVar5];
        if ((bVar1 & 0x10) != 0) {
          iVar2 = uVar5 * 2;
          (&UNK_003fa51d)[iVar2] = (&UNK_003fa51d)[iVar2] | (&UNK_003fa51c)[iVar2];
          (&UNK_003fa51c)[iVar2] = 0;
        }
        if ((bVar1 & 0x80) == 0) {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
        }
        else {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xef | (bVar1 & 0xc) << 3;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
    }
    else {
      uVar4 = 0;
      do {
        bVar1 = (&UNK_003fa514)[uVar5];
        if ((bVar1 & 0x10) != 0) {
          iVar2 = uVar5 * 2;
          (&UNK_003fa51d)[iVar2] = (&UNK_003fa51d)[iVar2] | (&UNK_003fa51c)[iVar2];
          (&UNK_003fa51c)[iVar2] = 0;
        }
        if ((bVar1 & 0x80) == 0) {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
        }
        else {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xef | (bVar1 & 0xc) << 3;
        }
        uVar3 = (int)(uint)param_1[1] >> (uVar4 & 0x3f) & 3;
        if (uVar3 == 0) {
          (&UNK_003fa51c)[uVar5 * 2] = (&UNK_003fa51c)[uVar5 * 2] | 2;
        }
        else if (uVar3 == 1) {
          (&UNK_003fa51c)[uVar5 * 2] = (&UNK_003fa51c)[uVar5 * 2] | 4;
        }
        else if (uVar3 == 2) {
          (&UNK_003fa51c)[uVar5 * 2] = (&UNK_003fa51c)[uVar5 * 2] | 1;
        }
        uVar5 = uVar5 + 1 & 0xff;
        uVar4 = uVar4 + 2;
      } while (uVar4 < 8);
    }
    uVar5 = 4;
    if ((param_1[2] & 0xff) == 0xbf) {
      do {
        bVar1 = (&UNK_003fa514)[uVar5];
        if ((bVar1 & 0x80) == 0) {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
        }
        else {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xef | (bVar1 & 0xc) << 3;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 7);
      if ((DAT_003fa51b & 0x80) == 0) {
        DAT_003fa51b = DAT_003fa51b & 0xaf | (DAT_003fa51b & 0xc) << 3 | 0x80;
      }
      else {
        DAT_003fa51b = DAT_003fa51b & 0xef | (DAT_003fa51b & 0xc) << 3;
      }
    }
    else {
      uVar4 = 0;
      do {
        bVar1 = (&UNK_003fa514)[uVar5];
        if ((bVar1 & 0x80) == 0) {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
        }
        else {
          (&UNK_003fa514)[uVar5] = bVar1 & 0xef | (bVar1 & 0xc) << 3;
        }
        if (((int)(uint)param_1[2] >> (uVar4 & 0x3f) & 1U) == 0) {
          (&UNK_003fa51d)[uVar5 * 2] = (&UNK_003fa51d)[uVar5 * 2] | 1;
        }
        if (((int)(uint)param_1[2] >> (uVar4 + 1 & 0x3f) & 1U) == 0) {
          (&UNK_003fa51d)[uVar5 * 2] = (&UNK_003fa51d)[uVar5 * 2] | 2;
        }
        uVar5 = uVar5 + 1 & 0xff;
        uVar4 = uVar4 + 2;
      } while (uVar4 < 6);
      if ((DAT_003fa51b & 0x80) == 0) {
        DAT_003fa51b = DAT_003fa51b & 0xaf | (DAT_003fa51b & 0xc) << 3 | 0x80;
      }
      else {
        DAT_003fa51b = DAT_003fa51b & 0xef | (DAT_003fa51b & 0xc) << 3;
      }
      if ((param_1[2] & 0x80) != 0) {
        DAT_003fa52b = DAT_003fa52b | 8;
      }
    }
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

