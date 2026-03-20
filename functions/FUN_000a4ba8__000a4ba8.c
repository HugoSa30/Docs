/*
 * Program: n42.bin
 * Function: FUN_000a4ba8
 * Entry: 000a4ba8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a4ba8(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint in_MSR;
  
  cVar4 = '\0';
  uVar7 = 0;
  uVar6 = 0;
  if (DAT_003fa2e2 != 0) {
    do {
      uVar8 = (uint)*(ushort *)(&UNK_003fa262 + uVar6 * 2);
      if (uVar8 < 0x80) {
        uVar3 = FUN_000a447c(cVar4);
        if (_DAT_003fa10c == 0) {
          _DAT_003fa110 = in_MSR >> 0xf & 1;
        }
        _DAT_003fa10c = _DAT_003fa10c + 1;
        if ((*(byte *)(uVar8 * 5 + 0x1709c) >> 1 & 1) != 1) {
          (&UNK_003fa5b1)[uVar8 * 2] = (char)uVar3;
        }
        cVar1 = *(char *)(uVar8 * 5 + 0x1709c);
        if ((cVar1 == '\a') || (cVar1 == '\x05')) {
          if (uVar3 >> 0xb == 0x15) {
            (&UNK_003fa5b2)[uVar8 * 2] = (&UNK_003fa5b2)[uVar8 * 2] & 0x7f;
          }
          else {
            (&UNK_003fa5b2)[uVar8 * 2] = (&UNK_003fa5b2)[uVar8 * 2] & 0x7f;
          }
        }
        (&UNK_003fa5b2)[uVar8 * 2] = (&UNK_003fa5b2)[uVar8 * 2] & 0xeb | 0x20;
        cVar4 = cVar4 + '\x01';
        _DAT_003fa10c = _DAT_003fa10c + -1;
      }
      else {
        uVar8 = uVar8 + 0xff80 & 0xffff;
        uVar11 = (uint)*(byte *)(uVar8 * 5 + 0x170b0);
        uVar10 = 0;
        if (-1 < (int)(uVar11 - 1)) {
          do {
            uVar3 = FUN_000a447c(cVar4);
            if (_DAT_003fa10c == 0) {
              _DAT_003fa110 = in_MSR >> 0xf & 1;
            }
            _DAT_003fa10c = _DAT_003fa10c + 1;
            iVar12 = uVar8 + uVar10;
            iVar5 = iVar12 * 6;
            *(ushort *)(&DAT_005baa32 + iVar5) = uVar3;
            cVar1 = *(char *)(iVar12 * 5 + 0x170b1);
            pbVar13 = &DAT_005baa34 + iVar5;
            if ((cVar1 == '\a') || (cVar1 == '\x05')) {
              if ((int)(uint)uVar3 >> 0xb == 0x15) {
                *pbVar13 = *pbVar13 & 0x7f;
              }
              else {
                (&DAT_005baa34)[iVar5] = (&DAT_005baa34)[iVar5] & 0x7f;
              }
            }
            *pbVar13 = *pbVar13 & 0xeb | 0x20;
            _DAT_003fa10c = _DAT_003fa10c + -1;
            cVar4 = cVar4 + '\x01';
            uVar10 = uVar10 + 1 & 0xff;
          } while ((int)uVar10 <= (int)(uVar11 - 1));
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < DAT_003fa2e2);
  }
  cVar4 = '\0';
  uVar6 = 0;
  if (DAT_003fa260 != 0) {
    do {
      uVar8 = (uint)*(ushort *)(&DAT_003fa2a2 + uVar6 * 2);
      if (uVar8 < 0x80) {
        iVar5 = uVar8 * 5;
        uVar7 = (uint)*(byte *)(iVar5 + 0x170a0) << 8;
        if (((int)(uint)*(byte *)(iVar5 + 0x1709c) >> 1 & 1U) != 0) {
          uVar7 = (uint)CONCAT11(*(byte *)(iVar5 + 0x170a0),(&UNK_003fa5b1)[uVar8 * 2]);
        }
        FUN_000a4464(cVar4,uVar7);
        uVar7 = (uint)*(byte *)(iVar5 + 0x1709e);
        FUN_000a4498(cVar4,*(undefined *)(iVar5 + 0x1709f),
                     (int)(uint)*(byte *)(iVar5 + 0x1709c) >> 6 & 1,*(byte *)(iVar5 + 0x1709c) & 1,
                     *(undefined *)(uVar7 * 8 + 0x173f0),*(undefined *)(uVar7 * 8 + 0x173ee));
        if (_DAT_003fa10c == 0) {
          _DAT_003fa110 = in_MSR >> 0xf & 1;
        }
        _DAT_003fa10c = _DAT_003fa10c + 1;
        (&UNK_003fa5b2)[uVar8 * 2] = (&UNK_003fa5b2)[uVar8 * 2] | 0x10;
        _DAT_003fa10c = _DAT_003fa10c + -1;
        cVar4 = cVar4 + '\x01';
      }
      else {
        uVar8 = uVar8 + 0xff80 & 0xffff;
        iVar5 = uVar8 * 5;
        uVar11 = (uint)*(byte *)(iVar5 + 0x170b0);
        uVar10 = 0;
        if (-1 < (int)(uVar11 - 1)) {
          do {
            iVar12 = uVar8 + uVar10;
            iVar9 = iVar12 * 6;
            FUN_000a4464(cVar4,*(undefined2 *)(&DAT_005baa30 + iVar9));
            uVar7 = (uint)*(byte *)(iVar5 + 0x170b3);
            iVar12 = iVar12 * 5;
            bVar2 = *(byte *)(iVar12 + 0x170b1);
            FUN_000a4498(cVar4,*(undefined *)(iVar12 + 0x170b4),(int)(uint)bVar2 >> 6 & 1,bVar2 & 1,
                         *(undefined *)(uVar7 * 8 + 0x173f0),*(undefined *)(uVar7 * 8 + 0x173ee));
            if (_DAT_003fa10c == 0) {
              _DAT_003fa110 = in_MSR >> 0xf & 1;
            }
            _DAT_003fa10c = _DAT_003fa10c + 1;
            (&DAT_005baa34)[iVar9] = (&DAT_005baa34)[iVar9] | 0x10;
            _DAT_003fa10c = _DAT_003fa10c + -1;
            cVar4 = cVar4 + '\x01';
            uVar10 = uVar10 + 1 & 0xff;
          } while ((int)uVar10 <= (int)(uVar11 - 1));
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < DAT_003fa260);
    if (DAT_003fa260 != 0) {
      FUN_000a4570(cVar4);
      FUN_000a45bc(uVar7);
      FUN_000a43c0();
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa10c = _DAT_003fa10c + 1;
      _DAT_003fa2e8 = FUN_000fbeb0();
      _DAT_003fa2f0 = CONCAT44(_DAT_003fa2f0,_DAT_003fa2f4);
      if (DAT_003fa25f == '\x01') {
        DAT_003fa25f = '\0';
        _DAT_003fa2f0 = _DAT_003fa2e8;
      }
      _DAT_003fa10c = _DAT_003fa10c + -1;
    }
  }
  FUN_000af9e0(&UNK_003fa262,&DAT_003fa2a2,(uint)DAT_003fa260 << 1);
  DAT_003fa2e2 = DAT_003fa260;
  return 1;
}

