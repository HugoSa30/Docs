/*
 * Program: n42.bin
 * Function: FUN_0018bd98
 * Entry: 0018bd98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018bd98(void)

{
  uint uVar1;
  
  tloop_w = tloop_w + 1;
  if (((B_dcdisfr == '\0') && (B_dkaden == '\0')) && (B_fprrdy != '\0')) {
    if (((DAT_001c1b5f < tmot) && (wdks_w < _DAT_001c1bba)) && (B_dlrspid == '\0')) {
      if (_DAT_001c1b6a < _dlrspid_w) {
        if (dlrmxt < DAT_001c1b5e) {
          if (dlrmxt != 0xff) {
            dlrmxt = dlrmxt + 1;
          }
          if (tmpumast == 2) {
            tmpumast = 1;
          }
        }
        else {
          udkpat_w = udkpat_w + _DAT_001c1b70;
          if (_DAT_001c1ba2 < udkpat_w) {
            udkpat_w = _DAT_001c1ba2;
          }
          dkpstg_w = func_0xff217b40(0x800,0,_DAT_001c1b8c - udkpat_w);
          tmpumast = 1;
          ttmumad_w = tloop_w;
        }
      }
      else {
        if (tmpumast == 2) {
          uVar1 = (uint)udkpat_w - (uint)(_DAT_001c1b70 >> 2);
          if ((int)uVar1 < 0) {
            uVar1 = 0;
          }
          else if (0xffff < (int)uVar1) {
            uVar1 = 0xffff;
          }
          udkpat_w = (word)uVar1;
          if ((uVar1 & 0xffff) == 0) {
            tmpumast = 0;
          }
          dkpstg_w = func_0xff217b40(0x800,0,_DAT_001c1b8c - uVar1 & 0xffff);
        }
        if (dlrmxt != 0) {
          dlrmxt = dlrmxt - 1;
        }
        if (((uint)tloop_w == (uint)ttmumad_w + (uint)_DAT_001c1b76) && (tmpumast == 1)) {
          tmpumast = 2;
        }
      }
    }
  }
  else {
    udkpat_w = 0;
    dlrmxt = 0;
    tmpumast = 0;
    dkpstg_w = func_0xff217b40(0x800,0,_DAT_001c1b8c);
  }
  return;
}

