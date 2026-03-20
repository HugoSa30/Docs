/*
 * Program: n42.bin
 * Function: FUN_000f9f90
 * Entry: 000f9f90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f9f90(int param_1,byte param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar1 = _DAT_003fc5b0;
  if (DAT_003fc98c < DAT_003fc5b5) {
    iVar3 = -2;
  }
  else {
    uVar6 = (uint)(byte)(DAT_003fc98d + 1U);
    bVar2 = DAT_003fc98d + 1U & 1;
    if (param_1 == 0) {
      if (bVar2 != 0) {
        uVar6 = 0;
      }
    }
    else if (bVar2 == 0) {
      uVar6 = 1;
    }
    uVar5 = (uint)DAT_003fc5ad;
    uVar8 = uVar5;
    if (uVar5 != 0) {
      do {
        if ((uVar5 <= uVar6) && (uVar6 = 0, param_1 != 0)) {
          uVar6 = 1;
        }
        cVar4 = (*(code *)&SUB_00069f20)(pcVar1,uVar6,&DAT_003fc984);
        if (cVar4 != '\0') {
          uVar8 = uVar6 + 1;
          pcVar7 = pcVar1 + -1;
          if (((uVar6 + 1 & 1) == 0) ||
             (param_2 = param_2 + *pcVar1, uVar8 = uVar6, pcVar7 = pcVar1, uVar6 != 0)) {
            uVar8 = uVar8 >> 1;
            do {
              pcVar1 = pcVar7 + 1;
              pcVar7 = pcVar7 + 2;
              param_2 = param_2 + *pcVar1 + *pcVar7;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (0x77 < param_2) {
            param_2 = param_2 + 0x88;
          }
          DAT_003fc98d = (char)uVar6;
          return (int)(short)(ushort)param_2;
        }
        uVar6 = uVar6 + 2 & 0xff;
        uVar8 = uVar8 - 2;
      } while (0 < (int)uVar8);
    }
    iVar3 = -1;
  }
  return iVar3;
}

