/*
 * Program: n42.bin
 * Function: calc_uddss
 * Entry: 000c73e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_uddss(void)

{
  if ((DAT_003faf72 & 1) != 0) {
    _DAT_003faf6c = 0;
    _DAT_003faf70 = 0;
    DAT_003faf72 = DAT_003faf72 & 0xfe;
  }
  if ((_DAT_003faf70 != -1) || (_DAT_003faf6c != 0xffffffff)) {
    _DAT_003faf6c = _DAT_003faf6c + uddss_w;
    if (_DAT_003faf6c < uddss_w) {
      _DAT_003faf6c = 0xffffffff;
    }
    _DAT_003faf70 = _DAT_003faf70 + 1;
  }
  return;
}

