/*
 * Program: n42.bin
 * Function: FUN_001a4d74
 * Entry: 001a4d74
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_001a4d74(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  
  piVar4 = (int *)(*(int *)(DAT_005ba9f0 + 0x14) + param_1 * 0xc);
  pbVar3 = (byte *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1 * 0xc);
  bVar6 = *pbVar3;
  if (bVar6 < 0xc) {
    if (bVar6 != 0xb) {
      if ((bVar6 == 5) || (bVar6 == 7)) {
        uVar5 = 0;
        if (*(char *)(piVar4 + 2) != '\0') {
          do {
            uVar1 = FUN_0010ef08(*(undefined *)(*piVar4 + uVar5),0);
            if (((uVar1 & 8) == 8) ||
               (uVar1 = FUN_0010ef08(*(undefined *)(*piVar4 + uVar5),0), (uVar1 & 1) == 1)) {
              bVar6 = 9;
              goto LAB_001a4fc0;
            }
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < *(byte *)(piVar4 + 2));
        }
      }
      else if ((bVar6 == 10) && (uVar5 = 0, *(char *)(piVar4 + 2) != '\0')) {
        do {
          uVar1 = FUN_0010ef08(*(undefined *)(*piVar4 + uVar5),0);
          if (((uVar1 & 8) == 8) ||
             (uVar1 = FUN_0010ef08(*(undefined *)(*piVar4 + uVar5),0), (uVar1 & 1) == 1)) {
            FUN_0010f6d0(*(undefined *)(*piVar4 + uVar5),*(undefined4 *)(pbVar3 + 8),
                         *(undefined2 *)(pbVar3 + 4));
            pbVar3[1] = *(byte *)(*piVar4 + uVar5);
            bVar6 = 0xb;
            goto LAB_001a4fc0;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < *(byte *)(piVar4 + 2));
      }
      goto LAB_001a4fc4;
    }
    uVar5 = FUN_0010ef08(pbVar3[1],0);
    if ((uVar5 & 1) != 1) goto LAB_001a4fc4;
    DAT_005ba9f4 = *(byte *)(*(int *)(DAT_005baa10 + 0x10) + (uint)pbVar3[1] * 0x18 + 0xe);
    iVar2 = FUN_0010ace8();
    if ((iVar2 == 1) && (DAT_005ba9fc == 1)) {
      DAT_005ba9f4 = *(byte *)(*(int *)(DAT_005ba9f0 + 0x1c) + (uint)DAT_005ba9f4 + -0xe8);
    }
    if (DAT_005ba9fc != 2) {
      _5(pbVar3[1],0,0,0,0);
    }
    bVar6 = 7;
  }
  else if (bVar6 == 0xc) {
    uVar5 = FUN_0010ef08(pbVar3[2],0);
    if ((uVar5 & 1) != 1) goto LAB_001a4fc4;
    bVar6 = 5;
  }
  else {
    if ((bVar6 != 0xd) || (iVar2 = (*DAT_005baa20)(pbVar3[2],DAT_005ba9f6), iVar2 != 0))
    goto LAB_001a4fc4;
    bVar6 = 0xc;
  }
LAB_001a4fc0:
  *pbVar3 = bVar6;
LAB_001a4fc4:
  return *pbVar3;
}

