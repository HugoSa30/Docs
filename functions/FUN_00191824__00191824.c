/*
 * Program: n42.bin
 * Function: FUN_00191824
 * Entry: 00191824
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00191824(void)

{
  uint uVar1;
  
  if (B_dtes != '\0') {
    if (milsol_w < midter) {
      dmidte = midter - milsol_w;
    }
    else {
      dmidte = milsol_w - midter;
    }
    if (_DAT_001cb66e < dmidte) {
      B_dtevio = B_dtevio | B_dteaq;
    }
    else {
      B_dtevio = B_dtevio & ~B_dteaq;
    }
    if (nsol < nsdter) {
      dnsdte = nsdter - nsol;
    }
    else {
      dnsdte = nsol - nsdter;
    }
    if (DAT_001cb668 < dnsdte) {
      B_dtevio = B_dtevio | B_dtean;
    }
    else {
      B_dtevio = B_dtevio & ~B_dtean;
    }
    uVar1 = func_0xff217f20(_DAT_001cb67c,mdverl_w,_DAT_003fb6ec,_DAT_003fb6ec & 0xffff);
    _DAT_003fb6ec = (ushort)(uVar1 >> 0x10);
    if (mdverl_w < _DAT_003fb6ec) {
      mvdtehp = _DAT_003fb6ec - mdverl_w;
    }
    else {
      mvdtehp = mdverl_w - _DAT_003fb6ec;
    }
    if (_DAT_001cb66c < mvdtehp) {
      B_dtevio = B_dtevio | B_dtesq;
    }
    else {
      B_dtevio = B_dtevio & ~B_dtesq;
    }
    _DAT_003fb6ec = uVar1;
    if (((((B_dtevio & B_dteaq) == 0) && ((B_dtevio & B_dtean) == 0)) && ((B_dtevio & B_dtesq) == 0)
        ) && ((rl <= DAT_001cb66a && (nsol <= DAT_001cb669)))) {
      B_dtevio = B_dtevio & ~B_dteabr;
    }
    else {
      B_dtevio = B_dtevio | B_dteabr;
    }
  }
  return;
}

