/*
 * Program: n42.bin
 * Function: FUN_00107298
 * Entry: 00107298
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00107298(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (DAT_005b8008 == -1) {
    uVar1 = 0x94;
  }
  else {
    uVar4 = 0;
    do {
      iVar2 = (&DAT_005b800c)[uVar4];
      iVar3 = 200;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
      do {
        if ((*(uint *)(iVar2 + 8) & 0x80000000) == 0) break;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar3 == 0) {
        return 0x92;
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < 2);
    FUN_00106d9c();
    uVar4 = 0;
    DAT_003fb962 = 0;
    do {
      puVar5 = (uint *)(&DAT_005b800c)[uVar4];
      if ((puVar5[2] & 0x20) == 0) {
        return 0x87;
      }
      if (param_1 == 0) {
        *puVar5 = *puVar5 & 0xffffff00;
        DAT_003fb962 = 2;
        uVar6 = DAT_005b8014;
LAB_00107390:
        puVar5[2] = uVar6;
      }
      else {
        if (param_1 == 1) {
          *puVar5 = *puVar5 & 0xffffff00;
          DAT_003fb962 = 1;
          uVar6 = DAT_005b8034;
          goto LAB_00107390;
        }
        if ((param_1 == 2) || (param_1 == 3)) {
          return 0x93;
        }
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < 2);
    uVar1 = 0;
  }
                    /* WARNING: Read-only address (ram,0x005b8034) is written */
  return uVar1;
}

