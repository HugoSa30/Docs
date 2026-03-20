/*
 * Program: n42.bin
 * Function: FUN_00101dc8
 * Entry: 00101dc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00101dc8(undefined4 param_1,byte **param_2)

{
  byte *pbVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined uVar6;
  int iVar7;
  uint uVar8;
  
  if (*(short *)((int)param_2 + 6) == 2) {
    pbVar5 = *param_2;
    uVar4 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1] & 0xffff;
    if (uVar4 < 0x2504) {
      if (uVar4 == 0x2503) {
        iVar7 = 1;
      }
      else if (uVar4 == 0x2500) {
        iVar7 = 2;
      }
      else if (uVar4 == 0x2501) {
        iVar7 = 4;
      }
      else {
        if (uVar4 != 0x2502) goto LAB_00101f2c;
        iVar7 = 0;
      }
    }
    else if (uVar4 == 0x2504) {
      iVar7 = 3;
    }
    else {
      if (uVar4 != 0x2506) goto LAB_00101f2c;
      iVar7 = 5;
    }
    *pbVar5 = (byte)(uVar4 >> 8);
    pbVar5[1] = (byte)uVar4;
    pbVar5 = pbVar5 + 2;
    uVar3 = 2;
    uVar4 = 0;
    if (*(char *)(iVar7 * 8 + 0xf02404) != '\0') {
      iVar2 = iVar7 * 8;
      uVar3 = 2;
      do {
        uVar8 = 0;
        if (*(char *)(*(int *)(iVar2 + 0xf02408) + uVar4 * 8) != '\0') {
          pbVar1 = pbVar5 + -1;
          do {
            pbVar5 = pbVar1;
            pbVar1 = pbVar5 + 1;
            *pbVar1 = *(byte *)(*(int *)(*(int *)(iVar2 + 0xf02408) + uVar4 * 8 + 4) + uVar8);
            uVar8 = uVar8 + 1 & 0xff;
          } while (uVar8 < *(byte *)(*(int *)(iVar2 + 0xf02408) + uVar4 * 8));
          pbVar5 = pbVar5 + 2;
        }
        uVar3 = uVar3 + *(byte *)(*(int *)(iVar2 + 0xf02408) + uVar4 * 8);
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < *(byte *)(iVar7 * 8 + 0xf02404));
    }
    *(ushort *)(param_2 + 2) = uVar3 & 0xff;
    uVar6 = 1;
  }
  else {
LAB_00101f2c:
    **param_2 = 0x12;
    *(undefined2 *)(param_2 + 2) = 1;
    uVar6 = 2;
  }
  *(undefined *)((int)param_2 + 10) = uVar6;
  return;
}

