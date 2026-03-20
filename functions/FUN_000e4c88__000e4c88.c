/*
 * Program: n42.bin
 * Function: FUN_000e4c88
 * Entry: 000e4c88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4c88(void)

{
  byte bVar1;
  ENUM_005b8c02 EVar2;
  uint uVar3;
  short sVar4;
  
  if (B_airbag == '\0') {
    if (B_st != '\0') {
      DAT_003fb890 = DAT_003fb890 & 0xfb | 4;
    }
    if ((B_ekpubn & B_ekpd) == 0) {
      if (B_nmin == '\0') {
        B_ekpubn = B_ekpubn | B_ekpn;
      }
      else {
        B_ekpubn = B_ekpubn & ~B_ekpn;
        if ((DAT_003fb890 >> 1 & 1) == 0) {
          uVar3 = (uint)DAT_003fb88c - (uint)ub;
          if ((int)uVar3 < 0) {
            uVar3 = 0;
          }
          else if (0xff < (int)uVar3) {
            uVar3 = 0xff;
          }
          dekpub = (byte)uVar3;
          if ((uint)UBSTS < (uVar3 & 0xff)) {
            _DAT_003fb88a = (*(code *)&SUB_00064ab0)();
            DAT_003fb890 = DAT_003fb890 & 0xfd | 2;
            DAT_003fb889 = TZMIN;
          }
        }
        else if (DAT_003fb889 == '\0') {
          DAT_003fb890 = DAT_003fb890 & 0xfd;
        }
        else {
          DAT_003fb889 = DAT_003fb889 + -1;
        }
      }
      sVar4 = (*(code *)&SUB_00064ab0)();
      if ((sVar4 == _DAT_003fb88a) || ((DAT_003fb890 >> 1 & 1) == 0)) {
        B_ekpubn = B_ekpubn & ~B_ekpubn;
      }
      else {
        B_ekpubn = B_ekpubn | B_ekpubn;
      }
      if (((B_ekpubn & B_ekpn) != 0) || ((B_ekpubn & B_ekpubn) != 0)) {
        B_ekpubn = B_ekpubn | B_ekpd;
      }
      bVar1 = DAT_003fb890;
      if ((B_ekpubn & B_ekpd) == 0) {
        EVar2 = B_ekpubn;
        if ((DAT_003fb888 != '\0') && (DAT_003fb888 = DAT_003fb888 + -1, DAT_003fb888 == '\0')) {
          EVar2 = B_ekpubn & ~B_ekpvl;
        }
      }
      else {
        EVar2 = B_ekpubn & ~B_ekpvl;
      }
    }
    else {
      bVar1 = DAT_003fb890 & 0xfd;
      EVar2 = B_ekpubn & ~B_ekpvl;
      if ((B_nmin != '\0') && ((DAT_003fb890 >> 2 & 1) != 0)) {
        EVar2 = B_ekpubn & ~(B_ekpd|B_ekpvl);
      }
    }
    B_ekpubn = EVar2;
    DAT_003fb890 = bVar1;
    DAT_003fb88c = ub;
    if (((B_ekpubn & B_ekpd) == 0) && ((B_ekpubn & B_ekpvl) == 0)) {
      B_ekp = 0;
    }
    else {
      B_ekp = 1;
    }
  }
  else {
    B_ekp = 0;
  }
  return;
}

