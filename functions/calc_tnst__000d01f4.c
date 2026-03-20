/*
 * Program: n42.bin
 * Function: calc_tnst
 * Entry: 000d01f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void calc_tnst(void)

{
  byte bVar1;
  
  if ((tnst_w != 0xffff) && (B_stend != '\0')) {
    tnst_w = tnst_w + 1;
  }
  if ((B_st == '\0') && (B_stend == '\0')) {
    if (B_nmot != '\0') {
      B_st = '\x01';
    }
  }
  else {
    bVar1 = FUN_000a87cc(&NSTNM,tmot);
    if (bVar1 < nmot) {
      if (B_st != '\0') {
        B_stend = '\x01';
        B_st = '\0';
      }
    }
    else {
      bVar1 = FUN_000a87cc(&NNSTA,tans);
      if ((nmot < bVar1) && (B_st == '\0')) {
        B_st = '\x01';
        B_stend = '\0';
      }
    }
  }
  return;
}

