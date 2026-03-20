/*
 * Program: n42.bin
 * Function: FUN_001067e4
 * Entry: 001067e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001067e4(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int local_58 [17];
  
  _DAT_003fb94c = 0;
  if (param_2 != 0) {
    bVar1 = true;
    piVar2 = (int *)(param_3 & 0xffffffc0);
    piVar4 = piVar2 + 0x10;
    if (piVar2 < piVar4) {
      do {
        if (*piVar2 != -1) {
          bVar1 = false;
        }
        piVar2 = piVar2 + 1;
      } while ((piVar2 < piVar4) && (bVar1));
      if (!bVar1) {
        _DAT_003fb94c = 0;
        return 0x200;
      }
    }
    bVar1 = true;
    piVar2 = param_1;
    if (param_1 < param_1 + param_2) {
      do {
        if (*piVar2 != -1) {
          bVar1 = false;
        }
        piVar2 = piVar2 + 1;
      } while ((piVar2 < param_1 + param_2) && (bVar1));
      if (!bVar1) {
        iVar3 = FUN_00107298(0);
        if (iVar3 == 0) {
          _DAT_003fb94c = _DAT_003fb94c | 1 << (0x1f - (param_3 >> 0xf) & 0x3f);
          uVar5 = param_3 >> 2 & 0xf;
          if ((int)param_2 < 0x10) {
            if ((param_3 & 0xffffffc0) == param_3) {
              uVar5 = 0;
              if (0 < (int)param_2) {
                param_1 = param_1 + -1;
                do {
                  param_1 = param_1 + 1;
                  local_58[uVar5] = *param_1;
                  uVar5 = uVar5 + 1 & 0xff;
                } while ((int)uVar5 < (int)param_2);
              }
              for (param_2 = param_2 & 0xff; param_2 < 0x10; param_2 = param_2 + 1 & 0xff) {
                local_58[param_2] = -1;
              }
            }
            else {
              uVar6 = 0;
              if (uVar5 != 0) {
                do {
                  local_58[uVar6] = -1;
                  uVar6 = uVar6 + 1 & 0xff;
                } while (uVar6 < uVar5);
              }
              if (uVar5 < 0x10) {
                param_1 = param_1 + -1;
                do {
                  param_1 = param_1 + 1;
                  local_58[uVar5] = *param_1;
                  uVar5 = uVar5 + 1 & 0xff;
                } while (uVar5 < 0x10);
              }
            }
          }
          else {
            uVar5 = 0;
            param_1 = param_1 + -1;
            do {
              param_1 = param_1 + 1;
              local_58[uVar5] = *param_1;
              uVar5 = uVar5 + 1 & 0xff;
            } while (uVar5 < 0x10);
          }
          iVar3 = FUN_001073ec(_DAT_003fb94c,local_58,param_3 & 0x7fc0,0);
          if (iVar3 == 0) {
            do {
              do {
                iVar3 = FUN_001075dc();
                _();
              } while (iVar3 == 0x10);
            } while (iVar3 == 0x11);
          }
        }
        FUN_00107c50();
        if (iVar3 != 0) {
          return 0x1000;
        }
        return 0;
      }
    }
  }
  return 0;
}

