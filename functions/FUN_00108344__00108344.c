/*
 * Program: n42.bin
 * Function: FUN_00108344
 * Entry: 00108344
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00108344(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint **ppuVar7;
  uint *puVar8;
  int in_TBLr;
  
  iVar4 = *param_1;
  uVar1 = *(ushort *)(iVar4 + 0xc);
  if ((uVar1 >> 6 & 1) == 0) {
    if ((uVar1 >> 4 & 1) == 0) {
      return;
    }
    ppuVar7 = (uint **)param_1[1];
    if (ppuVar7[6] == (uint *)0x0) {
      return;
    }
    *(ushort *)((int)ppuVar7 + 0x36) = *(ushort *)((int)ppuVar7 + 0x36) & 0xffef;
    *(undefined2 *)(iVar4 + 10) = *(undefined2 *)((int)ppuVar7 + 0x36);
    uVar5 = (in_TBLr - *(int *)(param_1[1] + 0x20)) - *(int *)(param_1[1] + 0x18);
    if (*ppuVar7 != (uint *)0x0) {
      uVar3 = **ppuVar7;
      while (uVar3 < uVar5) {
        puVar8 = *ppuVar7;
        if ((puVar8[1] == 0) || (uVar5 < puVar8[1])) {
          *ppuVar7 = *(uint **)puVar8[3];
          (*(code *)puVar8[2])(*(undefined4 *)(param_1[1] + 0x18));
        }
        else {
          ppuVar7 = (uint **)puVar8[3];
        }
        if (*ppuVar7 == (uint *)0x0) break;
        uVar3 = **ppuVar7;
      }
    }
    *(undefined4 *)(param_1[1] + 0x18) = 0;
    return;
  }
  iVar6 = param_1[1];
  *(ushort *)(iVar6 + 0x30) = uVar1;
  *(undefined2 *)(iVar6 + 0x32) = *(undefined2 *)(iVar4 + 0xe);
  FUN_00109680();
  iVar4 = param_1[1];
  if (*(char *)(iVar4 + 0x42) == '\x01') {
    if (*(char *)(iVar4 + 0x44) == '\0') {
      *(undefined2 *)(*(int *)(iVar4 + 0x14) + (uint)*(ushort *)(iVar4 + 0x3e) * 2) =
           *(undefined2 *)(iVar4 + 0x32);
    }
    else {
      *(char *)(*(int *)(iVar4 + 0x14) + (uint)*(ushort *)(iVar4 + 0x3e)) =
           (char)*(undefined2 *)(iVar4 + 0x32);
    }
    iVar4 = param_1[1];
    *(short *)(iVar4 + 0x3e) = *(short *)(iVar4 + 0x3e) + 1;
    if (*(ushort *)(iVar4 + 0x3e) < *(ushort *)(iVar4 + 0x2e)) goto LAB_00108478;
    iVar4 = 8;
  }
  else {
    if (*(char *)(iVar4 + 0x42) != '\x02') goto LAB_00108478;
    uVar2 = *(short *)(iVar4 + 0x40) + 1;
    *(ushort *)(iVar4 + 0x40) = uVar2;
    uVar5 = (uint)uVar2;
    if (uVar5 < *(ushort *)(iVar4 + 0x2c)) {
      if (*(char *)(iVar4 + 0x44) == '\0') {
        *(undefined2 *)(*param_1 + 0xe) = *(undefined2 *)(*(int *)(iVar4 + 0x10) + uVar5 * 2);
      }
      else {
        *(ushort *)(*param_1 + 0xe) = *(byte *)(*(int *)(iVar4 + 0x10) + uVar5) | 0xff00;
      }
      goto LAB_00108478;
    }
    iVar4 = 4;
  }
  *(undefined *)(param_1[1] + 0x42) = 0;
  (**(code **)(param_1[1] + iVar4))();
LAB_00108478:
  if ((uVar1 >> 1 & 1) == 0) {
    *(ushort *)(param_1[1] + 0x36) = *(ushort *)(param_1[1] + 0x36) & 0xffef;
  }
  else {
    iVar4 = param_1[1];
    *(uint *)(iVar4 + 0x18) = in_TBLr - *(int *)(iVar4 + 0x20) | 1;
    if ((*(ushort *)(iVar4 + 0x36) >> 5 & 1) == 0) {
      return;
    }
    *(ushort *)(iVar4 + 0x36) = *(ushort *)(iVar4 + 0x36) | 0x10;
  }
  *(undefined2 *)(*param_1 + 10) = *(undefined2 *)(param_1[1] + 0x36);
  return;
}

