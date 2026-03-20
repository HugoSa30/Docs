/*
 * Program: n42.bin
 * Function: FUN_00170bfc
 * Entry: 00170bfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170bfc(void)

{
  bool bVar1;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  local_28 = _E_brems;
  if (B_bl == '\0') {
    DAT_003fae00 = TVERBR;
    B_erbr = false;
    _DAT_003fae02 = _TSTAEBR;
    B_staebr = '\0';
  }
  else {
    bVar1 = DAT_003fae00 != '\0';
    if (bVar1) {
      DAT_003fae00 = DAT_003fae00 + -1;
    }
    B_erbr = !bVar1;
    if ((CWGGEGAS & 1) == 0) {
      _DAT_003fae02 = _TSTAEBR;
      B_staebr = '\0';
    }
    else if (_DAT_003fae02 == 0) {
      B_staebr = '\x01';
    }
    else {
      _DAT_003fae02 = _DAT_003fae02 + -1;
      B_staebr = '\0';
    }
  }
  if ((bool)B_erbr == false) {
    if (B_br != '\0') {
      if (B_bl != '\0') {
        DAT_003fae04 = '\x01';
      }
      goto LAB_00170d88;
    }
LAB_00170d90:
    if ((B_bl == '\0') && (DAT_003fae04 != '\0')) {
      local_28 = _E_brems & 0xd0fc | 0x2002;
      ctrerbr = 0;
      goto LAB_00170e20;
    }
  }
  else {
    DAT_003fae04 = '\0';
LAB_00170d88:
    if (B_br == '\0') goto LAB_00170d90;
  }
  if ((((bool)B_erbr != false) && (DAT_003fae05 == '\0')) && (ctrerbr < ZERBR)) {
    ctrerbr = ctrerbr + 1;
  }
LAB_00170e20:
  if ((ZERBR <= ctrerbr) || (B_staebr != '\0')) {
    local_28 = local_28 & 0xd0fc | 0x2803;
  }
  DAT_003fae05 = B_erbr;
  local_24[0] = local_28;
  local_1c = local_24;
  local_20[0] = local_28;
  func_0xff222958(7,local_20);
  return;
}

