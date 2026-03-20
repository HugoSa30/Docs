/*
 * Program: n42.bin
 * Function: FUN_0011cac4
 * Entry: 0011cac4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0011cac4(int *param_1)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  
  if (*(short *)((int)param_1 + 6) == 2) {
    if (*(char *)(*param_1 + 1) == '\0') {
      if (top_w < 0xf) {
        bVar3 = 0;
        bVar2 = 0x13;
        if ((DAT_00ffe146 | DAT_00ffe147) == 0) {
          bVar2 = 2;
          if (((DAT_00ffe186 | DAT_00ffe187) == 0) &&
             (bVar2 = 1, (DAT_00ffe1c6 | DAT_00ffe1c7) == 0)) {
            bVar2 = 0;
          }
          if ((((DAT_00ffe189 == -0x55) && (DAT_00ffe188 == 'r')) &&
              ((DAT_00ffe186 & DAT_00ffe187) == 0xff)) ||
             (((DAT_00ffe1c9 == -0x55 && (DAT_00ffe1c8 == 'r')) &&
              ((DAT_00ffe1c6 & DAT_00ffe1c7) == 0xff)))) {
            bVar3 = 0x10;
          }
        }
        *(byte *)(*param_1 + 1) = bVar3 | bVar2;
        return 2;
      }
      uVar1 = 0x22;
    }
    else {
      uVar1 = 0x12;
    }
  }
  else {
    uVar1 = 0x12;
  }
  *(undefined *)*param_1 = uVar1;
  return 1;
}

