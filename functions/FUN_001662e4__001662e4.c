/*
 * Program: n42.bin
 * Function: FUN_001662e4
 * Entry: 001662e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001662e4(void)

{
  ushort uVar1;
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _DAT_003fdf62;
  if ((B_cdswe & B_cdlatp) == 0) {
    local_20 = _DAT_003fdf62 & 0xd0fc | 0x2002;
  }
  else {
    if (((_DAT_001cf0ce < frm_w) && (frm2_w < _DAT_001cf0d0)) ||
       ((frm_w < _DAT_001cf0d0 && (_DAT_001cf0ce < frm2_w)))) {
      if (_DAT_003faad8 == 0) {
        B_elsuv = '\x01';
        local_20 = _DAT_003fdf62 & 0xd0fc | 0x2803;
      }
      else {
        _DAT_003faad8 = _DAT_003faad8 + -1;
      }
    }
    else {
      _DAT_003faad8 = _DAT_001cf0d2;
    }
    if ((B_lrs != '\0') && (B_lrs2 != '\0')) {
      if (_DAT_003faada == 0) {
        uVar1 = local_20 & 0xdffd;
        local_20 = uVar1 | 0x2002;
        if (B_elsuv == '\0') {
          local_20 = CONCAT11(local_20._0_1_,(char)uVar1) & 0xf0fe | 2;
        }
      }
      else {
        _DAT_003faada = _DAT_003faada + -1;
      }
    }
  }
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0x80,local_18);
  return;
}

