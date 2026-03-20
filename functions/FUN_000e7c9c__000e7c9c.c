/*
 * Program: n42.bin
 * Function: FUN_000e7c9c
 * Entry: 000e7c9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7c9c(void)

{
  if ((_WPEDFMX != 0xffff) && (B_nmot != '\0')) {
    if ((_WPEDFMX < wped_w) && (((B_br != '\0' && (B_bl != '\0')) && ((DAT_003fde71 & 1) == 0)))) {
      if (DAT_003fab09 == '\0') {
        DAT_003fab0a = DAT_003fab0a | 1;
        _kmstpbr_w = kmstand;
      }
      else {
        DAT_003fab09 = DAT_003fab09 + -1;
      }
    }
    else {
      DAT_003fab09 = TWPEDBR;
      DAT_003fab0a = DAT_003fab0a & 0xfe;
    }
    if ((DAT_003fab0a & 1) != 0) {
      if (((DAT_003fab0a & 2) == 0) && (_anzpbr_w != -1)) {
        _anzpbr_w = _anzpbr_w + 1;
      }
      if ((DAT_003fab0a & 1) != 0) {
        DAT_003fab0a = DAT_003fab0a | 2;
        return;
      }
    }
    DAT_003fab0a = DAT_003fab0a & 0xfd;
  }
  return;
}

