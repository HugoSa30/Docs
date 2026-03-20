/*
 * Program: n42.bin
 * Function: FUN_000c9984
 * Entry: 000c9984
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c9984(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (tpnt_aktiv == 2) {
    if (DAT_001c7f2b != '\0') {
      if (ikrma < 0x26) {
        bVar2 = 0x25 - ikrma;
      }
      else {
        bVar2 = ikrma - 0x25;
      }
      if (DAT_001c7f2e < bVar2 == (bool)E_hlpkrtp2) {
        DAT_005b9119 = DAT_001c7f2d;
      }
      else if ((DAT_005b9119 != 0) && (DAT_005b9119 = DAT_005b9119 - 1, DAT_005b9119 == 0)) {
        E_hlpkrtp2 = E_hlpkrtp2 == '\0';
        Z_hlpkrtp2 = 1;
        DAT_005b9117 = '\0';
        DAT_005b9119 = DAT_001c7f2d;
      }
      if ((DAT_005b9117 != '\0') && (DAT_005b9117 = DAT_005b9117 + -1, DAT_005b9117 == '\0')) {
        Z_hlpkrtp2 = 1;
      }
    }
    if ((((E_hlpkrtp2 == '\0') && (DAT_001c7f2c < nmot)) && (nmot <= DAT_001c79cb)) &&
       (DAT_001c7f2a != '\0')) {
      uVar3 = (uint)(short)igod_w;
      if ((int)uVar3 < 0) {
        if (uVar3 == 0xffff8000) {
          uVar3 = 0x7fff;
        }
        else {
          uVar3 = -uVar3;
        }
      }
      uVar1 = FUN_000a8c78(&DAT_001c7f30,DAT_005b947c);
      if ((uVar1 & 0xffff) < (uVar3 & 0xffff) == (bool)E_hlpkrtp) {
        DAT_005b9118 = DAT_001c7f2d;
      }
      else if ((DAT_005b9118 != 0) && (DAT_005b9118 = DAT_005b9118 - 1, DAT_005b9118 == 0)) {
        E_hlpkrtp = E_hlpkrtp == '\0';
        Z_hlpkrtp = 1;
        DAT_005b9116 = '\0';
        DAT_005b9118 = DAT_001c7f2d;
      }
      if ((DAT_005b9116 != '\0') && (DAT_005b9116 = DAT_005b9116 + -1, DAT_005b9116 == '\0')) {
        Z_hlpkrtp = 1;
      }
    }
  }
  if ((DAT_005b9118 < DAT_001c7f2d) || (DAT_005b9119 < DAT_001c7f2d)) {
    B_krntfv = 1;
  }
  else {
    B_krntfv = 0;
  }
  return;
}

