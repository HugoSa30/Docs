/*
 * Program: n42.bin
 * Function: calc_tprel
 * Entry: 000cf098
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_tprel(void)

{
  byte bVar1;
  
  DAT_003faa88 = B_tprel & B_bm;
  if ((B_tprel & B_bm) == 0) {
    if (zzvirt == _DAT_003faa82) {
      if (nmn10msctr != 0xff) {
        nmn10msctr = nmn10msctr + 1;
      }
    }
    else {
      _DAT_003faa82 = (ushort)zzvirt;
      nmn10msctr = 0;
    }
  }
  else if (_DAT_003faa82 == zzkwas_w) {
    if (nmn10msctr != 0xff) {
      nmn10msctr = nmn10msctr + 1;
    }
  }
  else {
    _DAT_003faa82 = zzkwas_w;
    nmn10msctr = 0;
  }
  if (((((B_tprel & B_zprel) != 0) && (tseg_l <= 300000000 / NMIN)) && (DAT_003faa84 == '\0')) &&
     (nmn10msctr < 10)) {
    B_nmot = 1;
    B_nmin = '\0';
  }
  if ((4 < nmn10msctr) && ((B_tprel & B_bm) != 0)) {
    B_nmot = 0;
    B_nmin = '\x01';
  }
  if (DAT_003faa87 != '\0') {
    B_nmot = 0;
    B_nmin = '\x01';
    DAT_003faa87 = '\0';
  }
  if (B_nmin == '\0') {
    DAT_003faa85 = '\0';
  }
  else if (DAT_003faa85 == '\0') {
    DAT_003faa85 = '\x01';
    DAT_003faa84 = '\x01';
  }
  bVar1 = B_tprel >> 2 & 1;
  if (bVar1 == 0) {
    DAT_003faa86 = '\0';
  }
  else if (DAT_003faa86 == '\0') {
    DAT_003faa86 = '\x01';
    nmn10msctr = 0;
  }
  if ((bVar1 != 0) && (nmn10msctr == 0x14)) {
    B_nmot = 0;
    B_nmin = '\x01';
    FUN_000b4838(2);
  }
  return;
}

