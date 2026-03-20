/*
 * Program: n42.bin
 * Function: FUN_0011629c
 * Entry: 0011629c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011629c(void)

{
  bool bVar1;
  uint uVar2;
  
  if ((raster_um & 3) == 3) {
    uVar2 = (uint)aktqu_uc;
    DAT_003fa04e = (&DAT_001c0b24)[uVar2];
    DAT_003fa04f = (&DAT_001c0ae4)[uVar2];
    DAT_003fa050 = (&DAT_001c0af4)[uVar2];
    DAT_003fa051 = (&DAT_001c0b14)[uVar2];
    DAT_003fa052 = (&DAT_001c0ad4)[uVar2];
    DAT_005b8fc2 = (&DAT_001c0ac4)[uVar2];
    DAT_005b8fc4 = (&DAT_001c0b04)[uVar2];
    if (DAT_005b8fc4 < DAT_001c0b34) {
      _DAT_003f98b0 = 0;
      if (((DAT_003fa04e & 1) == 1) && ((DAT_003fa04e & 2) == 2)) {
        _DAT_003f98b0 = 0xc3;
      }
      else if ((DAT_003fa04e & 1) == 1) {
        if ((DAT_001c0ac1 & 1) == 1) {
          DAT_003f98b2 = 0;
        }
        else {
          DAT_003f98b2 = ~(DAT_003fa050 + DAT_003fa052);
        }
        if ((DAT_003fa050 == 0xff) || (DAT_003fa051 != DAT_003f98b2)) {
          _DAT_003f98b0 = 0xc3;
        }
      }
      else if ((DAT_003fa04e & 2) == 2) {
        DAT_003f98b2 = DAT_003fa051;
        if ((DAT_001c0ac1 & 1) != 1) {
          DAT_003f98b2 = DAT_003fa051 - DAT_003fa052;
        }
        if ((DAT_003fa051 == 0) || (DAT_003fa050 != (byte)~DAT_003f98b2)) {
          _DAT_003f98b0 = 0xc3;
        }
      }
      else if (((DAT_003fa04f != -1) || (DAT_003fa050 != 0xff)) || (DAT_003fa051 != 0)) {
        _DAT_003f98b0 = 0xc3;
      }
      DAT_003f98b5 = DAT_001c0ac0 & DAT_003fa052 - DAT_005b8fc2;
      DAT_003f98ac = DAT_003fa04f;
      DAT_003f98ad = DAT_003fa04e;
      DAT_003f98ae = DAT_003fa051;
      DAT_003f98af = DAT_003fa050;
      DAT_003f98b3 = DAT_003fa052;
      DAT_005b8fc2 = DAT_003fa052;
      if (_DAT_003f98b0 == 0) {
        DAT_005b8fc4 = 0;
        if ((DAT_003f98b5 == 0) && ((DAT_001c0ac1 & 1) == 0)) {
          bVar1 = true;
          mmsr_uc = 0;
        }
        else {
          bVar1 = false;
          if (((DAT_003fa04e & 1) == 1) ||
             ((((DAT_003fa04e & 2) != 2 || (DAT_003fa051 == 0)) ||
              (mmsr_uc = DAT_003fa051, DAT_003fa050 != (byte)~DAT_003f98b2)))) {
            mmsr_uc = 0;
          }
        }
      }
      else {
        DAT_005b8fc4 = DAT_005b8fc4 + 1;
        bVar1 = true;
        mmsr_uc = 0;
      }
    }
    else {
      bVar1 = true;
      mmsr_uc = 0;
    }
    abmsrc_uc = CONCAT11(DAT_005b8fc4,mmsr_uc);
    if (bVar1) {
      abmsrc_uc = abmsrc_uc | 0x8000;
    }
    DAT_003fbe82 = 0;
    DAT_003fbe81 = 0;
  }
  return;
}

