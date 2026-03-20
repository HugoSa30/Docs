/*
 * Program: n42.bin
 * Function: FUN_0019325c
 * Entry: 0019325c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019325c(void)

{
  uint uVar1;
  
  if ((B_cdswe & B_cdhsh) == 0) {
    B_swe_c = 0;
  }
  else {
    if ((uint)((int)(uint)bssp >> 8) < (uint)bsc) {
      bssp = func_0xff217fe8((uint)FIBSALU << 8);
    }
    uVar1 = func_0xff2187cc(&FSWALUV,vfzg);
    fswares = (byte)uVar1;
    if ((uVar1 & 0xff) << 8 < (uint)bssp) {
      B_swe_c = 1;
    }
    else {
      B_swe_c = 0;
    }
  }
  return;
}

