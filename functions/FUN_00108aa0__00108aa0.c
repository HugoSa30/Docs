/*
 * Program: n42.bin
 * Function: FUN_00108aa0
 * Entry: 00108aa0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108aa0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 in_TBLr;
  
  iVar6 = param_1[1];
  if ((*(byte *)(iVar6 + 0x42) & 0x80) == 0) {
    FUN_00108344();
  }
  else {
    iVar3 = *param_1;
    uVar1 = *(ushort *)(iVar3 + 0xc);
    uVar2 = _DAT_0030502a & *(ushort *)(iVar6 + 0x38);
    if ((uVar2 != 0) || (((uVar1 >> 7 & 1) != 0 && ((*(byte *)(iVar6 + 0x42) & 2) != 0)))) {
      _DAT_0030502a = 0;
      *(ushort *)(iVar6 + 0x30) = uVar1;
      *(undefined2 *)(iVar6 + 0x32) = *(undefined2 *)(iVar3 + 0xe);
      *(undefined4 *)(iVar6 + 0x28) = in_TBLr;
      if (uVar2 == 0x100) {
        iVar6 = param_1[1];
        *(short *)(iVar6 + 0x40) = *(short *)(iVar6 + 0x40) + 8;
        uVar7 = ((uint)*(ushort *)(iVar6 + 0x2c) - (uint)*(ushort *)(iVar6 + 0x40)) - 8;
        if (uVar7 < 9) {
          _DAT_00305028 = 0x40;
          *(undefined2 *)(iVar6 + 0x38) = 0;
        }
        else {
          uVar7 = 8;
        }
        if (*(char *)(iVar6 + 0x44) == '\0') {
          if (uVar7 != 0) {
            puVar9 = (undefined2 *)(&UNK_0030503c + uVar7 * 2);
            puVar8 = (undefined2 *)
                     (*(int *)(iVar6 + 0x10) + (uint)*(ushort *)(iVar6 + 0x40) * 2 + 0x10 +
                     uVar7 * 2);
            do {
              puVar8 = puVar8 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar8;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
        else if (uVar7 != 0) {
          puVar5 = (ushort *)(&UNK_0030503c + uVar7 * 2);
          pbVar10 = (byte *)(*(int *)(iVar6 + 0x10) + (uint)*(ushort *)(iVar6 + 0x40) + 8 + uVar7);
          do {
            pbVar10 = pbVar10 + -1;
            puVar5 = puVar5 + -1;
            *puVar5 = *pbVar10 | 0xff00;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else if (uVar2 == 0x200) {
        iVar6 = param_1[1];
        *(short *)(iVar6 + 0x40) = *(short *)(iVar6 + 0x40) + 8;
        uVar7 = (uint)*(ushort *)(iVar6 + 0x2c) - (uint)*(ushort *)(iVar6 + 0x40);
        if (uVar7 < 0x19) {
          if (uVar7 < 0x11) {
            _DAT_00305028 = (short)uVar7 - 9U | 0x50;
            *(undefined2 *)(iVar6 + 0x38) = 0;
            iVar3 = uVar7 - 8;
          }
          else {
            _DAT_00305028 = (short)uVar7 - 9U | 0x150;
            *(undefined2 *)(iVar6 + 0x38) = 0x100;
            iVar3 = 8;
          }
        }
        else {
          _DAT_00305028 = 0x35f;
          iVar3 = 8;
        }
        if (*(char *)(iVar6 + 0x44) == '\0') {
          if (iVar3 != 0) {
            puVar9 = (undefined2 *)(&UNK_0030502c + iVar3 * 2);
            puVar8 = (undefined2 *)
                     (*(int *)(iVar6 + 0x10) + (uint)*(ushort *)(iVar6 + 0x40) * 2 + 0x10 +
                     iVar3 * 2);
            do {
              puVar8 = puVar8 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else if (iVar3 != 0) {
          puVar5 = (ushort *)(&UNK_0030502c + iVar3 * 2);
          pbVar10 = (byte *)(*(int *)(iVar6 + 0x10) + (uint)*(ushort *)(iVar6 + 0x40) + 8 + iVar3);
          do {
            pbVar10 = pbVar10 + -1;
            puVar5 = puVar5 + -1;
            *puVar5 = *pbVar10 | 0xff00;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (uVar2 == 0x400) {
        *(undefined *)(param_1[1] + 0x3c) = 0;
        *(undefined *)(param_1[1] + 0x3d) = 0;
        iVar6 = param_1[1];
        uVar7 = (uint)*(ushort *)(iVar6 + 0x3e);
        uVar11 = *(ushort *)(iVar6 + 0x2e) - uVar7;
        if (8 < uVar11) {
          uVar11 = 8;
        }
        if (*(char *)(iVar6 + 0x44) == '\0') {
          if (uVar11 != 0) {
            puVar9 = (undefined2 *)(*(int *)(iVar6 + 0x14) + uVar7 * 2 + uVar11 * 2);
            puVar8 = (undefined2 *)(&UNK_0030505c + uVar11 * 2);
            uVar7 = uVar11;
            do {
              puVar8 = puVar8 + -1;
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar8;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
        else if (uVar11 != 0) {
          puVar4 = (undefined *)(*(int *)(iVar6 + 0x14) + uVar7 + uVar11);
          puVar8 = (undefined2 *)(&UNK_0030505c + uVar11 * 2);
          uVar7 = uVar11;
          do {
            puVar8 = puVar8 + -1;
            puVar4 = puVar4 + -1;
            *puVar4 = (char)*puVar8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar6 = param_1[1];
        *(short *)(iVar6 + 0x3e) = *(short *)(iVar6 + 0x3e) + (short)uVar11;
        if ((uVar11 & 0xffff) < 8) {
          _DAT_00305028 = 0;
          *(undefined *)(iVar6 + 0x42) = 0;
          (**(code **)(param_1[1] + 8))();
        }
      }
      else {
        if (uVar2 == 0x800) {
          *(undefined *)(param_1[1] + 0x3c) = 0;
          *(undefined *)(param_1[1] + 0x3d) = 0;
          iVar6 = param_1[1];
          uVar7 = (uint)*(ushort *)(iVar6 + 0x3e);
          uVar11 = *(ushort *)(iVar6 + 0x2e) - uVar7;
          if (8 < uVar11) {
            uVar11 = 8;
          }
          if (*(char *)(iVar6 + 0x44) == '\0') {
            if (uVar11 != 0) {
              puVar9 = (undefined2 *)(*(int *)(iVar6 + 0x14) + uVar7 * 2 + uVar11 * 2);
              puVar8 = (undefined2 *)(&UNK_0030504c + uVar11 * 2);
              uVar7 = uVar11;
              do {
                puVar8 = puVar8 + -1;
                puVar9 = puVar9 + -1;
                *puVar9 = *puVar8;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          else if (uVar11 != 0) {
            puVar4 = (undefined *)(*(int *)(iVar6 + 0x14) + uVar7 + uVar11);
            puVar8 = (undefined2 *)(&UNK_0030504c + uVar11 * 2);
            uVar7 = uVar11;
            do {
              puVar8 = puVar8 + -1;
              puVar4 = puVar4 + -1;
              *puVar4 = (char)*puVar8;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          *(short *)(param_1[1] + 0x3e) = *(short *)(param_1[1] + 0x3e) + (short)uVar11;
          if (7 < (uVar11 & 0xffff)) {
            return;
          }
          _DAT_00305028 = 0;
          iVar6 = 8;
        }
        else {
          iVar6 = param_1[1];
          *(undefined2 *)(iVar6 + 0x40) = *(undefined2 *)(iVar6 + 0x2c);
          _DAT_00305028 = 0;
          iVar3 = *param_1;
          *(ushort *)(iVar3 + 10) = *(ushort *)(iVar6 + 0x36) & 0xffdf;
          if ((*(ushort *)(iVar3 + 0xc) >> 6 & 1) != 0) {
            *(ushort *)(iVar6 + 0x30) = *(ushort *)(iVar3 + 0xc);
            *(undefined2 *)(iVar6 + 0x32) = *(undefined2 *)(iVar3 + 0xe);
          }
          iVar6 = 4;
        }
        *(undefined *)(param_1[1] + 0x42) = 0;
        (**(code **)(param_1[1] + iVar6))();
      }
    }
  }
  return;
}

