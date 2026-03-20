/*
 * Program: n42.bin
 * Function: FUN_000e3630
 * Entry: 000e3630
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3630(void)

{
  uint uVar1;
  
  if ((B_dsla == '\0') && (B_fasla == '\0')) {
    if (B_kh == '\0') {
      flamkh = 0;
    }
    else {
      if (((uint)DAT_003f9ba3 << 8 < (uint)imlpr_w) && (DAT_003f9ba2 != 0xff)) {
        _DAT_003f9bf8 = _DAT_003f9bf6;
        uVar1 = FUN_000a7fe8(_ZKLAMKH,0xff);
        _DAT_003f9bf6 = (ushort)uVar1;
        if ((uint)_DAT_003f9bf8 == (uVar1 & 0xffff)) {
          DAT_003f9ba2 = DAT_003f9ba2 + 1;
        }
        else {
          DAT_003f9bf6 = (byte)(uVar1 >> 8);
          DAT_003f9ba2 = DAT_003f9bf6;
        }
      }
      flamkh = (byte)((uint)DAT_003f9ba2 * (uint)fkhab >> 8);
    }
  }
  else {
    flamkh = 0xff;
  }
  return;
}

