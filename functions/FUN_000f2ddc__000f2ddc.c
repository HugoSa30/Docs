/*
 * Program: n42.bin
 * Function: FUN_000f2ddc
 * Entry: 000f2ddc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f2ddc(int *param_1,ushort *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  uint in_MSR;
  
  iVar7 = *param_1;
  if (((param_2 == (ushort *)0x0) || ((*param_2 & 8) != 0)) || ((*param_2 & 4) == 0)) {
    if (*(char *)(iVar7 + 0x25) == '\0') {
      *(undefined *)(iVar7 + 0x25) = 1;
    }
    if ((param_2 == (ushort *)0x0) || ((*param_2 & 4) != 0)) {
      uVar9 = (uint)*(byte *)(param_1 + 8);
      if (uVar9 <= *(byte *)((int)param_1 + 0x21)) {
        do {
          if (_DAT_003fa10c == 0) {
            _DAT_003fa110 = in_MSR >> 0xf & 1;
          }
          _DAT_003fa10c = _DAT_003fa10c + 1;
          if ((*(byte *)(param_1[1] + uVar9) & 0x10) != 0) {
            iVar7 = uVar9 * 2;
            pbVar8 = (byte *)(param_1[2] + iVar7 + 1);
            *pbVar8 = *pbVar8 | *(byte *)(param_1[2] + iVar7);
            *(undefined *)(param_1[2] + iVar7) = 0;
          }
          iVar7 = param_1[1];
          bVar10 = *(byte *)(iVar7 + uVar9);
          if ((bVar10 & 0x80) == 0) {
            *(byte *)(iVar7 + uVar9) = bVar10 & 0xaf | (bVar10 & 0xc) << 3 | 0x80;
          }
          else {
            *(byte *)(iVar7 + uVar9) = bVar10 & 0xef | (bVar10 & 0xc) << 3;
          }
          _DAT_003fa10c = _DAT_003fa10c + -1;
          uVar9 = uVar9 + 1 & 0xff;
        } while (uVar9 <= *(byte *)((int)param_1 + 0x21));
      }
    }
    else {
      uVar9 = (uint)*(byte *)(param_1 + 8);
      if (uVar9 <= *(byte *)((int)param_1 + 0x21)) {
        do {
          if (_DAT_003fa10c == 0) {
            _DAT_003fa110 = in_MSR >> 0xf & 1;
          }
          _DAT_003fa10c = _DAT_003fa10c + 1;
          if ((*(byte *)(param_1[1] + uVar9) & 0x10) != 0) {
            iVar7 = uVar9 * 2;
            pbVar8 = (byte *)(param_1[2] + iVar7 + 1);
            *pbVar8 = *pbVar8 | *(byte *)(param_1[2] + iVar7);
            *(undefined *)(param_1[2] + iVar7) = 0;
          }
          *(byte *)(param_1[1] + uVar9) = *(byte *)(param_1[1] + uVar9) & 0x1f;
          _DAT_003fa10c = _DAT_003fa10c + -1;
          uVar9 = uVar9 + 1 & 0xff;
        } while (uVar9 <= *(byte *)((int)param_1 + 0x21));
      }
    }
  }
  else {
    *(undefined *)(iVar7 + 0x25) = 1;
    if (((param_2[*(byte *)((int)param_1 + 0x27)] ^ *param_2) & 0x10) == 0) {
      if ((*param_2 & 0x10) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 2;
      }
    }
    else {
      iVar7 = 1;
    }
    bVar10 = *(byte *)(param_1 + 8);
    uVar9 = 1;
    puVar4 = param_2;
    if (*(char *)((int)param_1 + 0x26) != '\0') {
      do {
        puVar4 = puVar4 + 1;
        if ((*puVar4 & 0xff) == 0xff) {
          if (_DAT_003fa10c == 0) {
            _DAT_003fa110 = in_MSR >> 0xf & 1;
          }
          _DAT_003fa10c = _DAT_003fa10c + 1;
          uVar6 = (uint)bVar10;
          uVar5 = uVar6 + 4;
          while ((uVar6 < uVar5 && (bVar10 <= *(byte *)((int)param_1 + 0x21)))) {
            if ((*(byte *)(param_1[1] + (uint)bVar10) & 0x10) != 0) {
              iVar2 = (uint)bVar10 * 2;
              pbVar8 = (byte *)(param_1[2] + iVar2 + 1);
              *pbVar8 = *pbVar8 | *(byte *)(param_1[2] + iVar2);
              *(undefined *)(param_1[2] + iVar2) = 0;
            }
            iVar2 = param_1[1];
            bVar1 = *(byte *)(iVar2 + (uint)bVar10);
            if ((bVar1 & 0x80) == 0) {
              *(byte *)(iVar2 + (uint)bVar10) = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
            }
            else {
              *(byte *)(iVar2 + (uint)bVar10) = bVar1 & 0xef | (bVar1 & 0xc) << 3;
            }
            bVar10 = bVar10 + 1;
            uVar6 = (uint)bVar10;
          }
          _DAT_003fa10c = _DAT_003fa10c + -1;
        }
        else {
          uVar6 = 0;
          do {
            if (*(byte *)((int)param_1 + 0x21) < bVar10) break;
            if (_DAT_003fa10c == 0) {
              _DAT_003fa110 = in_MSR >> 0xf & 1;
            }
            _DAT_003fa10c = _DAT_003fa10c + 1;
            if ((*(byte *)(param_1[1] + (uint)bVar10) & 0x10) != 0) {
              iVar2 = (uint)bVar10 * 2;
              pbVar8 = (byte *)(param_1[2] + iVar2 + 1);
              *pbVar8 = *pbVar8 | *(byte *)(param_1[2] + iVar2);
              *(undefined *)(param_1[2] + iVar2) = 0;
            }
            iVar2 = param_1[1];
            bVar1 = *(byte *)(iVar2 + (uint)bVar10);
            if ((bVar1 & 0x80) == 0) {
              *(byte *)(iVar2 + (uint)bVar10) = bVar1 & 0xaf | (bVar1 & 0xc) << 3 | 0x80;
            }
            else {
              *(byte *)(iVar2 + (uint)bVar10) = bVar1 & 0xef | (bVar1 & 0xc) << 3;
            }
            uVar5 = (int)(uint)*puVar4 >> (uVar6 & 0x3f) & 3;
            if (uVar5 == 0) {
              pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
              *pbVar8 = *pbVar8 | 2;
            }
            else if (uVar5 == 1) {
              if (iVar7 == 0) {
                if ((*(byte *)(param_1[1] + (uint)bVar10) & 0xb) == 0) {
                  pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                  *pbVar8 = *pbVar8 | 8;
                  iVar7 = 1;
                }
                else if ((*(byte *)(param_1[1] + (uint)bVar10) & 0xb) == 1) {
                  pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                  *pbVar8 = *pbVar8 | 4;
                  iVar7 = 1;
                }
                else {
                  uVar5 = (*puVar4 ^ 0xff) & ~(6 << (uVar6 & 0x3f));
                  uVar3 = 1;
                  if (*(byte *)((int)param_1 + 0x26) != 0) {
                    do {
                      if (uVar3 != uVar9) {
                        uVar5 = uVar5 | param_2[uVar3] ^ 0xff;
                      }
                      uVar3 = uVar3 + 1;
                    } while (uVar3 <= *(byte *)((int)param_1 + 0x26));
                  }
                  if (uVar5 == 0) {
                    pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                    *pbVar8 = *pbVar8 | 8;
                  }
                  else {
                    pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                    *pbVar8 = *pbVar8 | 0x10;
                    iVar7 = 1;
                  }
                }
              }
              else if (iVar7 == 1) {
                if ((*(byte *)(param_1[1] + (uint)bVar10) & 0xb) == 0) {
                  pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                  *pbVar8 = *pbVar8 | 8;
                }
                else if ((*(byte *)(param_1[1] + (uint)bVar10) & 0xb) == 1) {
                  pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                  *pbVar8 = *pbVar8 | 4;
                }
                else {
                  pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                  *pbVar8 = *pbVar8 | 0x10;
                }
              }
              else if (iVar7 == 2) {
                pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
                *pbVar8 = *pbVar8 | 4;
              }
            }
            else if (uVar5 == 2) {
              pbVar8 = (byte *)(param_1[2] + (uint)bVar10 * 2);
              *pbVar8 = *pbVar8 | 1;
            }
            _DAT_003fa10c = _DAT_003fa10c + -1;
            bVar10 = bVar10 + 1;
            uVar6 = uVar6 + 2;
          } while (uVar6 < 7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 <= *(byte *)((int)param_1 + 0x26));
    }
  }
  return;
}

