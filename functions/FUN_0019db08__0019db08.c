/*
 * Program: n42.bin
 * Function: FUN_0019db08
 * Entry: 0019db08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019db08(void)

{
  uint uVar1;
  
  if (B_eemsav == '\0') {
    if ((B_eemrdy == '\0') && (teemrdy != 0)) {
      teemrdy = teemrdy - 1;
    }
    else {
      func_0xff210948();
      B_eemsav = '\x01';
    }
    _B_nlale = _B_nlale | 0x20;
    B_eemrdy = 1;
    return;
  }
  uVar1 = func_0xff21093c();
  if ((uVar1 & 4) != 0) {
    B_eemrdy = 1;
    _B_nlale = _B_nlale & 0xffdf;
    return;
  }
  B_eemrdy = 1;
  _B_nlale = _B_nlale | 0x20;
  return;
}

