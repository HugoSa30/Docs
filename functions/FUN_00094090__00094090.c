/*
 * Program: n42.bin
 * Function: FUN_00094090
 * Entry: 00094090
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094090(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_50 [16];
  
  _DAT_003fa15c = 0;
  if (param_2 != 0) {
    bVar3 = true;
    piVar1 = (int *)(param_3 & 0xffffffc0);
    piVar5 = piVar1 + 0x10;
    if (piVar1 < piVar5) {
      do {
        if (*piVar1 != -1) {
          bVar3 = false;
        }
        piVar1 = piVar1 + 1;
      } while ((piVar1 < piVar5) && (bVar3));
      if (!bVar3) {
        _DAT_003fa15c = 0;
        return 0x200;
      }
    }
    bVar3 = true;
    piVar1 = param_1;
    if (param_1 < param_1 + param_2) {
      do {
        if (*piVar1 != -1) {
          bVar3 = false;
        }
        piVar1 = piVar1 + 1;
      } while ((piVar1 < param_1 + param_2) && (bVar3));
      if (!bVar3) {
        cVar2 = FUN_00094a38(0);
        if (cVar2 == '\0') {
          _DAT_003fa15c = _DAT_003fa15c | 1 << (0x1f - (param_3 >> 0xf) & 0x3f);
          uVar4 = param_3 >> 2 & 0xf;
          if ((int)param_2 < 0x10) {
            if ((param_3 & 0xffffffc0) == param_3) {
              uVar4 = 0;
              if (0 < (int)param_2) {
                param_1 = param_1 + -1;
                do {
                  param_1 = param_1 + 1;
                  local_50[uVar4] = *param_1;
                  uVar4 = uVar4 + 1 & 0xff;
                } while ((int)uVar4 < (int)param_2);
              }
              for (param_2 = param_2 & 0xff; param_2 < 0x10; param_2 = param_2 + 1 & 0xff) {
                local_50[param_2] = -1;
              }
            }
            else {
              uVar6 = 0;
              if (uVar4 != 0) {
                do {
                  local_50[uVar6] = -1;
                  uVar6 = uVar6 + 1 & 0xff;
                } while (uVar6 < uVar4);
              }
              if (uVar4 < 0x10) {
                param_1 = param_1 + -1;
                do {
                  param_1 = param_1 + 1;
                  local_50[uVar4] = *param_1;
                  uVar4 = uVar4 + 1 & 0xff;
                } while (uVar4 < 0x10);
              }
            }
          }
          else {
            uVar4 = 0;
            param_1 = param_1 + -1;
            do {
              param_1 = param_1 + 1;
              local_50[uVar4] = *param_1;
              uVar4 = uVar4 + 1 & 0xff;
            } while (uVar4 < 0x10);
          }
          cVar2 = FUN_00094b98(_DAT_003fa15c,local_50,param_3 & 0x7fc0,0);
          if (cVar2 == '\0') {
            do {
              do {
                cVar2 = FUN_00094d30();
              } while (cVar2 == '\x10');
            } while (cVar2 == '\x11');
          }
        }
        FUN_00095294();
        if (cVar2 != '\0') {
          return 0x1000;
        }
        return 0;
      }
    }
  }
  return 0;
}

