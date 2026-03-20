/*
 * Program: n42.bin
 * Function: FUN_00108850
 * Entry: 00108850
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108850(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar7;
  uint uVar6;
  undefined4 in_TBLr;
  
  _5();
  uVar3 = *(uint *)(param_1[1] + 0x42);
  *param_2 = *(undefined4 *)(param_1[1] + 0x3e);
  param_2[1] = uVar3 & 0xffff0000;
  uVar1 = _DAT_0030502a;
  if ((*(byte *)(param_2 + 1) & 0x80) != 0) {
    bVar7 = *(byte *)(param_2 + 1) & 0x7f;
    *(byte *)(param_2 + 1) = bVar7;
    if (bVar7 == 1) {
      if ((uVar1 & 0xc00) == 0) {
        uVar6 = uVar1 >> 4 & 7;
        iVar2 = param_1[1];
        uVar3 = (uint)*(ushort *)(iVar2 + 0x2e) - (uint)*(ushort *)param_2 & 0xffff;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        if ((uVar1 & 0x80) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 8;
        }
        *(ushort *)param_2 = *(ushort *)param_2 + (short)uVar6;
        if (*(byte *)(iVar2 + 0x3c) != uVar6) {
          *(char *)(iVar2 + 0x3c) = (char)uVar6;
          if (*(byte *)(param_1[1] + 0x3d) != uVar6) {
            *(char *)(param_1[1] + 0x3d) = (char)uVar6;
            *(undefined4 *)(param_1[1] + 0x28) = in_TBLr;
          }
          iVar2 = param_1[1];
          if (*(char *)(iVar2 + 0x44) == '\0') {
            uVar1 = *(ushort *)(iVar2 + 0x3e);
            iVar2 = *(int *)(iVar2 + 0x14);
            while (uVar6 != 0) {
              uVar6 = uVar6 + 0xffff & 0xffff;
              *(undefined2 *)(iVar2 + (uint)uVar1 * 2 + uVar6 * 2) =
                   *(undefined2 *)(&UNK_0030504c + (uVar6 + iVar5) * 2);
            }
          }
          else {
            iVar4 = *(int *)(iVar2 + 0x14);
            uVar1 = *(ushort *)(iVar2 + 0x3e);
            while (uVar6 != 0) {
              uVar6 = uVar6 + 0xffff & 0xffff;
              *(char *)(iVar4 + (uint)uVar1 + uVar6) =
                   (char)*(undefined2 *)(&UNK_0030504c + (uVar6 + iVar5) * 2);
            }
          }
          iVar2 = *param_1;
          iVar5 = param_1[1];
          *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(iVar2 + 0xc);
          *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(iVar2 + 0xe);
        }
      }
    }
    else {
      *(ushort *)((int)param_2 + 2) =
           *(ushort *)((int)param_2 + 2) + (uVar1 & 7) + (uVar1 | 0x100) * 2;
    }
  }
  _6();
  return;
}

